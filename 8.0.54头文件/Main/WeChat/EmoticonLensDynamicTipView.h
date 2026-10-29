@interface EmoticonLensDynamicTipView : MMUIView
{
    MMUIView * _tipContentView; // +0x8
    UIImageView * _iconImageView; // +0x10
    MMUILabel * _tipLabel; // +0x18
    MMTimer * _hiddenTimer; // +0x20
    MMTimer * _startTimer; // +0x28
    NSArray * _actionTypes; // +0x30
    long long _currentIndex; // +0x38
}
+ (double)getHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)startPlayWithActionTypes:(id)arg1;
- (void)stopAnimation;
- (void)startNextActionAnimation;
- (void)playActionType:(long long)arg1 withDuration:(double)arg2 isFirstTip:(BOOL)arg3;
- (void)layoutSubviews;
- (void)configWithTip:(id)arg1 imageList:(id)arg2 duration:(double)arg3;
- (void)startHiddenViewTimerWithDuration:(double)arg1;
- (void)animationDidFinish;
- (id)tipContentView;
- (void)setTipContentView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (id)hiddenTimer;
- (void)setHiddenTimer:(id)arg1;
- (id)startTimer;
- (void)setStartTimer:(id)arg1;
- (id)actionTypes;
- (void)setActionTypes:(id)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (void).cxx_destruct;
@end

