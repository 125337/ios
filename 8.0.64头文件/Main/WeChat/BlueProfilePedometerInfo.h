@interface BlueProfilePedometerInfo : NSObject
{
    int _Step; // +0x8
    int _Calorie; // +0xc
    int _Distance; // +0x10
}
- (int)Step;
- (void)setStep:(int)arg1;
- (int)Calorie;
- (void)setCalorie:(int)arg1;
- (int)Distance;
- (void)setDistance:(int)arg1;
@end
