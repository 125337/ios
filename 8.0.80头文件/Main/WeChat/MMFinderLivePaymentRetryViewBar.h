@interface MMFinderLivePaymentRetryViewBar : UIView
{
    BOOL _isPreparingNotPaidAnimation; // +0x8
    BOOL _useTrialEndedStyle; // +0x9
    BOOL _isInAnimation; // +0xa
    BOOL _needHidden; // +0xb
    unsigned int _remainTime; // +0xc
    unsigned int _timeLimit; // +0x10
    unsigned int _trialEndTime; // +0x14
    unsigned int _costWeBeanCount; // +0x18
    unsigned int _lastExtendTime; // +0x1c
    long long _countDownMode; // +0x20
    unsigned long long _currentLivePaymentType; // +0x28
    id /* block */ _countDownUpdatedCallback; // +0x30
    id /* block */ _payActionCallback; // +0x38
    long long _layoutOrientation; // +0x40
    id <MMFinderLivePaymentRetryViewBarDelegate> _delegate; // +0x48
    long long _entranceSrc; // +0x50
    MMUILabel * _retryViewTipLabel; // +0x58
    MMFinderLivePayButton * _payButton; // +0x60
    long long _payButtonState; // +0x68
}
+ (double)preferHeight;
+ (id)trialCountDownTimeStringWithSeconds:(unsigned int)arg1;
+ (id)trialCountDownAttributedTextWithSeconds:(unsigned int)arg1 font:(id)arg2 color:(id)arg3;
+ (id)trialEndedTipFont;
- (id)initWithFromSource:(long long)arg1 countDownMode:(long long)arg2;
- (void)layoutSubviews;
- (double)paybuttonWidth;
- (double)paybuttonTop;
- (void)startCountDown;
- (void)stopCountdown;
- (void)updateCurrentLivePaymentType:(unsigned long long)arg1 remainTime:(unsigned int)arg2 timeLimit:(unsigned int)arg3 trialEndTime:(unsigned int)arg4 costWeBeanCount:(unsigned int)arg5;
- (void)updateTimeLimit:(unsigned int)arg1;
- (void)updateTrialEndTime:(unsigned int)arg1;
- (void)updateRemainTime:(unsigned int)arg1 checkEqual:(BOOL)arg2 isExpandingTime:(BOOL)arg3;
- (void)executeAnimation;
- (void)terminateAndDrainRemainTime;
- (void)updateHidden:(BOOL)arg1;
- (void)updateSelfDisplay;
- (BOOL)isCurrentParamsValid;
- (void)countDown;
- (void)updateForRemainTimeChanged;
- (void)layoutUI;
- (void)layoutRetryViewTipLabel;
- (void)updateRetryViewTipLabelOrigin;
- (void)layoutPayButton;
- (double)getPayButtonRight;
- (unsigned int)effectiveTrialEndTime;
- (BOOL)isTrialTimeEndedAtTime:(unsigned int)arg1;
- (unsigned int)displayRemainTimeAtTime:(unsigned int)arg1;
- (void)updateRetryViewTip;
- (void)setRemainTime:(unsigned int)arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setUseTrialEndedStyle:(BOOL)arg1;
- (id)getPayButtonAttributedText:(BOOL)arg1;
- (id)getPayButtonAttributedTextInPayState;
- (long long)countDownMode;
- (void)setCountDownMode:(long long)arg1;
- (unsigned long long)currentLivePaymentType;
- (void)setCurrentLivePaymentType:(unsigned long long)arg1;
- (id /* block */)countDownUpdatedCallback;
- (void)setCountDownUpdatedCallback:(id /* block */)arg1;
- (id /* block */)payActionCallback;
- (void)setPayActionCallback:(id /* block */)arg1;
- (long long)layoutOrientation;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isPreparingNotPaidAnimation;
- (void)setIsPreparingNotPaidAnimation:(BOOL)arg1;
- (unsigned int)remainTime;
- (unsigned int)timeLimit;
- (void)setTimeLimit:(unsigned int)arg1;
- (unsigned int)trialEndTime;
- (void)setTrialEndTime:(unsigned int)arg1;
- (BOOL)useTrialEndedStyle;
- (long long)entranceSrc;
- (void)setEntranceSrc:(long long)arg1;
- (unsigned int)costWeBeanCount;
- (void)setCostWeBeanCount:(unsigned int)arg1;
- (BOOL)isInAnimation;
- (void)setIsInAnimation:(BOOL)arg1;
- (id)retryViewTipLabel;
- (void)setRetryViewTipLabel:(id)arg1;
- (id)payButton;
- (void)setPayButton:(id)arg1;
- (long long)payButtonState;
- (void)setPayButtonState:(long long)arg1;
- (BOOL)needHidden;
- (void)setNeedHidden:(BOOL)arg1;
- (unsigned int)lastExtendTime;
- (void)setLastExtendTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
