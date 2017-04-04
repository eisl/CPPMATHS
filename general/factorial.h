long int factorial(const unsigned int& f){
    long int ret = 1;
    for( unsigned int i = 1; i <= f; i++ ){
        ret*=i;
    }
    return ret;
}
