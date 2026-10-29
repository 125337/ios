@interface WCFinderLiveSwitchStreamReportStruct : NSObject
{
    unsigned int _prediction; // +0x8
    unsigned int _videoLevel; // +0xc
    unsigned int _isAutoSwitchConfigEnabled; // +0x10
    unsigned int _isAutoSwitchEnabled; // +0x14
    unsigned int _lagTime; // +0x18
    unsigned int _action; // +0x1c
    unsigned int _switchType; // +0x20
    unsigned int _isSmoothSwitch; // +0x24
    unsigned int _reduceVideoLevel; // +0x28
    unsigned int _switchTime; // +0x2c
    unsigned int _hasSwitchLag; // +0x30
    unsigned int _maxSwitchLagTime; // +0x34
    unsigned long long _liveId; // +0x38
    unsigned long long _actionTs; // +0x40
}
- (id)toReport;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned int)prediction;
- (void)setPrediction:(unsigned int)arg1;
- (unsigned int)videoLevel;
- (void)setVideoLevel:(unsigned int)arg1;
- (unsigned int)isAutoSwitchConfigEnabled;
- (void)setIsAutoSwitchConfigEnabled:(unsigned int)arg1;
- (unsigned int)isAutoSwitchEnabled;
- (void)setIsAutoSwitchEnabled:(unsigned int)arg1;
- (unsigned int)lagTime;
- (void)setLagTime:(unsigned int)arg1;
- (unsigned int)action;
- (void)setAction:(unsigned int)arg1;
- (unsigned int)switchType;
- (void)setSwitchType:(unsigned int)arg1;
- (unsigned int)isSmoothSwitch;
- (void)setIsSmoothSwitch:(unsigned int)arg1;
- (unsigned int)reduceVideoLevel;
- (void)setReduceVideoLevel:(unsigned int)arg1;
- (unsigned int)switchTime;
- (void)setSwitchTime:(unsigned int)arg1;
- (unsigned int)hasSwitchLag;
- (void)setHasSwitchLag:(unsigned int)arg1;
- (unsigned int)maxSwitchLagTime;
- (void)setMaxSwitchLagTime:(unsigned int)arg1;
- (unsigned long long)actionTs;
- (void)setActionTs:(unsigned long long)arg1;
@end

