@interface HearingAidSuccessViewController : MMUIViewController <MMTipsViewControllerDelegate, VoiceContainerViewDelegate, RoundButtonDelegate, HearingAidRetestSheetViewDelegate>
{
    BOOL _isFromInit; // +0x70
    BOOL _isAudioInterruption; // +0x71
    BOOL _isInit; // +0x72
    unsigned long long _mode; // +0x78
    MMUILabel * _titleLabel; // +0x80
    UIImageView * _curPlayIcon; // +0x88
    VoiceContainerView * _container; // +0x90
    MMUILabel * _tipsView; // +0x98
    HearingAidSuccessLogic * _logic; // +0xa0
    WeToast * _toast; // +0xa8
    UIView * _footerView; // +0xb0
    RoundButton * _clearlyBtn; // +0xb8
    RoundButton * _unclearlyBtn; // +0xc0
    UIImageView * _clearlyBtnImage; // +0xc8
    UIImageView * _unclearlyBtnImage; // +0xd0
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)initUI;
- (void)updateLayout;
- (BOOL)isLargeFont;
- (BOOL)isiphoneDuoOrIpad;
- (void)genTipsView;
- (void)genContainer;
- (id)genButtonsView;
- (id)genTextLabel:(id)arg1;
- (void)initRoundButton:(BOOL)arg1;
- (void)controlPlay:(unsigned long long)arg1;
- (void)onConfirmBtnClick;
- (void)onRefuseBtnClick;
- (void)showRetestSheet;
- (void)onRetestSheetLeaveButtonClicked;
- (void)onRetestSheetRetestButtonClicked;
- (void)dataReport:(id)arg1 params:(id)arg2;
- (void)showTipsAboutLowVolume;
- (BOOL)useCustomNavibar;
- (BOOL)useBlackStatusbar;
- (void)setUpPlayUI:(BOOL)arg1;
- (void)popBackToInitView:(BOOL)arg1 isAnimated:(BOOL)arg2;
- (BOOL)shouldInteractivePop;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onResponseAudioInterruptionBegin;
- (void)onResponseAudioInterruptionEnd;
- (id)navigationBarBackgroundColor;
- (BOOL)judgeSelfIsPopVC;
- (void)appDidEnterBackground;
- (void)VoiceContainerView_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)VoiceContainerView_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)RoundButton_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)RoundButton_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)RoundButton_touchesEnded_right:(id)arg1 withEvent:(id)arg2;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (BOOL)isFromInit;
- (void)setIsFromInit:(BOOL)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)curPlayIcon;
- (void)setCurPlayIcon:(id)arg1;
- (id)container;
- (void)setContainer:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (BOOL)isAudioInterruption;
- (void)setIsAudioInterruption:(BOOL)arg1;
- (BOOL)isInit;
- (void)setIsInit:(BOOL)arg1;
- (id)toast;
- (void)setToast:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)clearlyBtn;
- (void)setClearlyBtn:(id)arg1;
- (id)unclearlyBtn;
- (void)setUnclearlyBtn:(id)arg1;
- (id)clearlyBtnImage;
- (void)setClearlyBtnImage:(id)arg1;
- (id)unclearlyBtnImage;
- (void)setUnclearlyBtnImage:(id)arg1;
- (void).cxx_destruct;
@end
