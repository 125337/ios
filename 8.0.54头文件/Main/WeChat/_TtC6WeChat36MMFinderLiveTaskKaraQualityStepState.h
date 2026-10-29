@interface _TtC6WeChat36MMFinderLiveTaskKaraQualityStepState : NSObject
{
     QoS; // +0x8
     videoQualityLevel; // +0x10
     isH265; // +0x14
     isEnhanceEnabled; // +0x15
     isAutoSwitchStreamConfigEnabled; // +0x16
     autoSwitchStreamMinInterval; // +0x18
     autoSwitchStreamMaxCount; // +0x20
     useSmoothSwitchStreamMode; // +0x28
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

