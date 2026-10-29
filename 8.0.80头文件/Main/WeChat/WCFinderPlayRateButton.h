@interface WCFinderPlayRateButton : MMUIButton
{
    NSArray * _playRatePairs; // +0x8
    id /* block */ _playRateChangeBlock; // +0x10
    long long _currentIndex; // +0x18
    long long _normalPlayRateIndex; // +0x20
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)setPlayRatePairs:(id)arg1;
- (void)resetToNormalPlayRate;
- (void)setPlayRate:(double)arg1;
- (double)currentPlayRate;
- (void)onClickBtn;
- (void)updatePlayRateState;
- (BOOL)isNormalPlayRate:(double)arg1;
- (BOOL)isPlayRate:(double)arg1 equalToOtherPlayRate:(double)arg2;
- (id)playRatePairs;
- (id /* block */)playRateChangeBlock;
- (void)setPlayRateChangeBlock:(id /* block */)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (long long)normalPlayRateIndex;
- (void)setNormalPlayRateIndex:(long long)arg1;
- (void).cxx_destruct;
@end
