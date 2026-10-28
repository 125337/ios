@interface CaraAppleDevice : NSObject <CaraNativeDeviceBase>
{
    float _batteryLevel; // +0x8
    long long _batteryState; // +0x10
    NSObject<OS_dispatch_source> * _batteryTimer; // +0x18
}
- (id)init;
- (float)battery;
- (BOOL)isCharging;
- (int)networkType;
- (int)brand;
- (id)screenSize;
- (BOOL)isReachable;
- (long long)batteryState;
- (void)setBatteryState:(long long)arg1;
- (float)batteryLevel;
- (void)setBatteryLevel:(float)arg1;
- (id)batteryTimer;
- (void).cxx_destruct;
@end
