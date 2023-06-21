int abrupt (int x) {
    while (x > 0) 
      /*@ 
        requires \true ; 
        ensures x==3;*/
      {
        if (x){
          x++;
        };
      };
};
