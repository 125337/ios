@interface TXCScreenHDRBrightnessMonitor : NSObject
{
    BOOL _abort; // +0x8
    BOOL _captured; // +0x9
    BOOL _lowPowerModeEnabled; // +0xa
    double _currentEDRHeadroom; // +0x10
    double _potentialEDRHeadroom; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)setup;
- (void)addObservers;
- (void)removeObservers;
- (BOOL)needToCheckBrightness;
- (void)checkIfBrightnessIsActive;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)getStats;
- (void)onPowerStateDidChange:(id)arg1;
- (void)onCapturedDidChange:(id)arg1;
- (BOOL)isActive;
- (void)stop;
- (BOOL)abort;
- (void)setAbort:(BOOL)arg1;
- (BOOL)captured;
- (void)setCaptured:(BOOL)arg1;
- (BOOL)lowPowerModeEnabled;
- (void)setLowPowerModeEnabled:(BOOL)arg1;
- (double)currentEDRHeadroom;
- (void)setCurrentEDRHeadroom:(double)arg1;
- (double)potentialEDRHeadroom;
- (void)setPotentialEDRHeadroom:(double)arg1;
@end
