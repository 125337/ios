@interface MMLiveScreenSharingViewController : MMLiveScreenSharingBaseViewController
{
    BOOL _navigationBarHidden; // +0x68
    id <MMLiveScreenSharingViewControllerDelegate> _delegate; // +0x70
    long long _status; // +0x78
    UIButton * _startButton; // +0x80
}
- (id)init;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)setStatus:(long long)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (void)loadStartButton;
- (void)startButtonClicked:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)navigationBarHidden;
- (long long)status;
- (id)startButton;
- (void)setStartButton:(id)arg1;
- (void).cxx_destruct;
@end

