@interface WCFinderAdCountdownBannerView : UIView
{
    id <WCFinderAdCountdownBannerViewDelegate> _delegate; // +0x8
    long long _totalWatchCount; // +0x10
    long long _countdownNum; // +0x18
    MMTimer * _countdownTimer; // +0x20
    UILabel * _countdownLabel; // +0x28
    UIView * _separateLine; // +0x30
    MMUIButton * _adTipsButton; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 countdownNum:(long long)arg2;
- (void)setupSubviews;
- (void)createCountdownTimerWithTimeInterval:(long long)arg1;
- (id)countdownLabel;
- (id)adTipsButton;
- (id)separateLine;
- (void)layoutComponents;
- (void)countdownTimerCallBack;
- (void)updateUIWithTime:(long long)arg1;
- (void)adBannerViewClickFeedbackAction:(id)arg1;
- (void)startCountdown;
- (void)pauseCountdown;
- (BOOL)adHasPlayOver;
- (id)countdownLabelString;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)totalWatchCount;
- (void)setTotalWatchCount:(long long)arg1;
- (long long)countdownNum;
- (void)setCountdownNum:(long long)arg1;
- (id)countdownTimer;
- (void)setCountdownTimer:(id)arg1;
- (void)setCountdownLabel:(id)arg1;
- (void)setSeparateLine:(id)arg1;
- (void)setAdTipsButton:(id)arg1;
- (void).cxx_destruct;
@end

