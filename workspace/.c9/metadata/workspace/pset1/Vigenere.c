{"filter":false,"title":"Vigenere.c","tooltip":"/pset1/Vigenere.c","undoManager":{"mark":76,"position":76,"stack":[[{"start":{"row":0,"column":0},"end":{"row":37,"column":51},"action":"insert","lines":["/* user inputs 1 argument. if user inputs more than 1 argument,","return main with a value of 1. */","","#include <cs50.h>","#include <stdio.h>","#include <stdlib.h>","#include <string.h>","#include <ctype.h>","","int main(int argc, string argv[]) // need to add arguments here which accept an int, k)","{","    if (argc != 2)","    {","        printf(\"Uh oh. Please try again...\\n\");","        return 1;","    }","    string str = get_string(\"plaintext: \");","    printf(\"ciphertext: \");","    int k = atoi(argv[1]);","","    for (int i=0; i < strlen(str); i++)","    {","        if (str[i] >= 65 && str[i] <= 90)","        {","            str[i] = (((str[i] - 65 + k) % 26 ) +65);","            printf(\"%c\",str[i]);","        }","        else if (str[i] >= 97 && str[i] <= 122)","        {","            str[i] = ((((str[i] -97 + k)) % 26) + 97);","            printf(\"%c\",str[i]);","        }","        else printf(\"%c\",str[i]);","    } printf(\"\\n\");","}","","//if item is space or punctuation, print the item","// if item is uppercase (between 65 - 90), shift it"],"id":1}],[{"start":{"row":15,"column":5},"end":{"row":16,"column":0},"action":"insert","lines":["",""],"id":2},{"start":{"row":16,"column":0},"end":{"row":16,"column":4},"action":"insert","lines":["    "]},{"start":{"row":16,"column":4},"end":{"row":17,"column":0},"action":"insert","lines":["",""]},{"start":{"row":17,"column":0},"end":{"row":17,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":17,"column":4},"end":{"row":17,"column":5},"action":"insert","lines":["f"],"id":3},{"start":{"row":17,"column":5},"end":{"row":17,"column":6},"action":"insert","lines":["o"]},{"start":{"row":17,"column":6},"end":{"row":17,"column":7},"action":"insert","lines":["r"]}],[{"start":{"row":17,"column":7},"end":{"row":17,"column":8},"action":"insert","lines":[" "],"id":4}],[{"start":{"row":17,"column":8},"end":{"row":17,"column":9},"action":"insert","lines":["i"],"id":5},{"start":{"row":17,"column":9},"end":{"row":17,"column":10},"action":"insert","lines":["n"]},{"start":{"row":17,"column":10},"end":{"row":17,"column":11},"action":"insert","lines":["t"]}],[{"start":{"row":17,"column":11},"end":{"row":17,"column":12},"action":"insert","lines":[" "],"id":6},{"start":{"row":17,"column":12},"end":{"row":17,"column":13},"action":"insert","lines":["a"]}],[{"start":{"row":17,"column":13},"end":{"row":17,"column":14},"action":"insert","lines":[" "],"id":7},{"start":{"row":17,"column":14},"end":{"row":17,"column":15},"action":"insert","lines":["="]}],[{"start":{"row":17,"column":15},"end":{"row":17,"column":16},"action":"insert","lines":[" "],"id":8},{"start":{"row":17,"column":16},"end":{"row":17,"column":17},"action":"insert","lines":["0"]},{"start":{"row":17,"column":17},"end":{"row":17,"column":18},"action":"insert","lines":[";"]}],[{"start":{"row":17,"column":18},"end":{"row":17,"column":19},"action":"insert","lines":[" "],"id":9},{"start":{"row":17,"column":19},"end":{"row":17,"column":20},"action":"insert","lines":["a"]}],[{"start":{"row":17,"column":20},"end":{"row":17,"column":21},"action":"insert","lines":[" "],"id":10},{"start":{"row":17,"column":21},"end":{"row":17,"column":22},"action":"insert","lines":["<"]}],[{"start":{"row":17,"column":22},"end":{"row":17,"column":23},"action":"insert","lines":[" "],"id":11}],[{"start":{"row":17,"column":0},"end":{"row":18,"column":0},"action":"remove","lines":["    for int a = 0; a < ",""],"id":12}],[{"start":{"row":16,"column":0},"end":{"row":16,"column":4},"action":"remove","lines":["    "],"id":13}],[{"start":{"row":16,"column":0},"end":{"row":16,"column":4},"action":"insert","lines":["    "],"id":14}],[{"start":{"row":16,"column":4},"end":{"row":16,"column":5},"action":"insert","lines":["f"],"id":15},{"start":{"row":16,"column":5},"end":{"row":16,"column":6},"action":"insert","lines":["o"]},{"start":{"row":16,"column":6},"end":{"row":16,"column":7},"action":"insert","lines":["r"]}],[{"start":{"row":16,"column":7},"end":{"row":16,"column":8},"action":"insert","lines":[" "],"id":16},{"start":{"row":16,"column":8},"end":{"row":16,"column":9},"action":"insert","lines":["e"]},{"start":{"row":16,"column":9},"end":{"row":16,"column":10},"action":"insert","lines":["a"]},{"start":{"row":16,"column":10},"end":{"row":16,"column":11},"action":"insert","lines":["c"]},{"start":{"row":16,"column":11},"end":{"row":16,"column":12},"action":"insert","lines":["h"]}],[{"start":{"row":16,"column":12},"end":{"row":16,"column":13},"action":"insert","lines":[" "],"id":17}],[{"start":{"row":16,"column":12},"end":{"row":16,"column":13},"action":"remove","lines":[" "],"id":18}],[{"start":{"row":16,"column":8},"end":{"row":16,"column":12},"action":"remove","lines":["each"],"id":19}],[{"start":{"row":16,"column":8},"end":{"row":16,"column":9},"action":"insert","lines":["a"],"id":20}],[{"start":{"row":16,"column":9},"end":{"row":16,"column":10},"action":"insert","lines":[" "],"id":21}],[{"start":{"row":16,"column":9},"end":{"row":16,"column":10},"action":"remove","lines":[" "],"id":22},{"start":{"row":16,"column":8},"end":{"row":16,"column":9},"action":"remove","lines":["a"]}],[{"start":{"row":16,"column":8},"end":{"row":16,"column":10},"action":"insert","lines":["()"],"id":23}],[{"start":{"row":16,"column":9},"end":{"row":16,"column":10},"action":"insert","lines":["a"],"id":24}],[{"start":{"row":16,"column":10},"end":{"row":16,"column":11},"action":"insert","lines":[" "],"id":25},{"start":{"row":16,"column":11},"end":{"row":16,"column":12},"action":"insert","lines":["="]}],[{"start":{"row":16,"column":12},"end":{"row":16,"column":13},"action":"insert","lines":[" "],"id":26},{"start":{"row":16,"column":13},"end":{"row":16,"column":14},"action":"insert","lines":["0"]},{"start":{"row":16,"column":14},"end":{"row":16,"column":15},"action":"insert","lines":[";"]}],[{"start":{"row":16,"column":15},"end":{"row":16,"column":16},"action":"insert","lines":[" "],"id":27},{"start":{"row":16,"column":16},"end":{"row":16,"column":17},"action":"insert","lines":["a"]}],[{"start":{"row":16,"column":17},"end":{"row":16,"column":18},"action":"insert","lines":[" "],"id":28},{"start":{"row":16,"column":18},"end":{"row":16,"column":19},"action":"insert","lines":["<"]}],[{"start":{"row":16,"column":19},"end":{"row":16,"column":20},"action":"insert","lines":[" "],"id":29}],[{"start":{"row":16,"column":20},"end":{"row":16,"column":21},"action":"insert","lines":["a"],"id":30},{"start":{"row":16,"column":21},"end":{"row":16,"column":22},"action":"insert","lines":["r"]},{"start":{"row":16,"column":22},"end":{"row":16,"column":23},"action":"insert","lines":["g"]},{"start":{"row":16,"column":23},"end":{"row":16,"column":24},"action":"insert","lines":["v"]}],[{"start":{"row":16,"column":24},"end":{"row":16,"column":26},"action":"insert","lines":["[]"],"id":31}],[{"start":{"row":16,"column":25},"end":{"row":16,"column":26},"action":"insert","lines":["2"],"id":32}],[{"start":{"row":16,"column":25},"end":{"row":16,"column":26},"action":"remove","lines":["2"],"id":33}],[{"start":{"row":16,"column":25},"end":{"row":16,"column":26},"action":"insert","lines":["1"],"id":34}],[{"start":{"row":16,"column":20},"end":{"row":16,"column":21},"action":"insert","lines":["s"],"id":35},{"start":{"row":16,"column":21},"end":{"row":16,"column":22},"action":"insert","lines":["t"]},{"start":{"row":16,"column":22},"end":{"row":16,"column":23},"action":"insert","lines":["r"]},{"start":{"row":16,"column":23},"end":{"row":16,"column":24},"action":"insert","lines":["l"]},{"start":{"row":16,"column":24},"end":{"row":16,"column":25},"action":"insert","lines":["e"]},{"start":{"row":16,"column":25},"end":{"row":16,"column":26},"action":"insert","lines":["n"]},{"start":{"row":16,"column":26},"end":{"row":16,"column":27},"action":"insert","lines":["("]}],[{"start":{"row":16,"column":34},"end":{"row":16,"column":35},"action":"insert","lines":[")"],"id":36}],[{"start":{"row":16,"column":35},"end":{"row":16,"column":36},"action":"insert","lines":[";"],"id":37}],[{"start":{"row":16,"column":36},"end":{"row":16,"column":37},"action":"insert","lines":[" "],"id":38},{"start":{"row":16,"column":37},"end":{"row":16,"column":38},"action":"insert","lines":["a"]},{"start":{"row":16,"column":38},"end":{"row":16,"column":39},"action":"insert","lines":["+"]},{"start":{"row":16,"column":39},"end":{"row":16,"column":40},"action":"insert","lines":["+"]}],[{"start":{"row":16,"column":41},"end":{"row":16,"column":42},"action":"insert","lines":["{"],"id":39}],[{"start":{"row":16,"column":42},"end":{"row":18,"column":5},"action":"insert","lines":["","        ","    }"],"id":40}],[{"start":{"row":17,"column":8},"end":{"row":17,"column":9},"action":"insert","lines":["i"],"id":41},{"start":{"row":17,"column":9},"end":{"row":17,"column":10},"action":"insert","lines":["f"]}],[{"start":{"row":17,"column":10},"end":{"row":17,"column":11},"action":"insert","lines":[" "],"id":42}],[{"start":{"row":17,"column":11},"end":{"row":17,"column":12},"action":"insert","lines":["a"],"id":43},{"start":{"row":17,"column":12},"end":{"row":17,"column":13},"action":"insert","lines":["r"]},{"start":{"row":17,"column":13},"end":{"row":17,"column":14},"action":"insert","lines":["g"]},{"start":{"row":17,"column":14},"end":{"row":17,"column":15},"action":"insert","lines":["v"]}],[{"start":{"row":15,"column":5},"end":{"row":16,"column":0},"action":"insert","lines":["",""],"id":44},{"start":{"row":16,"column":0},"end":{"row":16,"column":4},"action":"insert","lines":["    "]},{"start":{"row":16,"column":4},"end":{"row":17,"column":0},"action":"insert","lines":["",""]},{"start":{"row":17,"column":0},"end":{"row":17,"column":4},"action":"insert","lines":["    "]},{"start":{"row":17,"column":4},"end":{"row":17,"column":5},"action":"insert","lines":["k"]},{"start":{"row":17,"column":5},"end":{"row":17,"column":6},"action":"insert","lines":["e"]},{"start":{"row":17,"column":6},"end":{"row":17,"column":7},"action":"insert","lines":["y"]}],[{"start":{"row":17,"column":7},"end":{"row":17,"column":8},"action":"insert","lines":[" "],"id":45},{"start":{"row":17,"column":8},"end":{"row":17,"column":9},"action":"insert","lines":["="]}],[{"start":{"row":17,"column":9},"end":{"row":17,"column":10},"action":"insert","lines":[" "],"id":46}],[{"start":{"row":17,"column":9},"end":{"row":17,"column":10},"action":"remove","lines":[" "],"id":47}],[{"start":{"row":17,"column":7},"end":{"row":17,"column":9},"action":"remove","lines":[" ="],"id":48}],[{"start":{"row":17,"column":4},"end":{"row":17,"column":7},"action":"remove","lines":["key"],"id":49}],[{"start":{"row":17,"column":4},"end":{"row":17,"column":5},"action":"insert","lines":["s"],"id":50},{"start":{"row":17,"column":5},"end":{"row":17,"column":6},"action":"insert","lines":["t"]},{"start":{"row":17,"column":6},"end":{"row":17,"column":7},"action":"insert","lines":["r"]}],[{"start":{"row":17,"column":7},"end":{"row":17,"column":8},"action":"insert","lines":["i"],"id":51},{"start":{"row":17,"column":8},"end":{"row":17,"column":9},"action":"insert","lines":["n"]},{"start":{"row":17,"column":9},"end":{"row":17,"column":10},"action":"insert","lines":["g"]}],[{"start":{"row":17,"column":10},"end":{"row":17,"column":11},"action":"insert","lines":[" "],"id":52},{"start":{"row":17,"column":11},"end":{"row":17,"column":12},"action":"insert","lines":["k"]},{"start":{"row":17,"column":12},"end":{"row":17,"column":13},"action":"insert","lines":["e"]},{"start":{"row":17,"column":13},"end":{"row":17,"column":14},"action":"insert","lines":["y"]}],[{"start":{"row":17,"column":14},"end":{"row":17,"column":15},"action":"insert","lines":[" "],"id":53},{"start":{"row":17,"column":15},"end":{"row":17,"column":16},"action":"insert","lines":["="]}],[{"start":{"row":17,"column":16},"end":{"row":17,"column":17},"action":"insert","lines":[" "],"id":54},{"start":{"row":17,"column":17},"end":{"row":17,"column":18},"action":"insert","lines":["a"]},{"start":{"row":17,"column":18},"end":{"row":17,"column":19},"action":"insert","lines":["r"]},{"start":{"row":17,"column":19},"end":{"row":17,"column":20},"action":"insert","lines":["g"]},{"start":{"row":17,"column":20},"end":{"row":17,"column":21},"action":"insert","lines":["v"]}],[{"start":{"row":17,"column":21},"end":{"row":17,"column":23},"action":"insert","lines":["[]"],"id":55}],[{"start":{"row":17,"column":22},"end":{"row":17,"column":23},"action":"insert","lines":["2"],"id":56}],[{"start":{"row":17,"column":22},"end":{"row":17,"column":23},"action":"remove","lines":["2"],"id":57}],[{"start":{"row":17,"column":22},"end":{"row":17,"column":23},"action":"insert","lines":["1"],"id":58}],[{"start":{"row":17,"column":24},"end":{"row":17,"column":25},"action":"insert","lines":[";"],"id":59}],[{"start":{"row":16,"column":0},"end":{"row":16,"column":4},"action":"remove","lines":["    "],"id":60}],[{"start":{"row":18,"column":27},"end":{"row":18,"column":34},"action":"remove","lines":["argv[1]"],"id":61},{"start":{"row":18,"column":27},"end":{"row":18,"column":28},"action":"insert","lines":["k"]},{"start":{"row":18,"column":28},"end":{"row":18,"column":29},"action":"insert","lines":["e"]},{"start":{"row":18,"column":29},"end":{"row":18,"column":30},"action":"insert","lines":["y"]}],[{"start":{"row":19,"column":11},"end":{"row":19,"column":15},"action":"remove","lines":["argv"],"id":62}],[{"start":{"row":19,"column":11},"end":{"row":19,"column":12},"action":"insert","lines":["i"],"id":63},{"start":{"row":19,"column":12},"end":{"row":19,"column":13},"action":"insert","lines":["s"]},{"start":{"row":19,"column":13},"end":{"row":19,"column":14},"action":"insert","lines":["a"]},{"start":{"row":19,"column":14},"end":{"row":19,"column":15},"action":"insert","lines":["l"]},{"start":{"row":19,"column":15},"end":{"row":19,"column":16},"action":"insert","lines":["p"]},{"start":{"row":19,"column":16},"end":{"row":19,"column":17},"action":"insert","lines":["h"]},{"start":{"row":19,"column":17},"end":{"row":19,"column":18},"action":"insert","lines":["a"]}],[{"start":{"row":19,"column":18},"end":{"row":19,"column":20},"action":"insert","lines":["()"],"id":64}],[{"start":{"row":19,"column":19},"end":{"row":19,"column":20},"action":"insert","lines":["k"],"id":65},{"start":{"row":19,"column":20},"end":{"row":19,"column":21},"action":"insert","lines":["e"]},{"start":{"row":19,"column":21},"end":{"row":19,"column":22},"action":"insert","lines":["y"]}],[{"start":{"row":19,"column":11},"end":{"row":19,"column":12},"action":"insert","lines":["n"],"id":66},{"start":{"row":19,"column":12},"end":{"row":19,"column":13},"action":"insert","lines":["o"]},{"start":{"row":19,"column":13},"end":{"row":19,"column":14},"action":"insert","lines":["t"]}],[{"start":{"row":19,"column":14},"end":{"row":19,"column":15},"action":"insert","lines":[" "],"id":67}],[{"start":{"row":19,"column":27},"end":{"row":19,"column":28},"action":"insert","lines":[";"],"id":68}],[{"start":{"row":19,"column":27},"end":{"row":19,"column":28},"action":"remove","lines":[";"],"id":69}],[{"start":{"row":19,"column":27},"end":{"row":19,"column":28},"action":"insert","lines":["P"],"id":70}],[{"start":{"row":19,"column":27},"end":{"row":19,"column":28},"action":"remove","lines":["P"],"id":71}],[{"start":{"row":19,"column":27},"end":{"row":19,"column":28},"action":"insert","lines":["{"],"id":72}],[{"start":{"row":19,"column":28},"end":{"row":21,"column":9},"action":"insert","lines":["","            ","        }"],"id":73}],[{"start":{"row":20,"column":12},"end":{"row":20,"column":13},"action":"insert","lines":["r"],"id":74},{"start":{"row":20,"column":13},"end":{"row":20,"column":14},"action":"insert","lines":["e"]},{"start":{"row":20,"column":14},"end":{"row":20,"column":15},"action":"insert","lines":["t"]},{"start":{"row":20,"column":15},"end":{"row":20,"column":16},"action":"insert","lines":["u"]},{"start":{"row":20,"column":16},"end":{"row":20,"column":17},"action":"insert","lines":["r"]},{"start":{"row":20,"column":17},"end":{"row":20,"column":18},"action":"insert","lines":["n"]}],[{"start":{"row":20,"column":18},"end":{"row":20,"column":19},"action":"insert","lines":[";"],"id":75}],[{"start":{"row":22,"column":5},"end":{"row":23,"column":0},"action":"insert","lines":["",""],"id":76},{"start":{"row":23,"column":0},"end":{"row":23,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":23,"column":0},"end":{"row":23,"column":4},"action":"remove","lines":["    "],"id":77}]]},"ace":{"folds":[],"scrolltop":34,"scrollleft":0,"selection":{"start":{"row":23,"column":0},"end":{"row":23,"column":0},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":1,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1524623447813,"hash":"bdff8679a9a2259f75fd2585afee46b66572b03d"}