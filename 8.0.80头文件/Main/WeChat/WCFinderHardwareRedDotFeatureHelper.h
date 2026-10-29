@interface WCFinderHardwareRedDotFeatureHelper : NSObject
{
    float _currentVolume; // +0x8
    float _currentBrightness; // +0xc
    float _currentBatteryLevel; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (void)asyncUpdateAllProperties;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)handleBrightnessChange;
- (void)handleBatteryNotification;
- (void)dealloc;
- (float)currentVolume;
- (void)setCurrentVolume:(float)arg1;
- (float)currentBrightness;
- (void)setCurrentBrightness:(float)arg1;
- (float)currentBatteryLevel;
- (void)setCurrentBatteryLevel:(float)arg1;
@end
