@interface MMFinderLiveAlertView : WCUIAlertView
{
    BOOL _viewDismissCountDownRegistered; // +0x8
    BOOL _displayCountDownInTitleTag; // +0x9
    double _time; // +0x10
    id /* block */ _autoDismissBlock; // +0x18
    MMTimer * _countDownTimer; // +0x20
    NSString * _rawViewTitle; // +0x28
}
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (void)showWithTimeDuration:(double)arg1 autoDismissBlock:(id /* block */)arg2 displayCountDownInTitle:(BOOL)arg3;
- (void)cancelAutoDismiss;
- (void)autoDismiss;
- (void)updateCountTimer;
- (BOOL)viewDismissCountDownRegistered;
- (void)setViewDismissCountDownRegistered:(BOOL)arg1;
- (double)time;
- (void)setTime:(double)arg1;
- (id /* block */)autoDismissBlock;
- (void)setAutoDismissBlock:(id /* block */)arg1;
- (BOOL)displayCountDownInTitleTag;
- (void)setDisplayCountDownInTitleTag:(BOOL)arg1;
- (id)countDownTimer;
- (void)setCountDownTimer:(id)arg1;
- (id)rawViewTitle;
- (void)setRawViewTitle:(id)arg1;
- (void).cxx_destruct;
@end
