[ -d "./build" ] && sudo rm -rf build/
mkdir build && cd build/ && cmake .. && make -j
cd ..
while test $# -gt 0
do
    case "$1" in
        -d) valgrind ./build/snake
        ;;
        -dl) valgrind --leak-check=full --show-leak-kinds=all ./build/snake
        ;;
        *) ./build/snake
        ;;
    esac
    shift
done
exit 0