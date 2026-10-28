@interface WCFinderLiveSwitchStreamStatistic : NSObject
{
    BOOL _isSmoothSwitch; // +0x8
    unsigned int _hasSwitchLag; // +0xc
    unsigned int _maxSwitchLagTime; // +0x10
    unsigned long long _switchType; // +0x18
    unsigned long long _switchBeginTime; // +0x20
    unsigned long long _switchEndTime; // +0x28
}
- (unsigned long long)switchType;
- (void)setSwitchType:(unsigned long long)arg1;
- (BOOL)isSmoothSwitch;
- (void)setIsSmoothSwitch:(BOOL)arg1;
- (unsigned long long)switchBeginTime;
- (void)setSwitchBeginTime:(unsigned long long)arg1;
- (unsigned long long)switchEndTime;
- (void)setSwitchEndTime:(unsigned long long)arg1;
- (unsigned int)hasSwitchLag;
- (void)setHasSwitchLag:(unsigned int)arg1;
- (unsigned int)maxSwitchLagTime;
- (void)setMaxSwitchLagTime:(unsigned int)arg1;
@end
