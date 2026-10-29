@interface MMBatteryInfo : NSObject
{
    float _batteryLevel; // +0x8
    long long _batteryState; // +0x10
}
+ (id)currentBatteryInfo;
- (long long)batteryState;
- (void)setBatteryState:(long long)arg1;
- (float)batteryLevel;
- (void)setBatteryLevel:(float)arg1;
@end
