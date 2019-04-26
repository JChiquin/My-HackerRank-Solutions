// Author: Jorge Chiquín Valderrama
// Github: github.com/JChiquin
// Gitlab: gitlab.com/JChiquin
function Tag(name) {
    this.name = name;
    this.attributes = [];
    this.pushAttribute = function(attribute) {
        if (!this.attributes.includes(attribute))
            this.attributes.push(attribute);
    }
    this.sort = function() {
        this.attributes.sort();
    }
}

function HTML() {
    this.Tags = [];
    this.pushTag = function(Tag) {
        let flag = true;
        let auxTag;
        for (tag of this.Tags)
            if (tag.name == Tag.name) {
                flag = false;
                auxTag = tag;
                break;
            }
        if (flag)
            this.Tags.push(Tag);
        else
            for (attribute of Tag.attributes)
                auxTag.pushAttribute(attribute);
    }
    this.sort = function() {
        this.Tags.sort((a, b) => a.name > b.name)
        for (tag of this.Tags)
            tag.sort();
    }
    this.toString = function() {
        let string = "";
        let length = this.Tags.length;
        this.Tags.forEach((tag, i) => string += tag.name + ":" + tag.attributes.join(",") + (i + 1 == length ? "" : "\n"));
        return string;
    }
}

function processData(input) {
    let linesTags = [];
    let html = new HTML();
    input.replace(/<(\w[^<]*)>/g, (match, lines) => linesTags.push(lines));
    for (a of linesTags) {
        let tag = new Tag(/\w+(?=[ ]?)/.exec(a).toString())
        a.replace(/\b(\w+)\=['"]/g, (match, attribute) => tag.pushAttribute(attribute));
        html.pushTag(tag);
    }
    html.sort();
    console.log(html.toString());
}

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function(input) {
    _input += input;
});

process.stdin.on("end", function() {
    processData(_input);
});