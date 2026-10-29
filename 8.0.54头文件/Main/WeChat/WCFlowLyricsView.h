@interface WCFlowLyricsView : MMUIView <CAAnimationDelegate>
{
    BOOL _isRepeatByReplay; // +0x8
    BOOL _hasStart; // +0x9
    UIColor * _unSelectedColor; // +0x10
    UIColor * _defaultLabelTextColor; // +0x18
    UILabel * _flowLabel; // +0x20
    UIView * _gradientMaskView; // +0x28
    double _lastLyricsStartTime; // +0x30
    NSString * _originString; // +0x38
    NSMutableAttributedString * _attributedString; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)addGradientMaskView;
- (void)addLyricsLabel;
- (void)setContentViewData:(id)arg1 withFromeBgmSearch:(BOOL)arg2;
- (id)getHitKeysFor:(id)arg1;
- (void)waitingFlow;
- (void)startFlow;
- (void)startFlowInMs:(unsigned long long)arg1;
- (void)stopFlow;
- (void)resetToStopState;
- (void)replay;
- (BOOL)isAnimating;
- (void)animateFromRightToLeftDuration:(double)arg1 offset:(float)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)getAimLabelTextColor:(id)arg1;
- (id)unSelectedColor;
- (void)setUnSelectedColor:(id)arg1;
- (id)defaultLabelTextColor;
- (void)setDefaultLabelTextColor:(id)arg1;
- (id)flowLabel;
- (void)setFlowLabel:(id)arg1;
- (id)gradientMaskView;
- (void)setGradientMaskView:(id)arg1;
- (double)lastLyricsStartTime;
- (void)setLastLyricsStartTime:(double)arg1;
- (BOOL)isRepeatByReplay;
- (void)setIsRepeatByReplay:(BOOL)arg1;
- (BOOL)hasStart;
- (void)setHasStart:(BOOL)arg1;
- (id)originString;
- (void)setOriginString:(id)arg1;
- (id)attributedString;
- (void)setAttributedString:(id)arg1;
- (void).cxx_destruct;
@end

