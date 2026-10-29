@interface ElderModeViewController : MMUIViewController <ElderModeExt>
{
    BOOL _disableAutoJumpWhenElderModeOpen; // +0x68
    BOOL _showInWeCheck; // +0x69
    BOOL _showElderModeToast; // +0x6a
    long long _scene; // +0x70
    UIScrollView * _scrollView; // +0x78
    UIStackView * _contentStack; // +0x80
    UIView * _gradientMaskView; // +0x88
    UIButton * _openOrCloseButton; // +0x90
}
- (id)initWithScene:(long long)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)updateGradientLayer;
- (void)registerYReportSdk;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (id)logoHeadView;
- (id)managerForOnMode;
- (void)loadModeOffComponents;
- (void)appendModeOffTitle:(id)arg1;
- (void)appendModeOffDescriptions:(id)arg1;
- (void)appendModeOffDescription:(id)arg1;
- (void)loadModeOnComponents;
- (void)addSpacerOfMinHeight:(double)arg1;
- (void)onFontLevelSwitchChanged:(id)arg1;
- (void)onTextToSpeechSwitchChanged:(id)arg1;
- (void)onSilentModeSwitchChanged:(id)arg1;
- (void)onQuickCallClick:(id)arg1;
- (void)closeElderMode;
- (void)openElderMode;
- (void)setElderModeOn:(BOOL)arg1;
- (void)reloadDataForElderModeChange;
- (void)onSetElderModeOn:(BOOL)arg1 success:(BOOL)arg2;
- (void)onSetSpecialRenderModeOn:(BOOL)arg1 success:(BOOL)arg2;
- (void)onSetSilentModeOn:(BOOL)arg1 success:(BOOL)arg2;
- (BOOL)disableAutoJumpWhenElderModeOpen;
- (void)setDisableAutoJumpWhenElderModeOpen:(BOOL)arg1;
- (BOOL)showInWeCheck;
- (void)setShowInWeCheck:(BOOL)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)contentStack;
- (void)setContentStack:(id)arg1;
- (id)gradientMaskView;
- (void)setGradientMaskView:(id)arg1;
- (id)openOrCloseButton;
- (void)setOpenOrCloseButton:(id)arg1;
- (BOOL)showElderModeToast;
- (void)setShowElderModeToast:(BOOL)arg1;
- (void).cxx_destruct;
@end

