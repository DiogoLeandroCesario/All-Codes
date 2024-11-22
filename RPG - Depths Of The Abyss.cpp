#include <iostream>
#include <limits>
using namespace std;


// Função para desenhar o menu
void desenharMenu() {
    cout << "1. Iniciar jogo" << endl;
    cout << "2. Carregar jogo" << endl;
    cout << "3. Sair" << endl;
}

// Função para desenhar inicio
void desenharInicio() {
    cout << "    ____             __  __                  ____   __  __            ___    __                             " << endl;
    cout << "   / __ \\___  ____  / /_/ /_  _____   ____  / __/  / /_/ /_  ___     /   |  / /_  __  ____________         " << endl;
    cout << "  / / / / _ \\/ __ \\/ __/ __ \\/ ___/  / __ \\/ /_   / __/ __ \\/ _ \\   / /| | / __ \\/ / / / ___/ ___/   " << endl;
    cout << " / /_/ /  __/ /_/ / /_/ / / (__  )  / /_/ / __/  / /_/ / / /  __/  / ___ |/ /_/ / /_/ (__  |__  )           " << endl;
    cout << "/_____/\\___/ .___/\\__/_/ /_/____/   \\____/_/     \\__/_/ /_/\\___/  /_/  |_/_.___/\\__, /____/____/      " << endl;
    cout << "          /_/                                                                  /____/                       " << endl;
}

// Função para desenhar a tela de game over
void gameOver() {
    cout << "   _________    __  _________   ____ _    ____________     " << endl;
    cout << "  / ____/   |  /  |/  / ____/  / __ | |  / / ____/ __ \\   " << endl;
    cout << " / / __/ /| | / /|_/ / __/    / / / | | / / __/ / /_/ /    " << endl;
    cout << "/ /_/ / ___ |/ /  / / /___   / /_/ /| |/ / /___/ _, _/     " << endl;
    cout << "\\____/_/  |_/_/  /_/_____/   \\____/ |___/_____/_/ |_|    " << endl;
}

// Função para desenhar a ilha inicio
void ilhaInicio() {
    cout << "                                                             " << endl;
    cout << "    ___ __                                                   " << endl;
    cout << "   (_  ( . ) )__                  '.    \\   :   /    .'     " << endl;
    cout << "     '(___(_____)      __           '.   \\  :  /   .'       " << endl;
    cout << "                     /. _\\            '.  \\ : /  .'        " << endl;
    cout << "                .--.|/_/__      -----____   _  _____-----    " << endl;
    cout << "_______________''.--o/___  \\_______________(_)___________   " << endl;
    cout << "  ~            |/    |_|  ~'         ~                       " << endl;
    cout << "               '  ~  |_|        ~       ~     ~     ~        " << endl;
    cout << "      ~    ~          |_|O  ~                       ~        " << endl;
    cout << "             ~     ___|_||_____     ~       ~    ~           " << endl;
    cout << "   ~    ~      .'':. .|_|A:. ..::''.                 ~       " << endl;
    cout << "             /:.  .:::|_|.\\ .:.  :.:\\   ~                  " << endl;
    cout << "  ~         :..:. .:. .::..:  .:  ..:.       ~   ~    ~      " << endl;
    cout << "             \\.: .:  :. .: ..::  ..:/                       " << endl;
    cout << "    ~      ~      ~    ~    ~         ~                      " << endl;
    cout << "               ~           ~    ~   ~             ~          " << endl;
    cout << "        ~         ~            ~   ~                 ~       " << endl;
}

// Função para desenho submarino 1
void submarinoUm() {
    cout << "                    | \\                                     " << endl;
    cout << "                     '.|                                     " << endl;
    cout << "                      ||                                     " << endl;
    cout << "                    __||___                                  " << endl;
    cout << "                   |   _   |                                 " << endl;
    cout << "                  /_) (_) (_\\                               " << endl;
    cout << "              _.-'           `-._      ________              " << endl;
    cout << "        _..--`                   `-..'       .'              " << endl;
    cout << "    _.-'  o/o                     o/o`-..__.'        ~  ~    " << endl;
    cout << " .-'      o|o                     o|o      `.._.  // ~  ~    " << endl;
    cout << " `-._     o|o                     o|o        |||&lt;|||~  ~  " << endl;
    cout << "     `-.__o\\o                     o|o       .'-'  \\\\ ~  ~ " << endl;
    cout << "          `-.______________________\\_...-``'.       ~  ~    " << endl;
    cout << "                                     `._______`.             " << endl;
    cout << "                                                             " << endl;
}


// Função para desenho submarino 2
void submarinoDois() {
    cout << "                                 o o                                         " << endl;
    cout << "                                 o ooo                                       " << endl;
    cout << "                                   o oo                                      " << endl;
    cout << "                                      o o      |   #)                        " << endl;
    cout << "                                       oo     _|_|_#_                        " << endl;
    cout << "                                         o   | U505  |                       " << endl;
    cout << "    __                    ___________________|       |_________________      " << endl;
    cout << "   |   -_______-----------                                              \\   " << endl;
    cout << "  >|    _____                                                 --->       )   " << endl;
    cout << "   |__ -     ---------_________________________________________________ /    " << endl;
}


// Função para desenho submarino 3
void submarinoTres() {
    cout << "                     `. ___                                      " << endl;
    cout << "                    __,' __`.                _..----....____     " << endl;
    cout << "        __...--.'``;.   ,.   ;``--..__     .'    ,-._    _.-'    " << endl;
    cout << "  _..-''-------'   `'   `'   `'     O ``-''._   (,;') _,'        " << endl;
    cout << ",'________________                          \\`-._`-','          " << endl;
    cout << " `._              ```````````------...___   '-.._'-:             " << endl;
    cout << "    ```--.._      ,.                     ````--...__\\-.         " << endl;
    cout << "            `.--. `-`                       ____    |  |`        " << endl;
    cout << "              `. `.                       ,'`````.  ;  ;`        " << endl;
    cout << "                `._`.        __________   `.      \\'__/`        " << endl;
    cout << "                   `-:._____/______/___/____`.     \\  `         " << endl;
    cout << "                               |       `._    `.    \\           " << endl;
    cout << "                               `._________`-.   `.   `.___       " << endl;
    cout << "                                                  `------'`      " << endl;
}

// Função para desenho submarino 4
void submarinoQuatro() {
    cout << "                    ____.-----.n.----._________.-.______                 " << endl;
    cout << "           ___,----'     \\|||||  _______________________'-._            " << endl;
    cout << "       .--'    n                 \\------------------, ` \\___'.         " << endl;
    cout << "  __,-' _____________             \\          '-===|  \\@\\      \\      " << endl;
    cout << " /-----'  /        __\\______.......|____        ==|   \\_) -----\\      " << endl;
    cout << "|@ .-----|        |         |      |_  /         -\\     =======\\'      " << endl;
    cout << "|  '-----|        |_________|......|___\\___________\\          __\\     " << endl;
    cout << " \\-----.__\\__________/             |_______.--------`._       '. \\    " << endl;
    cout << "  '-.__                           / _/                 `--.__   \\|      " << endl;
    cout << "       '-._u                    .'-'                         `-. |       " << endl;
    cout << "            '---.___________.--'                                \\|      " << endl;
}

// Função para desenho submarino 5
void submarinoCinco() {
    cout << "                                _____.-----._____                  " << endl;
    cout << "                   ___----~~~~~~. ... ..... ... .~~~~~~----___     " << endl;
    cout << "                =================================================  " << endl;
    cout << "                   ~~~-----......._____________.......-----~~~     " << endl;
    cout << "                    (____)          \\   |   /          (____)     " << endl;
    cout << "                      ||           _/   |   \\_           ||       " << endl;
    cout << "                       \\\\_______--~  //~~~\\\\  ~--_______//     " << endl;
    cout << "                        `~~~~---__   \\\\___//   __---~~~~'        " << endl;
    cout << "                                  ~~-_______-~~                    " << endl;
}

// Função para desenho submarino 6
void submarinoSeis() {
    cout << "                        __                     " << endl;
    cout << "                     .,' ,'`.                  " << endl;
    cout << "                   ,'/  /    `.                " << endl;
    cout << "                  / :__:       \\              " << endl;
    cout << "                 /  /  `.       \\             " << endl;
    cout << "                : ,'`.,' \\_      :            " << endl;
    cout << "          __    |/`-._\\ ,' `.    |            " << endl;
    cout << "         /, ``;'/ _   //   ,-'-._|             " << endl;
    cout << "         `-..: :`'-''/:   :_,-..__             " << endl;
    cout << "             : |._.-: :   :-.' -._``--.._      " << endl;
    cout << "              `|._.-|  \\   `-'-..__ ,-' /     " << endl;
    cout << "               ;    ;_.-`._,'    | ``--'       " << endl;
    cout << "              :`..-'|   _.'      ;             " << endl;
    cout << "              |-._| '--/.       /              " << endl;
    cout << "              | | __  / |      /               " << endl;
    cout << "              | |    :  :    ,'                " << endl;
    cout << "              | |-.  |`._\\_.'                 " << endl;
    cout << "              | | |  ;                         " << endl;
    cout << "              |-' '-:                          " << endl;
    cout << "             '|,(-) |                          " << endl;
    cout << "              |__..-'                          " << endl;
}

// Função para DartVader
void dartVader() {
    cout << "                       .-.                     " << endl;
    cout << "                      |_:_|                    " << endl;
    cout << "                     /(_Y_)\\                  " << endl;
    cout << ".                   ( \\/M\\/ )                " << endl;
    cout << " '.               _.'-/'-\\'-._                " << endl;
    cout << "   ':           _/.--'[[[[]'--.\\_             " << endl;
    cout << "     ':        /_'  : |::\"| :  '.\\           " << endl;
    cout << "       ':     //   ./ |oUU| \\.'  :\\          " << endl;
    cout << "         ':  _:'..' \\_|___|_/ :   :|          " << endl;
    cout << "           ':.  .'  |_[___]_|  :.':\\          " << endl;
    cout << "            [::\\ |  :  | |  :   ; : \\        " << endl;
    cout << "             '-'   \\/'.| |.' \\  .;.' |       " << endl;
    cout << "             |\\_    \\  '-'   :       |       " << endl;
    cout << "             |  \\    \\ .:    :   |   |       " << endl;
    cout << "             |   \\    | '.   :    \\  |       " << endl;
    cout << "             /       \\   :. .;       |        " << endl;
    cout << "            /     |   |  :__/     :  \\\\      " << endl;
    cout << "           |  |   |    \\:   | \\   |   ||     " << endl;
    cout << "          /    \\  : :  |:   /  |__|   /|      " << endl;
    cout << "          |     : : :_/_|  /'._\\  '--|_\\     " << endl;
    cout << "          /___.-/_|-'   \\  \\                 " << endl;
    cout << "                         '-'                   " << endl;
}

// Função para paz
void paz() {
    cout << "     .\"\".    .\"\"   " << endl;
    cout << "     |  |   /  /       " << endl;
    cout << "     |  |  /  /        " << endl;
    cout << "     |  | /  /         " << endl;
    cout << "     |  |/  ;-._       " << endl;
    cout << "     }  ` _/  / ;      " << endl;
    cout << "     |  /` ) /  /      " << endl;
    cout << "     | /  /_/\\_/\\    " << endl;
    cout << "     |/  /      |      " << endl;
    cout << "     (  ' \\ '-  |     " << endl;
    cout << "      \\    `.  /      " << endl;
    cout << "       |      |        " << endl;
    cout << "       |      |        " << endl;
}

// Função para trair amigos
void trairAmigos() {
    cout << "         _          __________                              _," << endl;
    cout << "     _.-(_)._     .\"          \".      .--\"\"--.          _.-{__}-._" << endl;
    cout << "   .'________'.   | .--------. |    .'        '.      .:-'`____`'-:." << endl;
    cout << "  [____________] /` |________| `\\  /   .'``'.   \\    /_.-'`_  _`'-._\\" << endl;
    cout << "  /  / .\\/. \\  \\|  / / .\\/. \\ \\  ||  .'/.\\/.\\'.  |  /`   / .\\/. \\   `\\" << endl;
    cout << "  |  \\__/\\__/  |\\_/  \\__/\\__/  \\_/|  : |_/\\_| ;  |  |    \\__/\\__/    |" << endl;
    cout << "  \\            /  \\            /   \\ '.\\    /.' / .-\\                /-." << endl;
    cout << "  /'._  --  _.'\\  /'._  --  _.'\\   /'. `'--'` .'\\/   '._-.__--__.-_.'   \\" << endl;
    cout << " /_   `\"\"\"\"`   _\\/_   `\"\"\"\"`   _\\ /_  `-./\\.-'  _\\'.    `\"\"\"\"\"\"\"`    .'`\\" << endl;
    cout << "(__/    '|    \\ _)_|           |_)_/            \\__)|        '       |   |" << endl;
    cout << "  |_____'|_____|   \\__________/   |              |;`_________'________`;-'" << endl;
    cout << "   '----------'    '----------'   '--------------'`--------------------`" << endl;
}

// Função para polvo
void polvo() {
    cout << "                        ___                                 " << endl;
    cout << "                     .-'   `'.                              " << endl;
    cout << "                    /         \\                            " << endl;
    cout << "                    |         ;                             " << endl;
    cout << "                    |         |           ___.--,           " << endl;
    cout << "           _.._     |0) ~ (0) |    _.---'`__.-( (_.         " << endl;
    cout << "    __.--'`_.. '.__.\\    '--. \\_.-' ,.--'`     `""`       " << endl;
    cout << "   ( ,.--'`   ',__ /./;   ;, '.__.'`    __                  " << endl;
    cout << "   _`) )  .---.__.' / |   |\\   \\__..--"" """"--.,_        " << endl;
    cout << "  `---' .'.''-._.-'`_./  /\\ '.  \\ _.-~~~````~~~-._`-.__.' " << endl;
    cout << "        | |  .' _.-' |  |  \\  \\  '.               `~---`  " << endl;
    cout << "         \\ \\/ .'     \\  \\   '. '-._)                    " << endl;
    cout << "          \\/ /        \\  \\    `=.__`~-.                  " << endl;
    cout << "          / /\\         `) )    / / `"".`\\                 " << endl;
    cout << "    , _.-'.'\\ \\        / /    ( (     / /                 " << endl;
    cout << "     `--~`   ) )    .-'.'      '.'.  | (                    " << endl;
    cout << "            (/`    ( (`          ) )  '-;                   " << endl;
    cout << "             `      '-;         (-'                         " << endl;
}

// Função para desenho barco 1
void barco1() {
    cout << "              |    |    |              " << endl;
    cout << "             )_)  )_)  )_)             " << endl;
    cout << "            )___))___))___)\\          " << endl;
    cout << "           )____)____)_____)\\         " << endl;
    cout << "         _____|____|____|____\\\\\\__  " << endl;
    cout << "         \\                   /        " << endl;
    cout << "         ^^^^^^^^^^^^^^^^^^^^^         " << endl;
}


// Função para desenho ilha modelo 2
void ilhaModelo2() {
    cout << "                 __..-----')                                              " << endl;
    cout << "       ,.--._ .-'_..--...-'                                               " << endl;
    cout << "      '-''. _/_ /  ..--'''''-.                                            " << endl;
    cout << "      _.--''...:._:(_ ..:'::. \\                                          " << endl;
    cout << "   .-' ..::--""_(##)#)'':.   \\ \\)    \\ _|_ /                           " << endl;
    cout << "  /_:-:'/  :__(##)##)    ): )   '-./'   '\\.-'                            " << endl;
    cout << "  '  / |  :' :/""\\///)    /:.'    --(       )--                          " << endl;
    cout << "    / :( :( :(   (#//)  '       .-'\\.___./'-.                            " << endl;
    cout << "   / :/|\\ :\\_:\\   \\#//\\            /  |  \\                          " << endl;
    cout << "   |:/ | ""--':\\   (#//)              '                                  " << endl;
    cout << "   \\/  \\ :|  \\ :\\  (#//)                                              " << endl;
    cout << "        \\:\\   '.':. \\#//\\                                             " << endl;
    cout << "         ':|    '--'(#///)                                                " << endl;
    cout << "                    (#///)                                                " << endl;
    cout << "                    (#///)                                                " << endl;
    cout << "                     \\#///\\                                             " << endl;
    cout << "                     (##///)                                              " << endl;
    cout << "                     (##///)                                              " << endl;
    cout << "                     (##///)                                              " << endl;
    cout << "                     (##///)                                              " << endl;
    cout << "                      \\##///\\                                           " << endl;
    cout << "                      (###///)                                            " << endl;
    cout << "                      (###////)__...-----....__                           " << endl;
    cout << "                      (#/::'''                 ""--.._                    " << endl;
    cout << "                 __..-'''                             '-._                " << endl;
    cout << "         __..--""                                         '._             " << endl;
    cout << "___..--'"                                                    "-..____     " << endl;
    cout << "  (_ ""---....___                                     __...--"" _)        " << endl;
    cout << "    ""'--...  ___""""'-----......._______......----'""     --""'          " << endl;
    cout << "                  """"       ---.....   ___....----                       " << endl;

}


// Função para desenho bussola
void bussola() {
    cout << "          *           " << endl;
    cout << "        * N *         " << endl;
    cout << "      * \\ | / *      " << endl;
    cout << "   *   W--+--E   *    " << endl;
    cout << "      * / | \\ *      " << endl;
    cout << "        * S *         " << endl;
    cout << "          *           " << endl;

}

// Função para desenho mapa antigo
void mapaAntigo() {
    cout << "   .-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-.        _      " << endl;
    cout << "   |    ~~~~~~ o  ~~~~   ~~~  ~~~~~~    ~~~|       | |     " << endl;
    cout << "   |  ~~~~~     ~~~~   ~~~~~   ~~~~  ~~~~  |       | |     " << endl;
    cout << "   |   o  ~~~   ___   ~~~~   ~~~~    \\o/~~ |      /   \\  " << endl;
    cout << "   |     ~~~~  / X \\    ~~~~   ~~~~~   ~~~ |     |     |  " << endl;
    cout << "   | ~~~   ~~  \\___/    ~~~~   o   ~~~~  ~ |     |     |  " << endl;
    cout << "   |   ~~~~     ~~~~  ~~~~~~~~    ~~~~~  O |     |     |   " << endl;
    cout << "   | ~~~~~  o   ~~~~    ~~~~     ~~~~   ~~~|     \\_____/  " << endl;
    cout << "   '-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-'               " << endl;
}

// Função para desenho fuga a nado
void fugaNado() {
    cout << "                        .-""""-.                           " << endl;
    cout << "                       /        \\                          " << endl;
    cout << "                      ;_.-""""-._;                         " << endl; 
    cout << "   .,_        __,.---.-(=(o)-(o)=)-.---.,__       _,.      " << endl;
    cout << "   '._'--'```           \\   ^   /          ```'--'_.'      " << endl;
    cout << "      ``'''~---~~%^%^.%.`._0_.'%,^%^%^~~---~'''``          " << endl;
    cout << "      ~^~- `^-% ^~.%~%.^~-%-~.%-^.% ~`% ~-`%^`-~^~         " << endl;
    cout << "         ~^- ~^- `~.^- %`~.%~-'%~^- %~^- ~^                " << endl;
}

// Função para desenho monstros do mar 1
void monstroMar1() {
    cout << "                                                  _   _                                                  " << endl;
    cout << "                                  __________     ' 'V' '         ____                                    " << endl;
    cout << "                         ,.._   ,'  ,    ,  '.       ___      .''    '-._                                " << endl;
    cout << "        _   _      ,---.   ) ; |    ______    |     /.-.'-- .' .-''--_   '-.                             " << endl;
    cout << "       ' 'V' '   ,'     '-'  / (* _/\\/\\/\\/\\_ *)    ;'   '-.__.'       '-.   '.                       " << endl;
    cout << "             _.-'   ,''-.__-'  | _\\VVVvvvVv/_ |               _,..       \\    \\                       " << endl;
    cout << "           ,'     .'           | >>v>>  <<v<< |              .'.'          |    '-.                      " << endl;
    cout << "          /      /   .;:'-.     \\ 77ama^a4<< / .;'          '.'.           '.     '.                    " << endl;
    cout << "         ;     ,'    '  )  \\    | A/\\/\\/\\/\\A|  |'.           ', '-.._        |     |                " << endl;
    cout << "        /     (        /    :    \\  \\AAAA/  /   \\ ',          '-_    '-.     |     ':                 " << endl;
    cout << "       ;       ;    .-'    .'    |'-______-'|    |  '-.__        '-,    '.   \\      ;                   " << endl;
    cout << "       |        \\ .'    _.'      | _        |     '.     ''-_      ;     |   /      |                   " << endl;
    cout << "       |         /    _(__       .''_',  ____L_      '-._     '.    |     | |        \\                  " << endl;
    cout << "   _~' |         |_.-'    '-_..'  ,' ';  \\ \\ \\ \\.,_-.,_.-'.     \\_.-:     |-|         |_.-_.-_      " << endl;
    cout << "     .^'-._-',_.''    ___        /|_-~_.-/_/_/_/ /'>      |     |  |     / /          :                  " << endl;
    cout << "              /      ,'   ''-.--'     (\\____I____))      .n_--_.^,/    ,' |            \\               " << endl;
    cout << "             |      /                  \\^'^'^'^'^/               ^._,''-^|             |                " << endl;
    cout << "             '-^._,-'-_       -_.'-   '-''..^'-''-^                     _-'-,~^_-._,M-_.'-_              " << endl;
}


// Função para desenho Caveira 1
void caveiraUm() {
    cout << "                     _____                        " << endl;
    cout << "              __,---'     `--.__                  " << endl;
    cout << "           ,-'                ; `.                " << endl;
    cout << "          ,'                  `--.`--.            " << endl;
    cout << "         ,'                       `._ `-.         " << endl;
    cout << "         ;                     ;     `-- ;        " << endl;
    cout << "       ,-'-_       _,-~~-.      ,--      `.       " << endl;
    cout << "       ;;   `-,;    ,'~`.__    ,;;;    ;  ;       " << endl;
    cout << "       ;;    ;,'  ,;;      `,  ;;;     `. ;       " << endl;
    cout << "       `:   ,'    `:;     __/  `.;      ; ;       " << endl;
    cout << "        ;~~^.   `.   `---'~~    ;;      ; ;       " << endl;
    cout << "        `,' `.   `.            .;;;     ;'        " << endl;
    cout << "        ,',^. `.  `._    __    `:;     ,'         " << endl;
    cout << "        `-' `--'    ~`--'~~`--.  ~    ,'          " << endl;
    cout << "       /;`-;_ ; ;. /. /   ; ~~`-.     ;           " << endl;
    cout << "      ; ;  ; `,;`-;__;---;      `----'            " << endl;
    cout << "      ``-`-;__;:  ;  ;__;                         " << endl;
    cout << "               `-- `-'                            " << endl;


}

// Função para desenho Caveira 2
void caveiraDois() {
    cout << "         ____           " << endl;
    cout << "       ,'   x`.         " << endl;
    cout << "      /        \\       " << endl;
    cout << "      \\ ()  () /       " << endl;
    cout << "       `. /\\ ,'        " << endl;
    cout << "   8====| "" |====8     " << endl;
    cout << "        `HHHH'          " << endl;
}

// Função para desenho Caveira 3
void caveiraTres() {
    cout << "      _                   _            " << endl;
    cout << "    _( )                 ( )_          " << endl;
    cout << "   (_, |      __ __      | ,_)         " << endl;
    cout << "      \\'\\    /  ^  \\    /'/          " << endl;
    cout << "       '\\'\\,/\\      \\,/'/           " << endl;
    cout << "         '\\\\| []   [] |/'              " << endl;
    cout << "           (_  /^\\  _)                " << endl;
    cout << "             \\\\  ~  /                  " << endl;
    cout << "             /HHHHH\\\\                  " << endl;
    cout << "           /'/{^^^}\\'\\                " << endl;
    cout << "       _,/'/'  ^^^  '\\'\\,_            " << endl;
    cout << "      (_, |           | ,_)            " << endl;
    cout << "        (_)           (_)              " << endl;

}

// Função para desenho monstros do mar 2
void monstroMar2() {
    cout << "                                                    .                                         " << endl;
    cout << "                                                _._/|_                                        " << endl;
    cout << "                      .                        (__( (_(                                       " << endl;
    cout << "                     /|                   - '. \'-:)8)-.                                      " << endl;
    cout << "                    ( (_..-..          .'     '.'-(_(-'                                       " << endl;
    cout << "           _~_       '-.--.. '.      .'         '  )8)                                        " << endl;
    cout << "        __(__(__     \\      88 \\    /            )(8(        \\.    .                          " << endl;
    cout << "       (_((_((_(      8\\     88 \\.-'  .-.        )88 :       /\\\\  _X_ __ .                    " << endl;
    cout << "     \\=-:--:--:--.     8)     88/__) /(e))       88.'        \\#\\\\(__((_//\\   .                " << endl;
    cout << "    _,\\_o__o__o__/,__(8(_,__,_'.'--' '--' _    _88.'..___,___,\\_,,,|/_(Y(/__,__,___,___ldb    " << endl;
    cout << "                \\    '._''--..'-/88 ) 88)(8  \\  \\              \\w\\_   /X/                    " << endl;
    cout << "                 8\\ __.--''_--'( 8  ( 8/   88( )8 )              -' ' __                      " << endl;
    cout << "                  '8888--''     \\ 8  \\88   88| 88(                   /_/                      " << endl;
    cout << "                                )88  (88   ) ) 88\\                  _ '                       " << endl;
    cout << "                               ( 8    )88 ( (   88\\                /V                         " << endl;
    cout << "                                )8)   (8\'-8 )-. '8'.___ __                                   " << endl;
    cout << "                                //     \\8 '-//--'  '88-8.-'             H                     " << endl;
    cout << "                               ((     ((   ))                                                 " << endl;
    cout << "                                \\\\      \\   (    X                                             " << endl;
}


// Função para desenho monstros do mar 3
void monstroMar3() {
    cout << "                        \\                                                            " << endl;
    cout << "      '.                 \\.                                                          " << endl;
    cout << "       '.                 '\\                                                         " << endl;
    cout << "       ::                  \\\\                                                        " << endl;
    cout << "       ' .                 '.\\                                                       " << endl;
    cout << "        ""    ;.   ,        ' .                                                      " << endl;
    cout << "        '.~   .'-  .^  .     \\ \\                                                     " << endl;
    cout << "     -.._' \\   \\ \\  \\\\  \\    '  \\                                                    " << endl;
    cout << "       '.'\\ \\._ ) \\ ) \\.)\\-\\..\\  :                                                   " << endl;
    cout << "         ""\\ ',\\'_.);-.).) )) '~~).                                                  " << endl;
    cout << " ~'~~.._    '  -'         ""~.)    '~,                                               " << endl;
    cout << "  ""~.  ""~~)'. '-,           ',."""" '~.                                            " << endl;
    cout << "      ' ..~',' '-""~~...___.~""  '~.     ~.                                          " << endl;
    cout << "       .'  .''      _.~~"""".,       '~.   '~~~.~.  _..._                            " << endl;
    cout << "     .'    |       '. (  () )';&gt;       ""~.      '(.___.)..                       " << endl;
    cout << "    /      '       ..""~~~~""_.~  ....._.  '~.             ""~.                      " << endl;
    cout << "   '     ___\\~-      """"""""    '       ""~~.""':==&gt;..        '~.                " << endl;
    cout << " .'          \\_~               .              '~((####)) ..       '.                 " << endl;
    cout << "|       _.-"", /          ..~'                  ""~~~'    ""~~~~~  :&gt;             " << endl;
    cout << "              /'.                       .~'~~..___............~;&gt;~""              " << endl;
    cout << "           .~"  "~.         '-~~....--""__________,,....~~~~""'                      " << endl;
    cout << "                   ""--""~~..._____,..~~''                                           " << endl;
    cout << "                  .'                                                                 " << endl;
    cout << "                  |                                                                  " << endl;
    cout << "                  ;                                                                  " << endl;
}

// Função para desenho monstros do mar 4
void monstroMar4() {
    cout << "                                                            ///\\\\\\\\                           " << endl;
    cout << "                                   --_                    //       \\\\                           " << endl;
    cout << "                                    \\ \\                ///           \\\\                       " << endl;
    cout << "                                    \\  \\             //       ///\\\\    \\                     " << endl;
    cout << "              --___   //////\\\\\\\\    |   \\         ///       //     \\   \\                   " << endl;
    cout << "              \\    ///          \\\\\\\\\\\\\\ |       //        //       \\    \\               " << endl;
    cout << "               \\///                    \\\\\\\\\\\\\\///        /          \\    \\              " << endl;
    cout << "              //                                        /            \\   \\                      " << endl;
    cout << "             /                                         /             \\    \\                     " << endl;
    cout << "           //                                        //              \\    \\                     " << endl;
    cout << "         //                                         /                 \\   \\                     " << endl;
    cout << "        /                            /     \\      //                  \\   \\                    " << endl;
    cout << "      //                  \\          \\     /    //                    \\   /                    " << endl;
    cout << "     /                    /           \\    /   /                      /   /                      " << endl;
    cout << "    /     ///\\\\\\\\\\  \\     /           |    |///                       /   /                 " << endl;
    cout << "  //    //        \\\\|    /\\\\\\       ///    /                         /    /                  " << endl;
    cout << " /    //            /    /   \\\\\\\\/// /    /                          /    /                   " << endl;
    cout << "/   //              /    /           /   /                          /    /                        " << endl;
    cout << "/   /              /   _/           /  _/                           /    /                        " << endl;
    cout << "/   /              /  /            /__/                            /    /                         " << endl;
    cout << "\\   \\             /__/                                            /    /                        " << endl;
    cout << " \\  \\                                                           _/    /                         " << endl;
    cout << "  \\  \\                                                       __/     /                          " << endl;
    cout << "   \\  \\                                                  ___/       /                           " << endl;
    cout << "   \\  \\_                                           __---/       ___/                            " << endl;
    cout << "    \\   ---_____                             __---/          __/                                 " << endl;
    cout << "     \\______-----                           /        _____---                                    " << endl;
    cout << "                                           /     ___/                                             " << endl;
    cout << "                                          /     /                                                 " << endl;
    cout << "                                          |  O  \\                                                " << endl;
    cout << "                                          /    /|                                                 " << endl;
    cout << "                                          /   / /                                                 " << endl;
    cout << "                                          /  / /                                                  " << endl;
    cout << "                                          |m/\\_/                                                 " << endl;
}

// Função para desenho vergonha
void vergonha() {
    cout << "                          .==``````==.=``````=.      " << endl;
    cout << "                         /           `)        \\     " << endl;
    cout << "                       /'     =~^^^^^^=. .====+.\\_   " << endl;
    cout << "                      /                 '\\       '\\  " << endl;
    cout << "                     /     _.==~~~~~~~~~=.\\    .===) " << endl;
    cout << "                          {.==~~``````~~=.|   .=~~~|  " << endl;
    cout << "                          \\'   ######~'''\\  / ###'=|  " << endl;
    cout << "                           '~=.######     \\< _###_/   " << endl;
    cout << "                               '~=='====~~') ~=~_/    " << endl;
    cout << "                              '~~==.....==~'    \\    " << endl;
    cout << "                      _            _.=-'        _)   " << endl;
    cout << "                     '='=.                    .='    " << endl;
    cout << "                      \\'=.'''~~~~~~========~~~')     " << endl;
    cout << "                       '=.'~~~~~~=========~~')'      " << endl;
    cout << "                          '~~~~=========~~~~'    " << endl;
}


// Função para desenho prisioneiro
void gradePrisao() {
    cout << "    _________________________    " << endl;
    cout << "       ||   ||     ||   ||       " << endl;
    cout << "       ||   ||, , ,||   ||       " << endl;
    cout << "       ||  (||/|/(\\||/  ||      " << endl;
    cout << "       ||  (||/|/(\\||/  ||      " << endl;
    cout << "       ||  ||| _'_`|||  ||       " << endl;
    cout << "       ||   || o o ||   ||       " << endl;
    cout << "       ||  (||  - `||)  ||       " << endl;
    cout << "       ||   ||  =  ||   ||       " << endl;
    cout << "       ||   ||\\___/||   ||      " << endl;
    cout << "       ||___||) , (||___||       " << endl;
    cout << "      /||---||-\\_/-||---||\\    " << endl;
    cout << "     / ||--_||_____||_--|| \\    " << endl;
    cout << "    (_(||)-|         |-(||)_)    " << endl;
}

// Função para desenho batalha maritma
void batalhaMaritma() {
    cout << "                             ____" << endl;
    cout << "                     __,-~~/~    `---." << endl;
    cout << "                   _/_,---(      ,    )" << endl;
    cout << "_      _       __ /        <    /   )  \\___    _      _" << endl;
    cout << ")`'-.,_)`'-.,_'====------------------===;;; ~~ )`'-.,_)`'-.,_" << endl;
    cout << "                  \\/  ~\"~\"~\"~\"~\"~\\~\"~)~\"/" << endl;
    cout << "  ~~~~       ~~   (_ (   \\  (     >    \\)   ~~~        ~~~~" << endl;
    cout << "         ~~        \\_( _ >         >_>'         ~~" << endl;
    cout << " ~~                 ~ `-i' ::>|--\"   ~~             ~~~" << endl;
    cout << "           ~~~~           I;|.|.|           ~~~            ~~" << endl;
    cout << "  ~~~            ~~      >|i::|i|`.   ~~           ~~~" << endl;
}
// Função para desenho vulcao maritmo
void vulcaoMaritmo() {
    cout << "_      _      _      _      _      _      _      _      " << endl;
    cout << ")`'-.,_)`'-.,_)`'-.,_)`'-.,_)`'-.,_)`'-.,_)`'-.,_)`'-.,_" << endl;
    cout << "                          .'  .    " << endl;
    cout << "  _         ~~~~        .`.'.`'.      _              ~~    " << endl;
    cout << "   )`'-.,_        ~    `,'....`       )`'-.,_        " << endl;
    cout << "              ~~     `'``''`.                     ~~" << endl;
    cout << "                     .'.``'`            ~~~     _         ~~" << endl;
    cout << "     ~~~          .'`..'''`.         .'`        )`'-.,_" << endl;
    cout << "            `,'`.   ````.'`        `.`.`" << endl;
    cout << " _         `.`'  xl\"\"``\"\"lx      .`.`     ~~~         ~~~" << endl;
    cout << " )`'-.,_    `.,` X8Xxx..xxX8X    '.`'" << endl;
    cout << "             X   8X8bdX8bd8X8    X                ~~~    " << endl;
    cout << "      `,.   dXb dX8Xbd8XbdX8Xb  d8b    ~~~   _" << endl;
    cout << "~~   `, .  dX8bdX8Xbd8X8XbdX8b.d8Xb          )`'-.,_" << endl;
    cout << "     .`,  dX8bdX8Xbd8X8X8XbdX8bdX8Xb                   ~~~~" << endl;
    cout << "      X   X8bdX8Xbd8X8X8X8XbdX8bdX8Xb     ~~~" << endl;
    cout << "~    d8b d8X8X8Xbd8X8X8X8X8XbdX8bdX8b              ~~~    " << endl;
    cout << "    d8X8bdX8X8Xbd8X8X8X8X8X8XdbX8bdX8b_" << endl;
    cout << "   d8X8X8X8X8bdX8X8X8X8X8X8X8X8db8Xbd88b-.    ~~~      ~~~" << endl;
    cout << "        >|i::|i|`.   ~~           ~~~" << endl;
}
// Função para desenho submarino 7
void submarinoSete() {
cout << "                             ?" << endl;
    cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~|^\"~~~~~~~~~~~~~~~~~~~~~~~~~o~~~~~~~~~~~" << endl;
    cout << "        o                   |                  o      __o" << endl;
    cout << "         o                  |                 o     |X__>" << endl;
    cout << "       ___o                 |                __o" << endl;
    cout << "     (X___>--             __|__            |X__>     o" << endl;
    cout << "                         |     \\                   __o" << endl;
    cout << "                         |      \\                |X__>" << endl;
    cout << "  _______________________|_______\\________________" << endl;
    cout << " <                                                \\____________   _" << endl;
    cout << "  \\                                                            \\ (_)" << endl;
    cout << "   \\    O       O       O                                       >=)" << endl;
    cout << "    \\__________________________________________________________/ (_)" << endl;
}
// Função para desenho mar revolto
void marRevolto() {
cout << "           _.====.._                      _.====.._                   " << endl;
    cout << "         ,:._       ~-_                 ,:._       ~-_                " << endl;
    cout << "             `\\        ~-_                  `\\        ~-_            " << endl;
    cout << "               | _  _  |  `.                  | _  _  |  `.           " << endl;
    cout << "             ,/ /_)/ | |    ~-_             ,/ /_)/ | |    ~-_        " << endl;
    cout << "    -..__..-''  \\_ \\_\\ `_      ~~--._-._..-''  \\_ \\_\\ `_      ~~-." << endl;

}
// Função para desenho redemoinho
void redemoinho() {
    cout << "              __,aaPPPPPPPPaa,__" << endl;
    cout << "          ,adP\"\"\"'          `\"\"Yb,_" << endl;
    cout << "       ,adP'                     `\"Yb," << endl;
    cout << "     ,dP'     ,aadPP\"\"\"\"\"YYba,_     `\"Y," << endl;
    cout << "    ,P'    ,aP'            `\"\"Ya,     \"Y," << endl;
    cout << "   ,P'    aP'     _________     `\"Ya    `Yb," << endl;
    cout << "  ,P'    d\"    ,adP\"\"\"\"\"\"\"\"Yba,    `Y,    \"Y," << endl;
    cout << " ,d'   ,d'   ,dP\"            `Yb,   `Y,    `Y," << endl;
    cout << " d'   ,d'   ,d'    ,dP\"\"Yb,    `Y,   `Y,    `b" << endl;
    cout << " 8    d'    d'   ,d\"      \"b,   `Y,   `8,    Y," << endl;
    cout << " 8    8     8    d'    _   `Y,   `8    `8    `b" << endl;
    cout << " 8    8     8    8     8    `8    8     8     8" << endl;
    cout << " 8    Y,    Y,   `b, ,aP     P    8    ,P     8" << endl;
    cout << " I,   `Y,   `Ya    \"\"\"\"     d'   ,P    d\"    ,P" << endl;
    cout << " `Y,   `8,    `Ya         ,8\"   ,P'   ,P'    d'" << endl;
    cout << "  `Y,   `Ya,    `Ya,,__,,d\"'   ,P'   ,P\"    ,P" << endl;
    cout << "   `Y,    `Ya,     `\"\"\"\"'     ,P'   ,d\"    ,P'" << endl;
    cout << "    `Yb,    `\"Ya,_          ,d\"    ,P'    ,P'" << endl;
    cout << "      `Yb,      \"\"YbaaaaaadP\"     ,P'    ,P'  " << endl;
    cout << "        `Yba,                   ,d'    ,dP'  " << endl;
    cout << "           `\"Yba,__       __,adP\"     dP\"" << endl;
    cout << "               `\"\"\"\"\"\"\"\"\"\"\"'\"" << endl;
}
// Função para desenho principe nemo
void principeIndiano() {
cout << "                                                               |\\/\\/\\/\\/|" << endl;
    cout << "                                                               '========'" << endl;
    cout << "                                                               (_ SSSSSSs" << endl;
    cout << "                                                               )a'`SSSSSs" << endl;
    cout << "                                                              /_   SSSSSS" << endl;
    cout << "                                                              .=## SSSSS" << endl;
    cout << "                                                              ###::::SSSSS" << endl;
    cout << "                                                            .:;:'  . .  \\\\" << endl;
    cout << "                                                           .::/  '     .'|" << endl;
    cout << "                                                          .::( .         |" << endl;
    cout << "                                                          :::)           \\" << endl;
    cout << "                                                         /)            ( |" << endl;
    cout << "                                                       .'  \\  .       ./ /" << endl;
    cout << "                                                    _-'    |\\  .        |" << endl;
    cout << "                                  _..--..   .  /\"---\\      | ` |      . |" << endl;
    cout << "          -=====================,' _     \\=(*#(7.#####()   |  `/_..   , (" << endl;
    cout << "                      _.-''``';'-''-) ,.  \\ '  '+/// |   .'/   \\  ``-.) \\" << endl;
    cout << "                    ,'  _.-  ((    `-'  `._\\    `` \\_/_.'  )    /`-._  ) |" << endl;
    cout << "                  ,'\\ ,'  _.'.`:-.    \\.-'                 /   <_L   )\"  |" << endl;
    cout << "                _/   `._,' ,')`;  `-'`'                    |     L  /    /" << endl;
    cout << "               / `.   ,' ,|_/ / \\                          (    <_-'     \\" << endl;
    cout << "               \\ / `./  '  / /,' \\                        /|`         `. |" << endl;
    cout << "               )\\   /`._   ,'`._.-\\                       |)            \\'" << endl;
    cout << "              /  `.'    )-'.-,' )__)                      |\\            `|" << endl;
    cout << "             : /`. `.._(--.`':`':/ \\                      ) \\             \\" << endl;
    cout << "             |::::\\     ,'/::;-))  /                      ( )`.            |" << endl;
    cout << "             ||::::|  . :|  |==[]=:                       .        -       \\" << endl;
    cout << " ___ ___     '|;:::|  | |'   \\=[]=|                     /  \\                \\" << endl;
    cout << "|   /_  ||``|||:::::  | ;    | |  |                     \\_.'\\_               `-." << endl;
    cout << ":   \\_``[]--[]|::::'\\_;'     )-'..`._                 .-'\\``:: ` .              \\" << endl;
    cout << " \\___.>`''-.||:.__,'     SSt |_______`>              <_____:::.         . . \\  _/" << endl;
}
// Função para desenho principe nemo 2
void principeNemo2() {
cout << "                    ." << endl;
    cout << "                   / \\" << endl;
    cout << "                  _\\ /_" << endl;
    cout << "        .     .  (,'v`.)  .     ." << endl;
    cout << "        \\)   ( )  ,' `.  ( )   (/" << endl;
    cout << "         \\`. / `-'     `-' \\ ,'/" << endl;
    cout << "          : '    _______    ' :" << endl;
    cout << "          |  _,-'  ,-.  `-._  |" << endl;
    cout << "          |,' ( )__`-'__( ) `.|" << endl;
    cout << "          (|,-,'-._   _.-`.-.|)" << endl;
    cout << "          /  /<( o)> <( o)>\\  \\" << endl;
    cout << "          :  :     | |     :  :" << endl;
    cout << "          |  |     ; :     |  |" << endl;
    cout << "          |  |    (.-.)    |  |" << endl;
    cout << "          |  |  ,' ___ `.  |  |" << endl;
    cout << "          ;  |)/ ,'---'. \\(|  :" << endl;
    cout << "      _,-/   |/\\(       )/\\|   \\-._" << endl;
    cout << "_..--'.-(    |   `-'''-'   |    )-.`--.._" << endl;
    cout << "         `.  ;`._________,':  ,'" << endl;
    cout << "        ,' `/               \\'`." << endl;
    cout << "             `------.------'" << endl;

}
// Função para desenho a curiosidade matou o gato
void gatoCurioso() {
cout << "                                                                                _                   _       " << endl;
    cout << "         ,-.       _,---._ __  / \\           ( \\                              _( )                 ( )_      " << endl;
    cout << "        /  )    .-'       `./ /   \\           \\ \\                            (_, |      __ __      | ,_)     " << endl;
    cout << "       (  (   ,'            `/    /|          / /                |\\\\            \\'\\    /  ^  \\    /'/        " << endl;
    cout << "        \\  `-\"             \\'\\   / |         / /     .-`````-.   / ^`-.          '\\'\\,/\\      \\,/'/'         " << endl;
    cout << "         `.              ,  \\ \\ /  |         \\ \\    /         \\_/  {x} `o          '\\| []   [] |/'           " << endl;
    cout << "          /`.          ,'-`----Y   |          \\ \\  /   .---.   \\\\ _  ,--'            (_  /^\\  _)              " << endl;
    cout << "         (            ;        |   '           \\ \\/   /     \\,  \\( `^^^                \\  ~  /                " << endl;
    cout << "         |  ,-.    ,-'         |  /            \\   \\/\\      (\\  )                      /HHHHH\\                " << endl;
    cout << "         |  | (   |        hjw | /               \\   ) \\     ) \\ \\                   /'/{^^^}\'\\              " << endl;
    cout << "         )  |  \\  `.___________|/                 ) /__ \\__  ) (\\ \\___            _,/'/'  ^^^  '\\'\\,_        " << endl;
    cout << "         `--'   `--'                             (___)))__))(__))(__)))         (_, |           | ,_)        " << endl;
    cout << "                                                                                  (_)           (_)          " << endl;

}
// Função para desenho morte
void morte() {
    cout << "                      ,____" << endl;
    cout << "                      |---.\\" << endl;
    cout << "              ___     |    `" << endl;
    cout << "             / .-\\  ./=)" << endl;
    cout << "            |  |\"|_/\\/|" << endl;
    cout << "            ;  |-;| /_|" << endl;
    cout << "           / \\_| |/ \\ |" << endl;
    cout << "          /      \\/\\( |" << endl;
    cout << "          |   /  |` ) |" << endl;
    cout << "          /   \\ _/    |" << endl;
    cout << "         /--._/  \\    |" << endl;
    cout << "         `/|)    |    /" << endl;
    cout << "           /     |   |" << endl;
    cout << "         .'      |   |" << endl;
    cout << "        /         \\  |" << endl;
    cout << "       (_.-.__.__./  /" << endl;
}
// Função para desenho Galeão Naufrago
void galeaoNaufrago() {
cout << " _      _      _      _      _      _      _      _      _" << endl;
    cout << ")`'-.,_)`'-.,_)`'-.,_)`'-.,_)`'-.,_)`'-.,_)`'-.,_)`'-.,_)`'-.,_                                                   " << endl;
    cout << "                                <                              " << endl;
    cout << " ~~~         ~~     __'__     __'__      __'__    _        ~~  " << endl;
    cout << "                   /    /    /    /     /    /    )`'-.,_  o    " << endl;
    cout << "    o  ~~         /\\____\\    \\____\\     \\____\\             o" << endl;
    cout << "     o     ~~    / ___!___   ___!___    ___!___      ~~~  o  " << endl;
    cout << "    o          // (      (  (      (   (      (             o" << endl;
    cout << " ~           / /   \\______\\  \\______\\   \\______\\           ~~        " << endl;
    cout << "   o       /  /   ____!_____ ___!______ ____!_____    _" << endl;
    cout << "         /   /   /         //         //         /    )`'-.,_" << endl;
    cout << "  o    /    /   |         ||         ||         |" << endl;
    cout << "     /_____/     \\         \\\\         \\\\         \\ ~~~    o  " << endl;
    cout << "   o       \\      \\_________\\\\_________\\\\_________\\     o    ~~" << endl;
    cout << "      ~     \\         |          |         |              ." << endl;
    cout << "             \\________!__________!_________!________/  ~~  o" << endl;
    cout << "   ~~~        \\|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_|_/|     o  " << endl;
    cout << "          ~~   \\    _______________                /      ~~~" << endl;
    cout << "                \\_\"/_)/_)_/_)__)/_)/)/)_)_\"_'_\"_//" << endl;
    cout << "^!!^^\"!%%!^^^!^^^!!^^^%%%%%!!!!^^^%%^^^!!%%%%^^^!!!!!!%%%^^^^%^^%%%^^^!" << endl;
}
// Função para desenho atlantis
void atlantis() {
cout << "_      _      _      _      _      _      _      _      _" << endl;
    cout << ")`'-.,_)`'-.,_)`'-.,_)`'-.,_)`'-.,_)`'-.,_)`'-.,_)`'-.,_)`'-.,_" << endl;
    cout << "                               |" << endl;
    cout << "  _      ~~         ~~~     ._/_\\_.    _        ~~       _" << endl;
    cout << "  )`'-.,_          _          |n|      )`'-.,_         )`'-.,_" << endl;
    cout << "                   )`'-.,_ ._/_,_\\_.                 " << endl;
    cout << "   ~~~~    _                .|.n.|       ~~~     _         ~~" << endl;
    cout << "           )`'-.,_   ~~   ._/_,_,_\\_.            )`'-.,_" << endl;
    cout << "                            |..n..|    ~~               " << endl;
    cout << "     . ~~~~           ~~  ._/_,_,_,_\\_.       ~~~           ~~~" << endl;
    cout << "    .           ~~          |...n...|                .  ~~~    " << endl;
    cout << "     o ~~~              ._/_,_,_,_,_\\_.      ~~~    .    " << endl;
    cout << " ~~ o          ~~~~       |....n....|                o  ~~~       " << endl;
    cout << "     o   ~~~           ._/_,_,_,_,_,_\\_.        ~~~ o" << endl;
    cout << "                ~~~      |.....n.....|               o      ~~~~" << endl;
    cout << "   ~~~                ._/_,_,_,_,_,_,_\\_.    ~~~    o  ~~~     " << endl;
    cout << "                        | n   ,-.   n |    " << endl;
    cout << ",.:;..;;..;;.,:;,.;:,o__|__o !.|.! o__|__o;,.:;.,;;,,:;,.:;,;;:" << endl;
    cout << " ][  ][  ][  ][  ][  |_i_i_H_|_|_|_H_i_i_|  ][  ][  ][  ][  ][" << endl;
    cout << " ~~~          ~~     |     //=====\\\\     |           ~~" << endl;
    cout << "       ~~~           |____//=======\\\\____|    ~~~~          ~~~" << endl;
    cout << " ~~            ~~~~      //=========\\\\              ~~" << endl;
}
// Função para desenho tesouro 1
void tesouroUm() {
cout << "*******************************************************************************" << endl;
    cout << "          |                   |                  |                     |" << endl;
    cout << " _________|________________.=\"\"_;=.______________|_____________________|_______" << endl;
    cout << "|                   |  ,-\"_,=\"\"     `\"=.|                  |" << endl;
    cout << "|___________________|__\"=.o`\"-._        `\"=.______________|___________________" << endl;
    cout << "          |                `\"=.o`\"=._      _`\"=.                     |" << endl;
    cout << " _________|_____________________:=._o \"=.\"_.-=\"'\"=.__________________|_______" << endl;
    cout << "|                   |    __.--\" , ; `\"=.o.\" ,-\"\"\"-._ \".   |" << endl;
    cout << "|___________________|_._\"  ,. .` ` `` ,  `\"-._\"-._   \". '__|___________________" << endl;
    cout << "          |           |o`\"=.o` , \"` `; .\". ,  \"-._\"-._; ;              |" << endl;
    cout << " _________|___________| ;`-.o`\"=.o; .\" ` '`.\"` . \"-._ /_______________|_______" << endl;
    cout << "|                   | |o;    `\"-.o`\"=._``  '` \" ,__.--o;   |" << endl;
    cout << "|___________________|_| ;     (#) `-.o `\"=`_.--\"_o.-; ;___|___________________" << endl;
    cout << "____/______/______/___|o;._    \"      `\".o|o_.--\"    ;o;____/______/______/____" << endl;
    cout << "/______/______/______/\"=.o--._        ; | ;        ; ;/______/______/______/_" << endl;
    cout << "____/______/______/______/__\"=.o--._   ;o|o;     _._;o;____/______/______/____" << endl;
    cout << "/______/______/______/______/____\"=.o._; | ;_.--\"o.--\"_/______/______/______/_" << endl;
    cout << "____/______/______/______/______/____\"=.o|o_.--\"\"___/______/______/______/____" << endl;
    cout << "/______/______/______/______/______/______/______/______/______/______/______/_" << endl;
    cout << "*******************************************************************************" << endl;
}
// Função para desenho tesouro 2
void tesouroDois() {
    cout << "                            _.--." << endl;
    cout << "                        _.-'_:-'||" << endl;
    cout << "                    _.-'_.-::::'||" << endl;
    cout << "               _.-:'_.-::::::'  ||" << endl;
    cout << "             .'`-.-:::::::'     ||" << endl;
    cout << "            /.'`;|:::::::'      ||_" << endl;
    cout << "           ||   ||::::::'     _.;._'-._" << endl;
    cout << "           ||   ||:::::'  _.-!oo @.!-._'-." << endl;
    cout << "           \\'.  ||:::::.-!()oo @!()@.-'_.|" << endl;
    cout << "            '.'-;|:.-'.&$@.& ()$%-'o.'\\U||" << endl;
    cout << "              `>'-.!@%()@'@_%-'_.-o _.|'||" << endl;
    cout << "               ||-._'-.@.-'_.-' _.-o  |'||" << endl;
    cout << "               ||=[ '-._.-\\U/.-'    o |'||" << endl;
    cout << "               || '-.]=|| |'|      o  |'||" << endl;
    cout << "               ||      || |'|        _| ';" << endl;
    cout << "               ||      || |'|    _.-'_.-'" << endl;
    cout << "               |'-._   || |'|_.-'_.-'" << endl;
    cout << "                '-._'-.|| |' `_.-'" << endl;
    cout << "                    '-.||_/.-'" << endl;
}
// Função para desenho tesouro 3
void tesouroTres() {
    cout << "                    ____...------------...____" << endl;
    cout << "               _.-\"` /o/__ ____ __ __  __ \\o\\_`\"-._" << endl;
    cout << "             .'     / /                    \\ \\     '." << endl;
    cout << "             |=====/o/======================\\o\\=====|" << endl;
    cout << "             |____/_/________..____..________\\_\\____|" << endl;
    cout << "             /   _/ \\_     <_o#\\__/o_>     _/ \\_   \\" << endl;
    cout << "             \\_________\\####/_________/" << endl;
    cout << "              |===\\!/========================\\!/===|" << endl;
    cout << "              |   |=|          .---.         |=|   |" << endl;
    cout << "              |===|o|=========/     \\========|o|===|" << endl;
    cout << "              |   | |         \\() ()/        | |   |" << endl;
    cout << "              |===|o|======{'-.) A (.-'}=====|o|===|" << endl;
    cout << "              | __/ \\__     '-.\\uuu/.-'    __/ \\__ |" << endl;
    cout << "              |==== .'.'^'.'.====|" << endl;
    cout << "              |  _\\o/   __  {.' __  '.} _   _\\o/  _|" << endl;
    cout << "              `\"\"\"\"-\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"\"-\"\"\"\"`" << endl;
}

// Função para desenho boneco de neve
void bonecoDeNeve() {
    cout << ", ,    ,      ,    ,     ,     ,   ,      ,     ,     ,      ,      ,     " << endl;
    cout << ",       ,     ,    ,       ,   .____. ,   ,     ,      ,       ,      ,     " << endl;
    cout << " ,    ,   ,    ,     ,   ,   , |   :|         ,   , ,   ,   ,       , " << endl;
    cout << "   ,        ,    ,     ,     __|====|__ ||||||  ,        ,      ,      ,    " << endl;
    cout << " ,   ,    ,   ,     ,    , *  / o  o \\  ||||||,   ,  ,        ,    ," << endl;
    cout << ",   ,   ,         ,   ,     * | -=   |  \\====/ ,       ,   ,    ,     ,    " << endl;
    cout << "   ,  ,    ,   ,           , U==\\__//__. \\\\//    ,  ,        ,    , " << endl;
    cout << ",   ,  ,    ,    ,    ,  ,   / \\\\==// \\ \\ ||  ,   ,      ,          ,  " << endl;
    cout << " ,  ,    ,    ,     ,      ,|    o ||  | \\||   ,      ,     ,   ,     ,     " << endl;
    cout << ",      ,    ,    ,      ,   |    o \"\"  |\\_|B),    ,  ,    ,       , " << endl;
    cout << "  ,  ,    ,   ,     ,      , \\__  --__/   ||  ,        ,      ,     ,   " << endl;
    cout << ",  ,   ,       ,     ,   ,  /          \\  ||,   ,   ,      ,    ,    ," << endl;
    cout << " ,      ,   ,     ,        |            | ||      ,  ,   ,    ,   ,  " << endl;
    cout << ",    ,    ,   ,  ,    ,   ,|            | || ,  ,  ,   ,   ,     ,  ,   " << endl;
    cout << " ------_____---------____---\\__ --_  __/__LJ__---------________-----___" << endl;
}
// Função para desenho comida Monstro
void comidaMonstro() {
cout << "                                     ____" << endl;
    cout << "                               /\\|    ~~\\" << endl;
    cout << "                             /'  |   ,-. `\\" << endl;
    cout << "                            |       | X |  |" << endl;
    cout << "                           _|________`-'   |X" << endl;
    cout << "                         /'          ~~~~~~~~~," << endl;
    cout << "                       /'             ,_____,/_" << endl;
    cout << "                    ,/'        ___,'~~         ;" << endl;
    cout << "~~~~~~~~|~~~~~~~|---          /  X,~~~~~~~~~~~~," << endl;
    cout << "        |       |            |  XX'____________'" << endl;
    cout << "        |       |           /' XXX|            ;" << endl;
    cout << "        |       |        --x|  XXX,~~~~~~~~~~~~," << endl;
    cout << "        |       |          X|     '____________'" << endl;
    cout << "        |   o   |---~~~~\\__XX\\             |XX" << endl;
    cout << "        |       |          XXX`\\          /XXXX" << endl;
    cout << "~~~~~~~~'~~~~~~~'               `\\xXXXXx/' \\XXX" << endl;
    cout << "                                 /XXXXXX\\" << endl;
    cout << "                               /XXXXXXXXXX\\" << endl;
    cout << "                             /XXXXXX/^\\XDCAU\\" << endl;
    cout << "                            ~~~~~~~~   ~~~~~~~" << endl;
}
// Função para desenho monstro aparece
void monstroAparece() {
cout << "  .::..  ;   I;L\\  /L\\.  ..::..   /iL.           |         ..::::::::::::.." << endl;
    cout << "        ;    II;L\\/LLLL;         / I;L\\    \\     |     / /\\_" << endl;
    cout << "             II;..LLLLLL\\    _._/ I;:.L\\     \\   |   / _/J; \\" << endl;
    cout << "      :     IIIIi;..LLLLL\\__/   IIII:..L\\____  \\###/  /JJI:  \\" << endl;
    cout << "    ,;     ILIi;;;:...:LLL;\\      IIIII;.LLLLL\\#####/JJ II;   \\" << endl;
    cout << "   ;     I LLii;;;.:.. :LLL;\\     III;;;::LLLLL\\###/JJ IIII;   \\_." << endl;
    cout << "  :     IIILiii;;::.... :LLL;|      ;;I;;::.:LLLLLL:;IJ IIIII;:   \\__." << endl;
    cout << "           IIIII IIii;;::;..;\\          ;;:::...LLLL;IJIII;;    :::   \\" << endl;
    cout << ":    ;    IIIIIIIIIii;;::.;..      _==|      ;..  :;IJIII;:::    ::    \\" << endl;
    cout << "    ;    ::::::::::::;;::..;  _==|   )__)  |                            \\" << endl;
    cout << " '  '\"  \"  \"\"'\"\"'\"\"  \"\"'\"  '\"    )_)  )___) ))  \"\"''\"   \"\"'\"  '\"' '\"'\"'\"'  '\"\"\"" << endl;
    cout << "        '\"\"   \"\"^^       ^~   )___) )____))_)   ~~         \"\"^^^\"\"  '  \"  \"~\"" << endl;
    cout << "' ^^            ^        _    )____)_____))__)\\      ~^~~^           ^^\"" << endl;
    cout << "     '^^          ^~      \\---__|____/|___|___-\\\\--        \"~\"~         \"~\"" << endl;
    cout << "   ''    '^          ~\"~   \\   oo oo oo oo     /      ~\"      '~       \"\"~\"" << endl;
    cout << "        ____   ^^^\"~   ~~^^^^^^^^^^^^^^^^^^^^^^    ^~^            ^~^^^" << endl;
    cout << "      /  o   \\     \"\"'\"  __          __ \"'\"''     '   ''~     ~\"\"~\"`    \"\"''" << endl;
    cout << "    < ____     \\\"'\"    /    \\   \"' /    \\       _          _    \"~    _" << endl;
    cout << "          |     |     |  __  |    |  __  |    /   \\      /   \\       / |" << endl;
    cout << "    '''   |_____|  '  |__||__| '' |__||__| ' |_____| '' |_____| \"\"  /_/" << endl;
    cout << "         '''     ~^^^^      '\"\"\"^^'''''^        '''''''\"\"        '''''^^\"\"" << endl;
    cout << "   ''          '^^           ~^^~          ~^ '      ~~      '  ^   ^^^^^^^^" << endl;
}
// Função para desenho Praia Inicial
void praiaInicial() {
    cout << "                ._-_,                                                      " << endl;
    cout << "              -=_* =-                                                      " << endl;
    cout << "              ,'/'`\\                                                      " << endl;
    cout << "             //                                                            " << endl;
    cout << "____________//______________________________________________________       " << endl;
    cout << "~ ____,----/ |_    ~                 ~~                 ~                  " << endl;
    cout << "-'  ________   `-.__     ~                  ~                 _  _/`       " << endl;
    cout << "  ,',---\\\\--\\       `-.____        ~~~              ~   __,--'  c\"}    " << endl;
    cout << "  \\`-____\\\\__\\             `----.________________,-----'       ,(_).   " << endl;
    cout << "   `~~~~~~~~~'                                                  -\"-\"     " << endl;
}
// Função para desenho baleia
void baleia() {
    cout << "  .-------------'```'----....,,__                        _," << endl;
    cout << "  |                               `'`'`'`'-.,.__        .'(" << endl;
    cout << "  |                                             `'--._.'   )" << endl;
    cout << "  |                                                   `'-.<" << endl;
    cout << "  \\               .-'`'-.                            -.    `\\" << endl;
    cout << "   \\               -.o_.     _                     _,-'`\\    |" << endl;
    cout << "    ``````''--.._.-=-._    .'  \\            _,,--'`      `-._(" << endl;
    cout << "      (^^^^^^^^`___    '-. |    \\  __,,..--'                 `" << endl;
    cout << "       `````````   `'--..___\\    |`" << endl;
    cout << "                             `-.,'" << endl;
}
// Função para desenho barco 2
void barco3() {
 cout << "                        _==|" << endl;
    cout << "           _==|   )__)  |" << endl;
    cout << "             )_)  )___) ))" << endl;
    cout << "            )___) )____))_)" << endl;
    cout << "       _    )____)_____))__)\\\\" << endl;
    cout << "        \\---__|____/|___|___-\\\\---" << endl;
    cout << "^^^^^^^^^\\   oo oo oo oo     /~~^^^^^^^" << endl;
    cout << "  ~^^^^ ~~~~^^~~~~^^~~^^~~~~~" << endl;
    cout << "    ~~^^      ~^^~     ~^~ ~^ ~^" << endl;
    cout << "         ~^~~        ~~~^^~" << endl;
}
// Função para desenho barco 3
void barco4() {
    cout << "                         _._" << endl;
    cout << "                          :." << endl;
    cout << "                          : :" << endl;
    cout << "                          :  ." << endl;
    cout << "                         .:   :" << endl;
    cout << "                        : :    ." << endl;
    cout << "                       :  :     :" << endl;
    cout << "                      .   :      ." << endl;
    cout << "                     :    :       :" << endl;
    cout << "                    :     :        ." << endl;
    cout << "                   .      :         :" << endl;
    cout << "                  :       :          ." << endl;
    cout << "                 :        :           :" << endl;
    cout << "                .=w=w=w=w=:            ." << endl;
    cout << "                          :=w=w=w=w=w=w=.   ...." << endl;
    cout << "           <--._______:U~~~~~~~~\\_________.:---/" << endl;
    cout << "            \\      ____===================____/" << endl;
    cout << ".,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,." << endl;
    cout << "\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"" << endl;
    cout << "\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"~-,.,-~\"^\"" << endl;
}
// Função para desenho Megalodon
void tubaraoMegalodon() {
    cout << "                             ,_." << endl;
    cout << "                           ./  |                                          _-" << endl;
    cout << "                         ./    |                                       _-'/" << endl;
    cout << "      ______.,         ./      /                                     .'  (" << endl;
    cout << " _---'___._.  '----___/       (                                    ./  /`'" << endl;
    cout << "(,----,_  G \\                  \\_.                               ./   :" << endl;
    cout << " \\___   \"--_                      \"--._,                       ./    /" << endl;
    cout << " /^^^^^-__          ,,,,,               \"-._       /|         /     /" << endl;
    cout << " `,       -        /////                    \"`--__/ (_,    ,_/    ./" << endl;
    cout << "   \"-_,           ''''' __,                            `--'      /" << endl;
    cout << "       \"-_,             \\\\ `-_                                  (" << endl;
    cout << "           \"-_.          \\\\   \\.                                 \\_" << endl;
    cout << "          /    \"--__,      \\\\   \\.                       ____.     \"-._," << endl;
    cout << "         /        ./ `---____\\\\   \\.______________,---\\ (     \\,        \"-., " << endl;
    cout << "        |       ./             \\\\   \\        /\\  |     \\|       `--______---`" << endl;
    cout << "        |     ./                 \\\\  \\      /_/\\_!" << endl;
    cout << "        |   ./                     \\\\ \\" << endl;
    cout << "        |  /                         \\_\\" << endl;
    cout << "        |_/" << endl;
}

// Função para desenho machado 1
void machado1() {
    cout << "          A" << endl;
    cout << "         /!\\" << endl;
    cout << "        / ! \\" << endl;
    cout << " /\\     )___(" << endl;
    cout << "(  `.____(_)_________" << endl;
    cout << "|           __..--\"\"" << endl;
    cout << "(       _.-|" << endl;
    cout << " \\    ,' | |" << endl;
    cout << "  \\  /   | |" << endl;
    cout << "   \\(    | |" << endl;
    cout << "    `    | |" << endl;
    cout << "         | |" << endl;
}

// Função para desenho machado 2
void machado2() {
    cout << "  ,  /\\  .  " << endl;
    cout << " //`-||-'\\\\ " << endl;
    cout << "(| -=||=- |)" << endl;
    cout << " \\\\,-||-.// " << endl;
    cout << "  `  ||  '  " << endl;
    cout << "     ||     " << endl;
    cout << "     ||     " << endl;
    cout << "     ||     " << endl;
    cout << "     ||     " << endl;
    cout << "     ||     " << endl;
    cout << "     ()     " << endl;
}

// Função para desenho espada 1
void espada1() {
    cout << "          /)" << endl;
    cout << "         //" << endl;
    cout << ".-------| |--------------------------------------------.__" << endl;
    cout << "|WMWMWMW| |>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
    cout << "`-------| |--------------------------------------------'^^" << endl;
    cout << "         \\\\" << endl;
    cout << "          \\)" << endl;
}

// Função para desenho espada 2
void espada2() {
    cout << "   ()" << endl;
    cout << "   )(" << endl;
    cout << "o======o" << endl;
    cout << "   ||" << endl;
    cout << "   ||" << endl;
    cout << "   ||" << endl;
    cout << "   ||" << endl;
    cout << "   ||" << endl;
    cout << "   ||" << endl;
    cout << "   ||" << endl;
    cout << "   ||" << endl;
    cout << "   \\/" << endl;
}

// Função para desenho espada 3
void espada3() {
    cout << "           /\\" << endl;
    cout << " _         )( ______________________" << endl;
    cout << "(_)///////(**)______________________>" << endl;
    cout << "           )(" << endl;
    cout << "           \\/" << endl;
}

// Função para desenho arpão caça
void arpao() {
    cout << "          _________                       \\" << endl;
    cout << "_-----____/   ========================>->->->-->" << endl;
    cout << "|           ______________/               /" << endl;
    cout << "|    ___--_/(_)                          " << endl;
    cout << "|___ ---" << endl;
}

// Função para desenho monsro Aparece 2
void monsroAparece2() {
    cout << "      ~~~     ~~~  ~~~~~ ~~~      ~~~~  ~~" << endl;
    cout << "~~~~           ~~~~     ~~    ~    ~~~~~" << endl;
    cout << "     /\\/\\__   ~~~_~     _  ~~~~_~      ~~~" << endl;
    cout << " ~~ ()()_  \\~~~ / \\  ~~/ \\~   / \\~~~ /\\~" << endl;
    cout << "    /oo/ \\  \\__/ _ \\__/ _ \\__/ _ \\__/ /" << endl;
    cout << "~~  \\_/~~ \\_____/ \\____/ \\____/ \\____/  ~~" << endl;
    cout << "              _~~~~       ~~~  ~~" << endl;
    cout << "   ~~~   ____| |______/<;~~   ~~     ~~  ~~~" << endl;
    cout << "        (_____________}X    ~~~~   ~" << endl;
    cout << "  ~~~          ~~     \\<; ~      ~~    ~~~~ ~" << endl;
    cout << "~~~~   ~~~~~        ~~~      ~~~~      ~~~~~" << endl;
    cout << "~  ~~~        ~~~~~       ~~~~ ~     ~   ~~" << endl;
}

// Função para desenho Monstro 2 3
void monstroSeila() {
     cout << "       (,,(,  " << endl;
    cout << "    (,'     `/ " << endl;
    cout << ",  ,'  ,--.  `, " << endl;
    cout << " `{D, {    \\  :   " << endl;
    cout << "   V,,'    /  /   " << endl;
    cout << "   |;;    /  ,' ,-'-.    ,'-'.      ," << endl;
    cout << "   \\;'   /  ,' /  _  \\  /  _  \\   ,'/" << endl;
    cout << "         \\   `'  / \\  `'  / \\  `.' /" << endl;
    cout << "          `.___,'   `.__,'   `.__,'" << endl;
}

// Função para desenho espada 3
void praia3() {
    cout << "              ,.  _~-.,               ." << endl;
    cout << "           ~'`_ \\/,_. \\_" << endl;
    cout << "          / ,\"_<@`,__`~.)             |           ." << endl;
    cout << "          | |  @@@@'  \",! .           .          '" << endl;
    cout << "          |/   ^^@     .!  \\          |         /" << endl;
    cout << "          `' .^^^     ,'    '         |        .             ." << endl;
    cout << "           .^^^   .          \\                /          ." << endl;
    cout << "          .^^^       '  .     \\       |      /       . '" << endl;
    cout << ".,.,.     ^^^             ` .   .,+~'`^`'~+,.     , '" << endl;
    cout << "&&&&&&,  ,^^^^.  . ._ ..__ _  .'             '. '_ __ ____ __ _ .. .  ." << endl;
    cout << "%%%%%%%%%^^^^^^%%&&;_,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.," << endl;
    cout << "&&&&&%%%%%%%%%%%%%%%%%%&&;,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=" << endl;
    cout << "%%%%%&&&&&&&&&&&%%%%&&;_,.;^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__," << endl;
    cout << "%%%%%%%%%&&&&&&&&&-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-==--^'~=-.,__,.-=~'" << endl;
    cout << "##m#######*\"'" << endl;
    cout << "_,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,__,.-=~'`^`'~=-.,.-=~'`^`'~=-.,__,.-=~'" << endl;
    cout << "" << endl;
}

// Função para desenho batalha
void batalha() {
    cout << "   |\\                     /)" << endl;
    cout << " /\\_\\\\__               (_//" << endl;
    cout << "|   `>\\-`     _._       //`)" << endl;
    cout << " \\ /` \\\\  _.-`:::`-._  //" << endl;
    cout << "  `    \\|`    :::    `|/" << endl;
    cout << "        |     :::     |" << endl;
    cout << "        |.....:::.....|" << endl;
    cout << "        |:::::::::::::|" << endl;
    cout << "        |     :::     |" << endl;
    cout << "        \\     :::     /" << endl;
    cout << "         \\    :::    /" << endl;
    cout << "          `-. ::: .-'" << endl;
    cout << "           //`:::`\\\\" << endl;
    cout << "          //   '   \\\\" << endl;
    cout << "         |/         \\\\" << endl;
}

// Função para explorar mar
void mar() {
    cout << "  ~^~^~^~^~^~^~^~^~^~^~^^~^~^~^~^~^~" << endl;
    cout << "           ~                            ~" << endl;
    cout << "                \\   '    o      '" << endl;
    cout << "                /\\ o       \\  o" << endl;
    cout << "              >=)'>    '   /\\ '" << endl;
    cout << "                \\/   \\   >=)'>        ~" << endl;
    cout << "                /    /\\    \\/" << endl;
    cout << "         ~         >=)'>   /     ." << endl;
    cout << "                     \\/                   )" << endl;
    cout << "                     /                   (" << endl;
    cout << "                           ~          )   )" << endl;
    cout << "           }     ~              (    (   (" << endl;
    cout << "          {                      )    )   )" << endl;
    cout << "           }  }         .       (    (   (" << endl;
    cout << "          {  {               /^^^^^^^^^^^^jgs" << endl;
    cout << "         ^^^^^^^^^\\         /" << endl;
    cout << "                   ^^^^^^^^^" << endl;
}

// Função para descaptar
void decaptar() {
    cout << "                     ______" << endl;
    cout << "                  .-\"      \"-." << endl;
    cout << "                 /            \\" << endl;
    cout << "                |              |" << endl;
    cout << "                |,  .-.  .-.  ,|" << endl;
    cout << "                | )(__/  \\__)( |" << endl;
    cout << "                |/     /\\     \\|" << endl;
    cout << "      (@_       (_     ^^     _)" << endl;
    cout << " _     ) \\_______\\__|IIIIII|__/__________________________" << endl;
    cout << "(_)@8@8{}<________|-\\IIIIII/-|___________________________>" << endl;
    cout << "       )_/        \\          /" << endl;
    cout << "      (@           `--------`" << endl;
}

// Função para neve severa
void neveSevera() {
    cout << "-   -   -   -      -     -   -         -   - -      -  -    -" << endl;
    cout << "    - -     -   -   -  -           -       -   .---.  _  - -    -" << endl;
    cout << " -       -  ( ! )   -     -     -      -      /_   .-(_)   - -   -" << endl;
    cout << "  - -  .--. /'    -   -       -   -        -  )u\\ /  - -    -   -" << endl;
    cout << "-  .-./ ___\\  -   ||     -   -      -  -      \\-_/_  -     -     -" << endl;
    cout << " - `-\\'\\|o o|   -  ||   -  -      -         ___/    \\   -      -    -" << endl;
    cout << " - -  __\\c/__ -  .-. -  -    -        -  (\\___/ /   \\  -   -    - " << endl;
    cout << "  - .'  \\:/  `. /\\/|  -     -       -   / (_)__/ \\   \\  -    -   -" << endl;
    cout << "-  / /(  :  )\\ V /||         -   -     / /   -    \\_.'\\    -    -  - " << endl;
    cout << "   \\_\\(  :  ) `-' ||  - -   -      ___/ /  -   -  /  /| -    -   -" << endl;
    cout << " -  (_(__:__)   __||___ -  -  (_.-' __\\/  -   -    /  / |   -     -" << endl;
    cout << "-  -  \\  |  /  /      /     (   ).-'   |   -  - (  (\\  \\   -    - -" << endl;
    cout << "--------------------------(-----------------------------------------" << endl;
}


void encerrar(){
    int x;
    x=0;
    cout << "" << endl << endl;
    exit(0);
    }

void esperarEnter() {
    cout << endl << "Pressione Enter para continuar..." << endl;
    cin.get(); // Espera que o jogador pressione Enter
}

void limparTexto(){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main(){

limparTexto();

/*NOME JOGADOR*/ desenharInicio();
string jogador;
cout << "Voce deve escolher o nome do seu jogador para iniciar a jornada" << endl;
getline(cin, jogador);

limparTexto();

/*INICIO HISTORIA*/ praiaInicial(); 
cout << jogador << " acorda em uma ilha desconhecida em busca de respostas " << endl <<
"sobre o desaparecimento de seus companheiros, embarcando em uma " << endl <<
"simples jangada por aguas desconhecidas" << endl << endl;

//MAPA E BUSSOLA
double escolha;

do{
cout << "Escolha seu meio de localizacao" << endl <<
"(1) - Bussola" << endl << endl;
bussola();
cout << "(2) - Mapa Antigo Das Aguas Submarinas" << endl << endl;
mapaAntigo();
cin >> escolha;

limparTexto();

    if (escolha<1 || (escolha>1 && escolha<2) || escolha>2){
        cout << "Escolha uma opcao valida!" << endl << endl;
    }
    
} while (escolha<1 || (escolha>1 && escolha<2) || escolha>2);

bool temBussola;
bool temMapa;

    if (escolha==1){
        temBussola = true;
    }else if (escolha==2){
        temMapa = true;
    }

//ARMAS

cout << jogador << " se depara com 3 armas a sua disposicao" << endl <<
"mas infelizmente sua jangada eh pequena demais" << endl <<
"para as 3 " << jogador << " deve escolher a melhor opcao para" << endl <<
"comecar essa grande aventura..." << endl << endl;

do{

cout << "Escolha a arma de sua preferencia:" << endl <<
"(1) - Espada" << endl;
espada1();
cout << endl << "(2) - Arpao" << endl;
arpao();
cout << endl << "(3) - Machado" << endl;
machado1();
cin >> escolha;

limparTexto();

if (escolha<1 || (escolha>1 && escolha<2) || (escolha>2 && escolha<3) || escolha>3){
    cout << "Escolha uma opcao valida!" << endl << endl;
    }
    
} while (escolha<1 || (escolha>1 && escolha<2) || (escolha>2 && escolha<3) || escolha>3);

    /*BATALHA COM ARMA*/  batalha();

    esperarEnter();
    limparTexto();

    cout << "Em meio a sua jornada o " << jogador << " se depara com monstros" << endl << 
    "marinhos e tera que enfrenta los para sua sobrevivencia..." << endl << endl <<

    "O mar comeca a ficar turbulento..." << endl << endl;

        /*ASCII ART MONSTRO MARINHO*/ monstroAparece();

    cout << "" << endl << endl;

    esperarEnter();
    limparTexto();

    /*BATALHA COM ARMA*/ batalha();

    cout << "O " << jogador << " bravamente segura sua arma e tenta ferir o monstro atancando-o. E..." << endl << endl;

    if (escolha==1){
        cout << "Consegue chamar atencao da criatura, mas nao " << endl << 
        "chega a fazer cocegas no monstro, voce morre devorado ou " << endl << 
        "afogado pelo mar revoltado" << endl << endl;

        /* ASCII GAME OVER*/ 
        gameOver();
        caveiraUm();
        
        encerrar();

    }else if (escolha==2){
        cout << "Voce acerta o ponto fraco do animal, e tem uma chance " << endl <<
        "de fuga rapida, no caminho percebe o que a criatura queria tanto proteger" << endl << endl;

    }else if (escolha==3){
        cout << "Voce morre sem nem mesmo conseguir deferir um golpe!" << endl << endl;

        /* ASCII GAME OVER*/
        gameOver();
        caveiraUm();

        encerrar();

    }

    //CONTINUAR HISTORIA

    esperarEnter();
    limparTexto();

    cout << "Voce reconhece o monstro que danificou, que na verdade" << endl << 
    "nao eh nada mais do que uma Maquina colossal avancada, o submarino" << endl << 
    "Nautilus, comandado pelo misterioso e recluso Capitao Nemo." << endl << 
    "Onde tambem descobre a localizacao de seus amigos." << endl << endl;

    submarinoTres();
    
do{

    cout << "Escolha o seu caminho:" << endl <<
    "(1) - Sair dali o mais rapido possivel" << endl <<
    "(2) - Entrar abordo do submarino" << endl << endl;
    cin >> escolha;

    limparTexto();

    if (escolha==1){
        cout << "Voce ate consegue escapar dos mares fortes, mas" << endl << 
        "o mar esta cheio de criaturas desconhecidas, voce" << endl << 
        "acaba encontrando um Kraken e morre para seus tentaculos." << endl << endl;

        /* ASCII KRAKEN*/
        monstroMar1();

        encerrar();

    }else if (escolha==2){

        esperarEnter();
        limparTexto();

        cout << "Voce entra no Nautilus e rapidamente eh encarcerado" << endl << 
        "pela tripulacao e levado ao fundo do submarino, onde reencontra" << endl << 
        "seus companheiros e descobre que ha mais misterios embaixo" << endl <<
        "da agua do que na terra." << endl << endl;

        gradePrisao();

    }else {
        cout << "Escolha uma opcao valida!" << endl << endl;
    }
    
} while (escolha<1 || (escolha>1 && escolha<2) || escolha>2);

    esperarEnter();
    limparTexto();

    cout << "Presos a bordo do Nautilus, " << jogador << " e seus companheiros" << endl <<
    "sao levados a uma jornada incrivel pelos mares e oceanos do planeta." << endl << 
    "Nemo revela ser um homem que abandonou a humanidade em favor da" << endl << 
    "liberdade absoluta nos oceanos, onde ele e sua tripulacao vivem em" << endl << 
    "isolamento, movidos por eletricidade avancada e recursos submarinos." << endl << endl;

    mar();

    esperarEnter();
    limparTexto();

    cout << "A medida que o Nautilus atravessa mares desconhecidos, os protagonistas" << endl <<
    "exploram lugares incriveis e enfrentam situacoes perigosas. Em um dos" << endl << 
    "primeiros destinos, eles mergulham na Baia de Vigo onde encontraram" << endl <<
    "tesouros inimaginaveis" << endl << endl;

    tesouroUm();

do{
    cout << "Escolha o seu caminho:" << endl <<
    "(1) - Descer ate a baia e se se aventurar na ilha com Nemo" << endl <<
    "(2) - Ficar no submarino preso" << endl << 
    "(3) - Trair seus amigos e achar o tesouro sozinho" << endl << endl;
    cin >> escolha;

    limparTexto();

    if (escolha==1){

        esperarEnter();
        limparTexto();

        cout << "Voce escolhe confiar num homem totalmente a aversao da humanidade, " << endl << 
        "mas com um desejo avassalador por respostas do desconhecido " << endl << endl;

        dartVader();

    }else if (escolha==2){
        cout << "Nada muda, voce so ganha o apelido de covarde pela tripulacao" << endl <<
        "e nunca mais sai dela" << endl << endl;

        vergonha();
        gameOver();

        /* ASCII FIM DE JOGO*/ /* ASCII FIM DE JOGO*/ /* ASCII FIM DE JOGO*/

        encerrar();

    }else if (escolha==3){
        
        if (temBussola==true){

            cout << "Voce consegue escapar de Nemo, mas ninguem conhece a baia melhor que ele." << endl << 
            "Sua Bussola estava desregulada pela quantidade de metais na baia e somente ela nao" << endl <<
            "foi o suficiete para voce conseguir se localizar." << endl << endl <<

            "Voce acaba se destanciando demais do tesouro encontrando uma criatura que antes" << endl <<
            "estava desacordada, mas por sua culpa e falta de honra morre nos dentes do Megalodon" << endl << endl;
            

        }else if (temMapa==true){
            cout << "Voce consegue escapar de Nemo, mas ninguem conhece a baia melhor que ele." << endl << 
            "Seu Mapa Antigo Das Aguas Submarinas acabou rasgando e somente isso nao foi" << endl << 
            "o suficiete para voce achar o tesouro." << endl << endl << 

            "Voce acaba se destanciando demais do tesouro encontrando uma criatura que antes" << endl << 
            "estava desacordada, mas por sua culpa e falta de honra morre nos dentes do Megalodon" << endl << endl;

        }
        
        /* ASCII MEGALODON*/
        tubaraoMegalodon();
        encerrar();

    }else {
        cout << "Escolha uma opcao valida!" << endl << endl;
    }

} while (escolha<1 || (escolha>1 && escolha<2) || (escolha>2 && escolha<3) || escolha>3);


    //CONTINUAR HISTORIA

    esperarEnter();
    limparTexto();

    cout << "Em meio a sua busca na ilha, acabam descobrindo os tesouros afundados de galoes" << endl <<
    "espanhois, no entanto, a ambicao de Nemo e sua busca por poder levam o submarino para" << endl <<
    "aguas mais sombrias. " << jogador << " comeca a se questionar sobre o verdadeiro proposito" << endl <<
    "de Nemo, enquanto Rogger e Pereira sonham em escapar do dominio do capitao. Eles tentam fugir" << endl <<
    "diversas vezes, mas sao frustrados pelas aguas profundas e pela vigilancia constante da tripulacao." << endl << endl;
    galeaoNaufrago();

    esperarEnter();
    limparTexto();

    cout << "Durante a travessia pelo Golfo do Mexico, os tripulantes enfrentam correntes perigosas" << endl <<
    "e monstros marinhos gigantes. Aqui, Rogger tenta uma fuga desesperada, mas e capturado e" << endl << 
    "levado de volta ao Nautilus." << endl << endl;
    monstroMar4();

    esperarEnter();
    limparTexto();

    cout << "Depois de longos meses a bordo do navio, voce percebe que a tripulacao esta comecando a ficar inquieta..." << endl << endl;

do{

    cout << "Escolha o seu caminho:" << endl <<
    "(1) - Criar um motim contra o capitao" << endl <<
    "(2) - Acalmar a tripulacao" << endl << endl;
    cin >> escolha;
    
    esperarEnter();
    limparTexto();

    if (escolha==1){
        cout << "Voce cria intrigas sobre todos provocando uma revolta no Nautilus, voce pega sua arma" << endl <<
        "para se defender, mas a confianca da maioria no Capitao e maior do que em voce e sua deixa" << endl <<
        "ja era esperada..." << endl << endl;
        
        cout << "Voce morre decapitado por traicao..." << endl << endl;
        /* ASCII ESPADA*/ 
        decaptar();
        encerrar();

    }else if (escolha==2){
        cout << "Voce garante a tranquilidade da tripulacao e sua vida intacta..." << endl << endl;
        paz();

    }else {
        cout << "Escolha uma opcao valida!" << endl << endl;
    }
    
} while (escolha<1 || (escolha>1 && escolha<2) || escolha>2);



//FASE 2 //FASE2 //FASE 2 //FASE2

    esperarEnter();
    limparTexto();

    cout << "Enquanto isso, o Nautilus continua sua exploracao incansavel, mergulhando em aguas cheias de \n vulcoes submarinos e finalmente encontrando as ruinas da lendaria cidade de Atlantida..." << endl;
    atlantis();

do{
    cout << "Escolha o seu caminho: \n (1) - Convencer Nemo a desvendar os misterios de Atlantida \n (2) - Continuar sua jornada \n (3) - Ir atras de Atlantida sozinho" << endl;
    cin >> escolha;
    limparTexto();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
} while (escolha<1 || (escolha>1 && escolha<2) || (escolha>2 && escolha<3) || escolha>3);

    // Limpa o buffer de entrada

    if (escolha == 1){
        double escolhaCuriosidade; 
        cout << "\nVoces iniciam uma caca aos segredos de atlantida\n encontrando tesouros valiosos\n" << endl;
        
        /* ASCII TESOURO*/ 
        tesouroTres();

        esperarEnter();
        limparTexto();
        
        cout << "\nEm meio a jornada pelas aguas de atlantida sua animacao eh constante,\nmas logo entende que para Nemo, isso nao passa de um lembrete de que a humanidade\nnao tem esperanca, percebendo que Nemo eh como uma alma torturada presa entre o desejo\nde liberdade e o odio contra o mundo da superficie.\n" << endl;
        esperarEnter();
        limparTexto();

    do{
        cout << "\nIsso levanta uma duvida em voce, de como um Capitao como Nemo escolheria esse tipo de vida?\ne voce resolve matar essa curiosidade:\n\n(1) - Descobrir essas informacoes pela tripulacao\n(2) - Arriscar sua vida e questionar Nemo sobre suas verdadeiras intencoes nessa jornada\n(3) - Nao se envolver nos assuntos de Nemo e garantir mais um dia de vida\n " << endl;
        cin >> escolhaCuriosidade;
        limparTexto();
    }while (escolhaCuriosidade<1 || (escolhaCuriosidade>1 && escolhaCuriosidade<2) || (escolhaCuriosidade>2 && escolhaCuriosidade<3) || escolhaCuriosidade>3);

        if (escolhaCuriosidade == 1){
            cout << "Assim como voce, a tripulacao nao conhece bem o seu capitao...\nLembre-se sempre do ditado: a curiosidade matou o gato\n";
            
            /* ASCII GATO MORTO*/ 
            gatoCurioso();

            encerrar();

        } else if (escolhaCuriosidade == 2){
            cout << "Voce pergunta a Nemo como era sua vida antes do Nautilus e com tamanho desdem\nNemo lhe da uma advertencia para nunca mais lhe fazer essa pegunta\n" << endl;
            
            /* advertencia*/ vergonha();

            cout << "a Jornada continua...";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            esperarEnter();
            limparTexto();
        } else if(escolhaCuriosidade == 3) {
            cout << "a jornada continua...\n";
            bonecoDeNeve();
             cin.ignore(numeric_limits<streamsize>::max(), '\n');
            esperarEnter();
            limparTexto();
        }else {
            cout << "\nEscolha uma opcao valida!\n";
        }
        
        
        
    }else if (escolha == 2){
            cout << "\nVoce continua em sua jornada ao polo sul\n ";
            bonecoDeNeve();
            
            esperarEnter();
            limparTexto();
            
    }else if (escolha == 3){
            cout << "\nVoce ate inicia sua jornada, mas nao passa de um simples refem no submarino\n";

            /* GAME OVER*/gameOver(); vergonha();

            encerrar();

    } else {
            cout << "\nEscolha uma opcao valida!\n";
    }

    cout << "O Nautilus segue em direcao ao Polo Sul, desafiando as condicoes implacaveis da Antartica" << endl <<
    "e navegando por mares congelados. Durante essa perigosa viagem, enfrentam o gelo esmagador e condicoes" << endl <<
    "climaticas extremas, questionando se conseguirao sair vivos dessa missao aparentemente suicida." << endl <<
    "O que so faz crescer sua curiosidade sobre quem realmente foi e eh o frio e calculista Capitao Nemo." << endl << endl;
    neveSevera();

    esperarEnter();
    limparTexto();

    cout << "No auge de sua curiosidade incessante voce descide colocar um ponto final nessa historia, juntamente" << endl <<
    "com seus companheiros resolvem descobrir mais sobre os misterios que assolam o Nautilus. Quando Nemo esta" << endl << 
    "ocupado planejando sua proxima jornada pela vastidão do oceano, voce invade a cabide do capitao para encontrar respostas..." << endl << endl;
    trairAmigos();
do{

    cout << "Escolha o seu caminho:" << endl <<
    "(1) - Vasculhar todo o quarto de Nemo" << endl <<
    "(2) - Esperar do lado de fora" << endl << endl;
    cin >> escolha;
    esperarEnter();
    limparTexto();

    if (escolha==1){
        cout << "Em meio a toda papelada de Nemo voce encontra documentos antigos de um homem indiano" << endl <<
        "de uns 30 a 40 anos, isso chama atencao pelo fato de no documento constar declaracao Real." << endl << endl;
        principeNemo2();

    }else if (escolha==2){
        cout << "Voce fica de tocaia, mas um dos homens de nemo lhe ve e manda-o para servir de alimento para as criaturas marinhas" << endl << endl;
        
        /* ASCII ALIMENTO CRIATURA MARINHA*/ comidaMonstro();

        encerrar();

    }else {
        cout << "Escolha uma opcao valida!" << endl << endl;
    }
    
} while (escolha<1 || (escolha>1 && escolha<2) || escolha>2);

    esperarEnter();
    limparTexto();

    cout << "Voce mostra a Nemo toda aquela documentacao,\nNemo irritado pela privacidade invadida\nameaca jogar voce e seus amigos a merce da sorte no mar,\nmas voce ja esta preparado e rebate que nao importa o que ele faca\na verdade vira a tona mais cedo ou mais tarde. " << endl;

    esperarEnter();
    limparTexto();

    cout << "Nemo ve a situacao e sabe que nao podera esconder por muito tempo seu passado,\ne lhe diz que numa vida passada poderia ser considerado um principe e um fugitivo\nvoce tomado pela ansiedade da verdade, pergunta qual das historias que aqueles documentos\ncontavam seria a de Nemo, sera ele um\nfugitivo procurado pela coroa inglesa por traicao,\nou Aknar panak, o principe da India. " << endl;
    
    esperarEnter();
    limparTexto();

    cout << "Nemo com sua adversidade lhe informa que isso dependera da sua escolha no que acreditar, um ladrao ou um principe. "<< endl << jogador;
    cout << " ja acostumado com os enigmas do capitao entende o que exatamente Nemo lhe ofereceu,\numa escolha em continuar a desvendar sobre seu passado ou viver aventuras inimaginaveis pelo oceano\nsem nem mais questionar sobre quem ou de onde viera Nemo. " << endl;
    principeIndiano();
     
    esperarEnter();
    limparTexto();

    cout << "Antes de mesmo poder pensar numa escolha, ouve se um estrondo no submarino,\nnao ouve duvidas para nenhum dos dois do que significava, Nautilus estava sendo atacado,\na questao era pelo que... " << endl << endl;
    
    cout << "Nessa situacao, qual a primeira coisa que passa na sua cabeca?\n (1) - Pegar uma de suas armas e averiguar a situacao de perto\n (2) - Ir ate o comando com Nemo para averiguar a situacao\n (3) - Se esconder em sua cabine ate a situacao de acalmar " << endl;
    int situacaoAtaque;
    cin >> situacaoAtaque;
    esperarEnter();
    limparTexto();

    if(situacaoAtaque == 1){
    cout << "Voce saca sua arma e vai ate o lado leste do Nautilus juntamente com um grupo de homens para descobrirem o que estava acontecendo,\nchegando no caminho se ouve mais uma vez a batida so que agora mais impactante,\nfazendo com que voce e os outros se chocassem contra parede do submarino,\nsofrendo severas lesoes. " << endl;
    
    esperarEnter();
    limparTexto();
    
    cout << "Infelizmente voces morrem na hora por traumatismo e a perda de sangue pelas lesoes" << endl;
    
    /* GAME OVER */gameOver(); morte();

    encerrar();   
    
    }else if (situacaoAtaque == 2){
    cout << "Voces chegam a sala de comando com homem tentando por todo lado\nconter o submarino para nao perderem o controle dele,\nna mesma hora Nemo consegue assimilar quem estava causando essa turbulencia nas aguas.\nNada menos dom que o Delta Harding,\numa maquina superior ao Nautilus capaz de o transformar em ruinas " << endl;
    submarinoCinco();

    esperarEnter();
    limparTexto();
    
    }else if(situacaoAtaque == 3){
    cout << "Voce ficou boa parte escondido, mas o Nautilus estava ficando sem tempo...\nVoce ouve e sente mais uma batida so que agora mais impactante,\nfazendo com que voce se chocasse contra a cabeceira da cama,\nmorrendo sem nem ao menos ter vivido uma aventura com honra. " << endl;
    
    /* GAME OVER*/gameOver(); vergonha();

    encerrar();
    }

    cout << jogador << " nao acreditando no que estava vendo, pediu para que Nemo lhes tirasse" << endl <<
    "dali o mais rapido possivel, mas o capitao sabia que por onde fossem harding os perseguiria." << endl <<
    "Nemo em um ato de vinganca e desprezo pela humanidade, decide destruir aquele inimigo, sem do" << endl <<
    "ou piedade, deixando " << jogador << " assustado e mais uma vez o vendo como um homem com a alma" << endl <<
    "torturada, presa entre o desejo de liberdade e o odio contra o mundo da superficie." << endl << endl;
    batalha();

    do{

    cout << "Escolha o seu caminho:" << endl <<
    "(1) - Ajudar Nemo e seguir com ele ate os confins da terra e do oceano." << endl <<
    "(2) - Sair do Nautilus voce e seus os amigos para voltarem para superficie com" << endl <<
    "historias para contar, sabendo que nunca mais verao o submarino " << endl << endl;
    cin >> escolha;
    esperarEnter();
    limparTexto();

    if (escolha==1){
        cout << "Voce escolhe viver ao lado de Nemo, mas seus amigos pensam diferente" << endl <<
        "depois de tudo que ja viram e vivenciaram nesse meio tempo, eles voltam a terra" << endl <<
        "e voce parte para uma jornada sem rumo pelas aguas submarinas nauticas do Temivel" << endl <<
        "submarino Nautilus e seu excentrico capitao Nemo. " << endl << endl;
        dartVader();submarinoTres();

        cout << "Mesmo voltando por um tempo na superficie o Delta nao saiu de perto..." << endl << endl;

    }else if (escolha==2){
        cout << "Nemo lhe deu a escolha e voce escolheu nao acreditar, todos sao levados as pressas" << endl <<
        "para a superficie para que possam sair antes que o Nautilus entre em uma batalha naval" << endl <<
        "com o Delta. Sabendo que o que viveram ali foi sufiente por uma vida toda navegando em aguas." << endl << endl;
        ilhaInicio();

    }else {
        cout << "Escolha uma opcao valida!" << endl << endl;
    }
    
} while (escolha<1 || (escolha>1 && escolha<2) || escolha>2);

    esperarEnter();
    limparTexto();

    cout << "Nemo enfrenta Delta Harding com todas as forcas que possuem e em meio a elas percebe que por" << endl <<
    "mais que Delta seja superior nao chega a profundidade que o Nautilus chega, assim sabia que para" << endl <<
    "derrota-lo o levaria para onde jamais atingiu, outras aguas, outros oceanos, um novo mundo, um mito" << endl <<
    "muito ouvido, mas para Nemo nada mais era inimaginavel." << endl << endl;
    batalhaMaritma();

    esperarEnter();
    limparTexto();

    cout << "Com sua tripulacao restante Nemo entra oceano a fundo com delta ja se extinguindo, com a certeza" << endl <<
    "de que nao voltaria a navegar pelas aquelas aguas novamente, assim Nautilus se ve diante do temivel Maelstrom," << endl <<
    "um redemoinho gigantesco que poderia consumir qualquer navio. Nao ouve outra embarcacao na historia que voltou" << endl <<
    "do Maelstrom, muito menos foi encontrado destrocos ou vestigios de qualquer um deles." << endl << endl <<
    "Deixando assim nosso Submarino Nautilus a merce de sua propria historia." << endl << endl;
    redemoinho();

    // FIM

}