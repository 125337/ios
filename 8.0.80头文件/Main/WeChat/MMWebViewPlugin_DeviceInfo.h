@interface MMWebViewPlugin_DeviceInfo : MMWebViewPluginBase <CNetworkStatusExt, CMobileSIMTypeExt>
{
    BOOL _bKeepScreenOn; // +0x8
    int _setFlag; // +0xc
    long long _orientationBeforeSet; // +0x10
    long long _orientationSet; // +0x18
}
- (id)init;
- (BOOL)setToOrientation:(long long)arg1;
- (void)setDeviceOrientation:(long long)arg1;
- (void)setKeepScreenOn:(BOOL)arg1;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)handleClosePage:(id)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)MobileSIMTypeChange:(unsigned int)arg1 reason:(int)arg2;
- (void)sendNetworkTypeChangeEvent;
- (long long)orientationBeforeSet;
- (void)setOrientationBeforeSet:(long long)arg1;
- (long long)orientationSet;
- (void)setOrientationSet:(long long)arg1;
- (int)setFlag;
- (void)setSetFlag:(int)arg1;
- (BOOL)bKeepScreenOn;
- (void)setBKeepScreenOn:(BOOL)arg1;
@end
