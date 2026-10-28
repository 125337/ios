@interface WCFinderGameLiveCountdownViewController : MMCPUIViewController <MMLiveCountdownTipsViewDelegate>
{
    id /* block */ _cancelCallback; // +0x70
    id /* block */ _timeoutCallback; // +0x78
    id <WCFinderGameLiveCountdownViewControllerDelegate> _delegate; // +0x80
    MMLiveCountdownTipsView * _countdownTipsView; // +0x88
    long long _countdownTimer; // +0x90
}
- (id)initWithCountdownTimer:(long long)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)layoutCountdownTipsView;
- (void)showCountdownView;
- (void)hideCountdownView;
- (void)onMMLiveCountdownStart;
- (void)onMMLiveCountdownCancelled;
- (void)onMMLiveCountdownTimeOut;
- (id /* block */)cancelCallback;
- (void)setCancelCallback:(id /* block */)arg1;
- (id /* block */)timeoutCallback;
- (void)setTimeoutCallback:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)countdownTipsView;
- (void)setCountdownTipsView:(id)arg1;
- (long long)countdownTimer;
- (void)setCountdownTimer:(long long)arg1;
- (void).cxx_destruct;
@end
