# Author: Jorge Chiquín Valderrama
# Github: github.com/JChiquin
# Gitlab: gitlab.com/JChiquin

$Regex_Pattern = '(?<=.)[13579]';
$Test_String = <STDIN> ;
$count = () = $Test_String =~ /$Regex_Pattern/g;
print "Number of matches : ",$count ;