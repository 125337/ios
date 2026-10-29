@interface _TtC6WeChat36MMFinderLiveTaskKaraQualityStepState : NSObject
{
    FinderLiveQoSInfo * QoS; // +0x8
    int videoQualityLevel; // +0x10
    BOOL isH265; // +0x14
    BOOL isEnhanceEnabled; // +0x15
    BOOL isAutoSwitchStreamConfigEnabled; // +0x16
    long long autoSwitchStreamMinInterval; // +0x18
    long long autoSwitchStreamMaxCount; // +0x20
    BOOL useSmoothSwitchStreamMode; // +0x28
}
- (id)QoS;
- (void)setQoS:(id)arg1;
- (int)videoQualityLevel;
- (void)setVideoQualityLevel:(int)arg1;
- (BOOL)isH265;
- (void)setIsH265:(BOOL)arg1;
- (BOOL)isEnhanceEnabled;
- (void)setIsEnhanceEnabled:(BOOL)arg1;
- (BOOL)isAutoSwitchStreamConfigEnabled;
- (void)setIsAutoSwitchStreamConfigEnabled:(BOOL)arg1;
- (long long)autoSwitchStreamMinInterval;
- (void)setAutoSwitchStreamMinInterval:(long long)arg1;
- (long long)autoSwitchStreamMaxCount;
- (void)setAutoSwitchStreamMaxCount:(long long)arg1;
- (BOOL)useSmoothSwitchStreamMode;
- (void)setUseSmoothSwitchStreamMode:(BOOL)arg1;
- (id)initWithQoS:(id)arg1 videoQualityLevel:(int)arg2 isH265:(BOOL)arg3 isEnhanceEnabled:(BOOL)arg4 isAutoSwitchStreamConfigEnabled:(BOOL)arg5 autoSwitchStreamMinInterval:(long long)arg6 autoSwitchStreamMaxCount:(long long)arg7 useSmoothSwitchStreamMode:(BOOL)arg8;
- (id)init;
- (void).cxx_destruct;
@end
