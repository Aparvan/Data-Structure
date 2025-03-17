int timeRequiredToBuy(int* tickets, int ticketsSize, int k) {
    int counter=0, x=0;
    while(tickets[k]!=0){
       if(tickets[x] != 0 ) {
        tickets[x]--;
        counter++;
       }
        x++;
        if(x==ticketsSize)
        x=0;
    }
return counter;
}
