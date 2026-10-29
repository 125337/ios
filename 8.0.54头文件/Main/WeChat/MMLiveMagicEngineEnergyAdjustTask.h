@interface MMLiveMagicEngineEnergyAdjustTask : NSObject <_TtP6WeChat15IMRViewListener_>
{
    _TtC6WeChat15MagicRewardView * _magicRewardView; // +0x8
    id /* block */ _onQuailtyLevelChangedCallback; // +0x10
    id /* block */ _onFrameRateChangedCallback; // +0x18
    long long _currQuailtyLevel; // +0x20
    double _currPixelRatio; // +0x28
}
- (id)initWithRewardView:(id)arg1;
- (void)configListeners;
- (BOOL)isActive;
- (void)initSettingQualityLevel:(long long)arg1;
- (void)initSettingPixelRatio:(double)arg1;
- (void)adjustQuailtyLevel:(long long)arg1;
- (void)updateQualityLevel;
- (void)adjustFrameRate:(unsigned int)arg1;
- (void)delayCheckStatsAfter:(double)arg1;
- (void)onAnimationStartWithView:(id)arg1;
- (void)onAnimationCancelWithView:(id)arg1;
- (void)onAnimationEndWithView:(id)arg1;
- (void)onAnimationRepeatWithView:(id)arg1;
- (void)onAnimationTimeoutWithView:(id)arg1;
- (id)magicRewardView;
- (void)setMagicRewardView:(id)arg1;
- (id /* block */)onQuailtyLevelChangedCallback;
- (void)setOnQuailtyLevelChangedCallback:(id /* block */)arg1;
- (id /* block */)onFrameRateChangedCallback;
- (void)setOnFrameRateChangedCallback:(id /* block */)arg1;
- (long long)currQuailtyLevel;
- (void)setCurrQuailtyLevel:(long long)arg1;
- (double)currPixelRatio;
- (void)setCurrPixelRatio:(double)arg1;
- (void).cxx_destruct;
@end

