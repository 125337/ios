@interface AppleIDBindViewController : MMUIViewController <AppleIDBindLogicDelegate>
{
    BOOL _appleIDBound; // +0x68
    id <AppleIDBindViewControllerDelegate> _delegate; // +0x70
    AppleIDBindLogic * _appleIDBindLogic; // +0x78
    UILabel * _titleLabel; // +0x80
    UILabel * _subtitleLabel; // +0x88
    UIButton * _unbindButton; // +0x90
    AppleStyleLoginRegisterButton * _bindButton; // +0x98
    ThirdAppBindReportObject * _reportObject; // +0xa0
}
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)initData;
- (void)initView;
- (id)navigationBarBackgroundColor;
- (void)viewDidTransitionToNewSize;
- (void)updateLayout;
- (void)refreshContent;
- (void)setAppleIDBound:(BOOL)arg1;
- (void)onTapCloseBarButton;
- (void)onTapBindButton;
- (void)onTapUnbindButton;
- (id)getViewController;
- (void)onRequestAuthorizeFromAppleFinished:(BOOL)arg1;
- (void)onBindAppleIDSucceed;
- (void)onBindAppleIDFailedWithError:(id)arg1;
- (void)onUnbindAppleIDSucceed;
- (void)onUnbindAppleIDFailedWithError:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isAppleIDBound;
- (id)appleIDBindLogic;
- (void)setAppleIDBindLogic:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)unbindButton;
- (void)setUnbindButton:(id)arg1;
- (id)bindButton;
- (void)setBindButton:(id)arg1;
- (id)reportObject;
- (void)setReportObject:(id)arg1;
- (void).cxx_destruct;
@end

