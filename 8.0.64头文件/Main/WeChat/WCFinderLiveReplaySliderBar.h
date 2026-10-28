@interface WCFinderLiveReplaySliderBar : UIView <WCFinderLivePlayerSliderDelegate>
{
    BOOL _isRecentShockInStartOrEnd; // +0x8
    WCFinderLivePlayerSlider * _videoSlider; // +0x10
    NSArray * _greateTimeList; // +0x18
    id /* block */ _sliderDragCallback; // +0x20
    id /* block */ _greateTimeDotTapCallback; // +0x28
    id /* block */ _sliderTapCallback; // +0x30
    double _totalTime; // +0x38
    NSMutableArray * _greateTimeDotList; // +0x40
}
+ (BOOL)isSliderPercent:(double)arg1 equalPercent:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutVideoSlider;
- (void)updateAllGreateDotsOrigin;
- (void)updateGreateDotOrigin:(id)arg1;
- (id)tryGetGreateDotToInvokeTap:(CGPoint)arg1;
- (BOOL)isPoint:(CGPoint)arg1 hitTouchInGreateDot:(id)arg2;
- (id)greateTimeDotList;
- (void)updateTotalTime:(double)arg1;
- (void)updateGreatTimeList:(id)arg1;
- (void)configGreateTimeAttachDotValueList;
- (void)updateGreateTimeDotList;
- (id)createGreateTimeDotWithGreateTime:(double)arg1;
- (void)clearAllGreateTimeDotBtns;
- (BOOL)shockInSliderPercentIfNeeded:(double)arg1;
- (void)resetRecentShockTagIfNeeded:(double)arg1;
- (void)onPlayerSliderPrecent:(double)arg1 dragState:(unsigned long long)arg2;
- (void)onPlayerSliderTouch:(unsigned long long)arg1 location:(CGPoint)arg2;
- (id)videoSlider;
- (void)setVideoSlider:(id)arg1;
- (id)greateTimeList;
- (void)setGreateTimeList:(id)arg1;
- (id /* block */)sliderDragCallback;
- (void)setSliderDragCallback:(id /* block */)arg1;
- (id /* block */)greateTimeDotTapCallback;
- (void)setGreateTimeDotTapCallback:(id /* block */)arg1;
- (id /* block */)sliderTapCallback;
- (void)setSliderTapCallback:(id /* block */)arg1;
- (double)totalTime;
- (void)setTotalTime:(double)arg1;
- (void)setGreateTimeDotList:(id)arg1;
- (BOOL)isRecentShockInStartOrEnd;
- (void)setIsRecentShockInStartOrEnd:(BOOL)arg1;
- (void).cxx_destruct;
@end
