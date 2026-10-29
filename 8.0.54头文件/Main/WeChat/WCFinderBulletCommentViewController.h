@interface WCFinderBulletCommentViewController : MMUIViewController <WCFinderBulletInputViewDelegate>
{
    BOOL _shouldShowSwitchButton; // +0x68
    id <WCFinderBulletCommentViewControllerDelegate> _delegate; // +0x70
    WCFinderFeedContentVM * _contentVM; // +0x78
    UIButton * _backgroundButton; // +0x80
    WCFinderBulletInputView * _bulletInputView; // +0x88
}
- (void)viewDidLoad;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)bulletInputView;
- (void)showBulletInputView;
- (void)hideBulletInputView;
- (void)onBackgroundButtonClicked:(id)arg1;
- (id)navigationBarBackgroundColor;
- (void)onCommitBulletCommentWithText:(id)arg1;
- (BOOL)isFinderViewer;
- (void)onInputViewChangeBulletSwitchOpenState:(BOOL)arg1;
- (void)registerYReportSdk;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)shouldShowSwitchButton;
- (void)setShouldShowSwitchButton:(BOOL)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)backgroundButton;
- (void)setBackgroundButton:(id)arg1;
- (void)setBulletInputView:(id)arg1;
- (void).cxx_destruct;
@end

