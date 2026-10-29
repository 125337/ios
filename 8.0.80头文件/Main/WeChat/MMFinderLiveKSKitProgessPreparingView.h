@interface MMFinderLiveKSKitProgessPreparingView : UIView <PAGViewListener>
{
    BOOL _isStartPrepare; // +0x8
    BOOL _isPrepareEnd; // +0x9
    int _maxPrepareMs; // +0xc
    int _remainMs; // +0x10
    id /* block */ _prepareEndCallback; // +0x18
    PAGView * _preparePAGView; // +0x20
    long long _prepareAnimDuration; // +0x28
    PAGView * _countDownPAGView; // +0x30
    long long _countDownAnimDuration; // +0x38
}
- (id)init;
- (void)initUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)createPreparePagView;
- (void)createCountDownPagView;
- (double)preferHeight;
- (void)startPrepare;
- (void)notifyPrepareEnd;
- (void)updateMaxPreparingMs:(int)arg1;
- (void)updatePreparingRemainMs:(int)arg1;
- (void)reset;
- (BOOL)tryStartAnimation;
- (BOOL)tryStartPrepareAnimation;
- (BOOL)tryStartCountDownAnimation;
- (void)stopAnimations;
- (void)stopPrepare;
- (void)manualStopIfNeed:(BOOL)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (BOOL)isStartPrepare;
- (void)setIsStartPrepare:(BOOL)arg1;
- (BOOL)isPrepareEnd;
- (void)setIsPrepareEnd:(BOOL)arg1;
- (id /* block */)prepareEndCallback;
- (void)setPrepareEndCallback:(id /* block */)arg1;
- (int)maxPrepareMs;
- (void)setMaxPrepareMs:(int)arg1;
- (int)remainMs;
- (void)setRemainMs:(int)arg1;
- (id)preparePAGView;
- (void)setPreparePAGView:(id)arg1;
- (long long)prepareAnimDuration;
- (void)setPrepareAnimDuration:(long long)arg1;
- (id)countDownPAGView;
- (void)setCountDownPAGView:(id)arg1;
- (long long)countDownAnimDuration;
- (void)setCountDownAnimDuration:(long long)arg1;
- (void).cxx_destruct;
@end
