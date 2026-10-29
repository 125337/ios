@interface WCFinderBulletCommentViewController : MMUIViewController <WCFinderBulletInputViewDelegate>
{
    BOOL _shouldShowSwitchButton; // +0x70
    BOOL _isReplying; // +0x71
    id /* block */ _onSubmit; // +0x78
    id /* block */ _onClose; // +0x80
    id /* block */ _onSwitchChange; // +0x88
    WCFinderFeedContentVM * _contentVM; // +0x90
    UIButton * _backgroundButton; // +0x98
    WCFinderBulletInputView * _bulletInputView; // +0xa0
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
- (void)onInputViewChangeBulletSwitchOpenState:(BOOL)arg1;
- (void)registerYReportSdk;
- (id /* block */)onSubmit;
- (void)setOnSubmit:(id /* block */)arg1;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg1;
- (id /* block */)onSwitchChange;
- (void)setOnSwitchChange:(id /* block */)arg1;
- (BOOL)shouldShowSwitchButton;
- (void)setShouldShowSwitchButton:(BOOL)arg1;
- (BOOL)isReplying;
- (void)setIsReplying:(BOOL)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)backgroundButton;
- (void)setBackgroundButton:(id)arg1;
- (void)setBulletInputView:(id)arg1;
- (void).cxx_destruct;
@end
