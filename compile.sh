export UPCXX_GASNET_CONDUIT=smp
export UPCXX_THREADMODE=seq
export UPCXX_CODEMODE=O3

upcxx -O3 "$1.cpp" -o "$1.out"
upcxx-run -n "$2" "$1.out"
