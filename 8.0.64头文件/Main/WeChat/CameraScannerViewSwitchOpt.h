@interface CameraScannerViewSwitchOpt : NSObject
{
    BOOL _isSwitchExp; // +0x8
    BOOL _needReport; // +0x9
    BOOL _currentDeviceIsUltraBySys; // +0xa
    BOOL _enableAutoSwitch; // +0xb
    BOOL _enableFirstFlashOpt; // +0xc
    BOOL _closeSysAutoSwitch; // +0xd
    BOOL _enableFirstDaulOpt; // +0xe
    unsigned long long _checkLensCount; // +0x10
    unsigned long long _configSwitchCount; // +0x18
    double _lastLensPosition; // +0x20
    unsigned long long _switchToUltraWideCount; // +0x28
    unsigned long long _switchToAngleWideCount; // +0x30
    unsigned long long _skipFirstCheck; // +0x38
    unsigned long long _firstNormalCount; // +0x40
    unsigned long long _checkInterval; // +0x48
    double _initTime; // +0x50
    NSString * _lensSquence; // +0x58
    unsigned long long _skipCameraChangeInterval; // +0x60
    unsigned long long _cameraChangeSkipCount; // +0x68
    unsigned long long _firstNormalFrame; // +0x70
    unsigned long long _frameCount; // +0x78
    NSString * _firstLensSquence; // +0x80
}
- (id)init;
- (unsigned long long)checkLensCount;
- (void)setCheckLensCount:(unsigned long long)arg1;
- (unsigned long long)configSwitchCount;
- (void)setConfigSwitchCount:(unsigned long long)arg1;
- (double)lastLensPosition;
- (void)setLastLensPosition:(double)arg1;
- (unsigned long long)switchToUltraWideCount;
- (void)setSwitchToUltraWideCount:(unsigned long long)arg1;
- (unsigned long long)switchToAngleWideCount;
- (void)setSwitchToAngleWideCount:(unsigned long long)arg1;
- (BOOL)isSwitchExp;
- (void)setIsSwitchExp:(BOOL)arg1;
- (unsigned long long)skipFirstCheck;
- (void)setSkipFirstCheck:(unsigned long long)arg1;
- (BOOL)needReport;
- (void)setNeedReport:(BOOL)arg1;
- (BOOL)currentDeviceIsUltraBySys;
- (void)setCurrentDeviceIsUltraBySys:(BOOL)arg1;
- (unsigned long long)firstNormalCount;
- (void)setFirstNormalCount:(unsigned long long)arg1;
- (BOOL)enableAutoSwitch;
- (void)setEnableAutoSwitch:(BOOL)arg1;
- (unsigned long long)checkInterval;
- (void)setCheckInterval:(unsigned long long)arg1;
- (double)initTime;
- (void)setInitTime:(double)arg1;
- (id)lensSquence;
- (void)setLensSquence:(id)arg1;
- (BOOL)enableFirstFlashOpt;
- (void)setEnableFirstFlashOpt:(BOOL)arg1;
- (BOOL)closeSysAutoSwitch;
- (void)setCloseSysAutoSwitch:(BOOL)arg1;
- (BOOL)enableFirstDaulOpt;
- (void)setEnableFirstDaulOpt:(BOOL)arg1;
- (unsigned long long)skipCameraChangeInterval;
- (void)setSkipCameraChangeInterval:(unsigned long long)arg1;
- (unsigned long long)cameraChangeSkipCount;
- (void)setCameraChangeSkipCount:(unsigned long long)arg1;
- (unsigned long long)firstNormalFrame;
- (void)setFirstNormalFrame:(unsigned long long)arg1;
- (unsigned long long)frameCount;
- (void)setFrameCount:(unsigned long long)arg1;
- (id)firstLensSquence;
- (void)setFirstLensSquence:(id)arg1;
- (void).cxx_destruct;
@end
