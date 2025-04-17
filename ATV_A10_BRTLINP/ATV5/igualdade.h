int igual( int x, int y){

    if(x == y){
        return 1;
    }else if (x != y) {
        return 0;
    }

}

int maior(int x, int y){

    if (x > y) {
        return x;
    }else if (y > x) {
        return y;
    }

}

int menor(int x, int y){

    if (x < y) {
        return x;
    }else if (y < x) {
        return y;
    }

}


int maior2(int x, int y, int z){

    if (x > y || x > z) {
        return x;
    }else if (y > x || y > z) {
        return y;
    }else if (z > x || z > y) {
        return z;
    }

}
