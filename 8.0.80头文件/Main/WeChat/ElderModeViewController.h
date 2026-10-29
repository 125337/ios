@interface ElderModeViewController : MMUIViewController <ElderModeExt, HearingAidExt>
{
    BOOL _disableAutoJumpWhenElderModeOpen; // +0x70
    BOOL _showInWeCheck; // +0x71
    BOOL _showElderModeToast; // +0x72
    long long _scene; // +0x78
    UIScrollView * _scrollView; // +0x80
    UIStackView * _contentStack; // +0x88
    UIView * _gradientMaskView; // +0x90
    UIButton * _openOrCloseButton; // +0x98
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
- (void)onHearingAidClick:(id)arg1;
- (void)onQuickCallClick:(id)arg1;
- (void)closeElderMode;
- (void)openElderMode;
- (void)setElderModeOn:(BOOL)arg1;
- (void)reloadDataForElderModeChange;
- (void)onHearingAidModeChange:(unsigned long long)arg1;
- (void)onSetElderModeOn:(BOOL)arg1 success:(BOOL)arg2;
- (void)onSetSpecialRenderModeOn:(BOOL)arg1 success:(BOOL)arg2;
- (void)onSetSilentModeOn:(BOOL)arg1 success:(BOOL)arg2;
- (void)dataReport:(BOOL)arg1 viewID:(id)arg2;
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
