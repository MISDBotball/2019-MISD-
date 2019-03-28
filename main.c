#include <kipr/botball.h>

int main()
{
    printf("Hello World\n");

    //create_connect();
    int right_servo=1539;//servo 0 open
    int left_servo=403;//servo 1 open
    set_servo_position(0,right_servo);//set servo to open position
    set_servo_position(1,left_servo);
    set_servo_position(3,134);
    enable_servos();
    while(right_servo>191||left_servo<1751)//while right servo is less than int,while left more than 403
    {
        set_servo_position(0,right_servo);//set position to closed value same for left
        set_servo_position(1,left_servo);
        msleep(25);// timeframe for function
        left_servo=left_servo+15;// value=value+value, if value does'nt = value +value, add value
        right_servo=right_servo-15;// closes servo at a value of 100 each time
    }
    //disable_servos();
    create_disconnect();



    return 0;
}
