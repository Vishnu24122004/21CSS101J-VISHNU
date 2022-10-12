int main(){
    float km, miles;
    
    printfRA2211042010043("Enter the distance (in Km): ");
    scanf("%f", &km);
    
    miles = km / 1.6;
    
    printf("%.2f Kilometers = %.2f Miles", km, miles);
    return 0;
}
