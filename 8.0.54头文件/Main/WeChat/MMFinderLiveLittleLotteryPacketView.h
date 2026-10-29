@interface MMFinderLiveLittleLotteryPacketView : UIView
{
    BOOL _isStaticStyle; // +0x8
    unsigned int _remainTime; // +0xc
    unsigned int _currentLotteryStatus; // +0x10
    id /* block */ _countDownCompleteCallback; // +0x18
    id /* block */ _countDownRemainTimeCallback; // +0x20
    long long _currentState; // +0x28
    NSDateComponentsFormatter * _accessibilityTimeFormatter; // +0x30
    UIView * _staticBGView; // +0x38
    LOTAnimationView * _pagPacketView; // +0x40
    MMTimerLabel * _tipLabel; // +0x48
    UIImageView * _imageView; // +0x50
    id /* block */ _didMoveToSuperviewBlock; // +0x58
    double _tipLabelHeightForStaticStyle; // +0x60
    MMFinderLiveLotteryPacketDisplayLogic * _logic; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutImageView;
- (void)layoutStaticBGView;
- (void)setAlpha:(double)arg1;
- (void)layoutPagPacketView;
- (void)layoutTipLabel;
- (void)switchToStaticStyleAnimatedWithCompletion:(id /* block */)arg1;
- (void)switchToNormalStyle;
- (void)startDisplayAnimated;
- (void)switchToBigAnimationStyleWithCompletion:(id /* block */)arg1;
- (void)convertRemainTimeToHour:(unsigned int *)arg1 minute:(unsigned int *)arg2 second:(unsigned int *)arg3;
- (void)startCountDown;
- (BOOL)isCountingDown;
- (void)stopCountDown;
- (void)stopDisplay;
- (void)reset;
- (void)setImage:(id)arg1;
- (unsigned int)currentRemainTime;
- (void)setCurrentLotteryStatus:(unsigned int)arg1;
- (void)didMoveToSuperview;
- (BOOL)isAccessibilityElement;
- (id)accessibilityTimeFormatter;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (unsigned int)remainTime;
- (void)setRemainTime:(unsigned int)arg1;
- (id /* block */)countDownCompleteCallback;
- (void)setCountDownCompleteCallback:(id /* block */)arg1;
- (id /* block */)countDownRemainTimeCallback;
- (void)setCountDownRemainTimeCallback:(id /* block */)arg1;
- (long long)currentState;
- (void)setCurrentState:(long long)arg1;
- (unsigned int)currentLotteryStatus;
- (void)setAccessibilityTimeFormatter:(id)arg1;
- (id)staticBGView;
- (void)setStaticBGView:(id)arg1;
- (id)pagPacketView;
- (void)setPagPacketView:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id /* block */)didMoveToSuperviewBlock;
- (void)setDidMoveToSuperviewBlock:(id /* block */)arg1;
- (double)tipLabelHeightForStaticStyle;
- (void)setTipLabelHeightForStaticStyle:(double)arg1;
- (BOOL)isStaticStyle;
- (void)setIsStaticStyle:(BOOL)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (void).cxx_destruct;
@end

