
FILE=pomidoro;
COMPILED_FILE="main.cpp libs/timer.cpp libs/button.cpp";
COMPILE_TEXT="g++ "$COMPILED_FILE" -I/usr/local/Cellar/sfml/2.5.1.2/includ/e -o "$FILE" -L /usr/local/Cellar/sfml/2.5.1_2/lib -lsfml-graphics -lsfml-window -lsfml-system";
if [ -f "$FILE" ]; then
    eval "rm -rf $FILE";
    eval $COMPILE_TEXT;                 
    eval "./$FILE";
else 
    eval $COMPILE_TEXT;
    eval "./$FILE";
fi