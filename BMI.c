#include <stdio.h>

int main(){
    float height;
    float weight;
    float BMI;
    
    printf("BMI calculator(beta)\n");
	printf("Please enter your height(cm)\n");
    scanf("%f", &height);
    printf("Please enter your weight(kg)\n");
    scanf("%f", &weight);
    BMI=weight/(height*height)*10000;
    printf("Your BMI is %f\n",BMI);
    if(BMI<20){
        printf("Your low on weight, you should eat more food\n ");
    }else if(BMI<24){
        printf("your weight is normal, you should maintain this state\n");
    }else if(BMI<29){
        printf("your are overweight, you should have a healthy diet\n");
    }else if(BMI<100){
        printf("your are obese, you should exercise and have a healthy diet\n");
    }else if(BMI>=100){
        printf("no\n");
    }
        
    return 0;
}
