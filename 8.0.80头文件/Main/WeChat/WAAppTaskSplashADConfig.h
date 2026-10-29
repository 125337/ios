@interface WAAppTaskSplashADConfig : NSObject
{
    BOOL _splashADHasContent; // +0x8
    BOOL _canShowSplashADWindow; // +0x9
    BOOL _isHotStart; // +0xa
    BOOL _canHotStartShowSplashAD; // +0xb
    BOOL _isPreloaded; // +0xc
    BOOL _launchShow; // +0xd
    BOOL _launchDidAppear; // +0xe
    BOOL _injectFinishedWhenSendSholdShowSplashAD; // +0xf
    NSString * _appid; // +0x10
    NSDictionary * _splashADMenuParams; // +0x18
    unsigned long long _lastSuspendTime; // +0x20
    unsigned long long _hotStartShowSplashADInterval; // +0x28
    NSNumber * _splashADEnableNumber; // +0x30
    NSNumber * _adWorkerEnableNumber; // +0x38
    NSNumber * _splashADAllowNoPreloadNumber; // +0x40
    WASplashADWindow * _splashADWindow; // +0x48
    WASplashADViewController * _splashADViewController; // +0x50
    unsigned long long _splashADShowState; // +0x58
    unsigned long long _splashADCheckState; // +0x60
    unsigned long long _splashADClientState; // +0x68
    double _shouldShowTimeStamp; // +0x70
    double _jsReceiveShouldShowTimeStamp; // +0x78
    double _shouldShowEventTimeCost; // +0x80
    double _jsCallShowTimeStamp; // +0x88
    double _showTimeStamp; // +0x90
    double _showEventTimeCost; // +0x98
    double _checkStageTimeCost; // +0xa0
    double _willLayoutFirstStepViewTimeStamp; // +0xa8
    double _didLayoutFirstStepViewTimeStamp; // +0xb0
    double _layoutFirstStepViewTimeCost; // +0xb8
    double _willLayoutAllViewTimeStamp; // +0xc0
    double _didLayoutAllViewTimeStamp; // +0xc8
    double _layoutAllViewTimeCost; // +0xd0
    unsigned long long _notShowAdErrorCode; // +0xd8
    double _adOperateCallTime; // +0xe0
    double _adOperateCallReceivedTime; // +0xe8
    double _adOperateCallbackTime; // +0xf0
    double _adOperateCallbackReceivedTime; // +0xf8
    double _adOperrateCallCostTime; // +0x100
    double _adOperateCallClientCostTime; // +0x108
    NSNumber * _splashADAllowGameNumber; // +0x110
    double _adLogicFinishedTimeStamp; // +0x118
    double _checkShowAdTimeThreshold; // +0x120
    double _codeBlockTimeThreshold; // +0x128
    unsigned long long _publicLibVersion; // +0x130
}
+ (unsigned int)splashADStateReportValueWithCheckState:(unsigned long long)arg1 showState:(unsigned long long)arg2;
- (id)splashADEnableNumber;
- (id)adWorkerEnableNumber;
- (id)splashADAllowNoPreloadNumber;
- (id)splashADAllowGameNumber;
- (void)recordShouldShow:(double)arg1;
- (void)recordReceiveShow:(double)arg1;
- (void)recordWillLayoutFirstStepView:(double)arg1;
- (void)recordDidLayoutFirstStepView:(double)arg1;
- (void)recordWillLayoutAllView:(double)arg1;
- (void)recordDidLayoutAllView:(double)arg1;
- (void)recordJSReceiveShouldShowTimeStamp:(double)arg1 jsCallShowTimeStamp:(double)arg2;
- (void)doReport;
- (void)handleShowSplashAdCalled:(BOOL)arg1;
- (void)recordNotShowAdErrorCode:(unsigned long long)arg1;
- (void)recordAdOperateCallTime:(double)arg1 receiveTimeStamp:(double)arg2;
- (void)recordClientAdOperateCallReceivedTime:(double)arg1;
- (void)recordClientAdOperateCallbackTime:(double)arg1;
- (void)recordInjectFinishedWhenShouldShow:(BOOL)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (BOOL)splashADHasContent;
- (void)setSplashADHasContent:(BOOL)arg1;
- (id)splashADMenuParams;
- (void)setSplashADMenuParams:(id)arg1;
- (BOOL)canShowSplashADWindow;
- (void)setCanShowSplashADWindow:(BOOL)arg1;
- (BOOL)isHotStart;
- (void)setIsHotStart:(BOOL)arg1;
- (BOOL)canHotStartShowSplashAD;
- (void)setCanHotStartShowSplashAD:(BOOL)arg1;
- (unsigned long long)lastSuspendTime;
- (void)setLastSuspendTime:(unsigned long long)arg1;
- (unsigned long long)hotStartShowSplashADInterval;
- (void)setHotStartShowSplashADInterval:(unsigned long long)arg1;
- (void)setSplashADEnableNumber:(id)arg1;
- (void)setAdWorkerEnableNumber:(id)arg1;
- (void)setSplashADAllowNoPreloadNumber:(id)arg1;
- (id)splashADWindow;
- (void)setSplashADWindow:(id)arg1;
- (id)splashADViewController;
- (void)setSplashADViewController:(id)arg1;
- (unsigned long long)splashADShowState;
- (void)setSplashADShowState:(unsigned long long)arg1;
- (unsigned long long)splashADCheckState;
- (void)setSplashADCheckState:(unsigned long long)arg1;
- (unsigned long long)splashADClientState;
- (void)setSplashADClientState:(unsigned long long)arg1;
- (BOOL)isPreloaded;
- (void)setIsPreloaded:(BOOL)arg1;
- (double)shouldShowTimeStamp;
- (void)setShouldShowTimeStamp:(double)arg1;
- (double)jsReceiveShouldShowTimeStamp;
- (void)setJsReceiveShouldShowTimeStamp:(double)arg1;
- (double)shouldShowEventTimeCost;
- (void)setShouldShowEventTimeCost:(double)arg1;
- (double)jsCallShowTimeStamp;
- (void)setJsCallShowTimeStamp:(double)arg1;
- (double)showTimeStamp;
- (void)setShowTimeStamp:(double)arg1;
- (double)showEventTimeCost;
- (void)setShowEventTimeCost:(double)arg1;
- (double)checkStageTimeCost;
- (void)setCheckStageTimeCost:(double)arg1;
- (double)willLayoutFirstStepViewTimeStamp;
- (void)setWillLayoutFirstStepViewTimeStamp:(double)arg1;
- (double)didLayoutFirstStepViewTimeStamp;
- (void)setDidLayoutFirstStepViewTimeStamp:(double)arg1;
- (double)layoutFirstStepViewTimeCost;
- (void)setLayoutFirstStepViewTimeCost:(double)arg1;
- (double)willLayoutAllViewTimeStamp;
- (void)setWillLayoutAllViewTimeStamp:(double)arg1;
- (double)didLayoutAllViewTimeStamp;
- (void)setDidLayoutAllViewTimeStamp:(double)arg1;
- (double)layoutAllViewTimeCost;
- (void)setLayoutAllViewTimeCost:(double)arg1;
- (unsigned long long)notShowAdErrorCode;
- (void)setNotShowAdErrorCode:(unsigned long long)arg1;
- (double)adOperateCallTime;
- (void)setAdOperateCallTime:(double)arg1;
- (double)adOperateCallReceivedTime;
- (void)setAdOperateCallReceivedTime:(double)arg1;
- (double)adOperateCallbackTime;
- (void)setAdOperateCallbackTime:(double)arg1;
- (double)adOperateCallbackReceivedTime;
- (void)setAdOperateCallbackReceivedTime:(double)arg1;
- (double)adOperrateCallCostTime;
- (void)setAdOperrateCallCostTime:(double)arg1;
- (double)adOperateCallClientCostTime;
- (void)setAdOperateCallClientCostTime:(double)arg1;
- (BOOL)launchShow;
- (void)setLaunchShow:(BOOL)arg1;
- (BOOL)launchDidAppear;
- (void)setLaunchDidAppear:(BOOL)arg1;
- (void)setSplashADAllowGameNumber:(id)arg1;
- (double)adLogicFinishedTimeStamp;
- (void)setAdLogicFinishedTimeStamp:(double)arg1;
- (double)checkShowAdTimeThreshold;
- (void)setCheckShowAdTimeThreshold:(double)arg1;
- (double)codeBlockTimeThreshold;
- (void)setCodeBlockTimeThreshold:(double)arg1;
- (unsigned long long)publicLibVersion;
- (void)setPublicLibVersion:(unsigned long long)arg1;
- (BOOL)injectFinishedWhenSendSholdShowSplashAD;
- (void)setInjectFinishedWhenSendSholdShowSplashAD:(BOOL)arg1;
- (void).cxx_destruct;
@end
