@interface HearingAidTestPreViewController : MMUIViewController <MMTipsViewControllerDelegate, VoiceContainerViewDelegate, RoundButtonDelegate, AbandonTextViewDelegate>
{
    BOOL _isFinishPlay; // +0x70
    BOOL _isInit; // +0x71
    BOOL _pendingInitialAutoPlay; // +0x72
    BOOL _isPageVisible; // +0x73
    BOOL _isAudioInterruption; // +0x74
    UIView * _headerView; // +0x78
    UIView * _footerView; // +0x80
    MMUILabel * _titleLabel; // +0x88
    MMUILabel * _tipsView; // +0x90
    UIImageView * _curPlayIcon; // +0x98
    VoiceContainerView * _container; // +0xa0
    RoundButton * _clearlyBtn; // +0xa8
    RoundButton * _unclearlyBtn; // +0xb0
    UIImageView * _clearlyBtnImage; // +0xb8
    UIImageView * _unclearlyBtnImage; // +0xc0
    HearingAidTestLogic * _logic; // +0xc8
    AbandonTextView * _goBackHomeBtn; // +0xd0
    NSTimer * _hideTimer; // +0xd8
    unsigned long long _secondAudio; // +0xe0
    unsigned long long _currentAudio; // +0xe8
    UIScreenEdgePanGestureRecognizer * _screenEdgePanGesture; // +0xf0
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initUI;
- (void)initHeadView;
- (void)initFooterView;
- (void)genGesture;
- (void)genTipsView;
- (id)genbackBtn;
- (id)genButtonsView;
- (id)genTextLabel:(id)arg1;
- (void)onClearlyBtnClick:(unsigned long long)arg1;
- (void)onUnclearlyBtnClick:(unsigned long long)arg1;
- (void)switchTestCard:(unsigned long long)arg1;
- (BOOL)processStartSecondPlay:(unsigned long long)arg1;
- (void)initTitle;
- (void)genContainer:(unsigned long long)arg1;
- (void)updateLayout;
- (void)controlPlay:(unsigned long long)arg1;
- (void)setUpPlayUI:(BOOL)arg1;
- (void)setUpButtonsEnalbe:(BOOL)arg1;
- (void)tryStartInitialAutoPlay;
- (BOOL)startTest:(unsigned long long)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)handleScreenEdgePanGesture:(id)arg1;
- (void)initRoundButton:(BOOL)arg1;
- (void)viewDidBeInteractivePoped;
- (void)onBackClick;
- (void)showTipsView:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)onResponseAudioInterruptionBegin;
- (void)onResponseAudioInterruptionEnd;
- (BOOL)judgeSelfIsPopVC;
- (void)dataReport:(BOOL)arg1 processResult:(int)arg2 audioAutoPlay:(BOOL)arg3;
- (BOOL)isLargeFont;
- (BOOL)isiphoneDuoOrIpad;
- (void)appDidEnterBackground;
- (void)stopPlaying;
- (void)VoiceContainerView_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)VoiceContainerView_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)RoundButton_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)RoundButton_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)RoundButton_touchesEnded_right:(id)arg1 withEvent:(id)arg2;
- (void)AbandonTextView_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)AbandonTextView_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)curPlayIcon;
- (void)setCurPlayIcon:(id)arg1;
- (id)container;
- (void)setContainer:(id)arg1;
- (id)clearlyBtn;
- (void)setClearlyBtn:(id)arg1;
- (id)unclearlyBtn;
- (void)setUnclearlyBtn:(id)arg1;
- (id)clearlyBtnImage;
- (void)setClearlyBtnImage:(id)arg1;
- (id)unclearlyBtnImage;
- (void)setUnclearlyBtnImage:(id)arg1;
- (BOOL)isFinishPlay;
- (void)setIsFinishPlay:(BOOL)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (id)goBackHomeBtn;
- (void)setGoBackHomeBtn:(id)arg1;
- (id)hideTimer;
- (void)setHideTimer:(id)arg1;
- (BOOL)isInit;
- (void)setIsInit:(BOOL)arg1;
- (BOOL)pendingInitialAutoPlay;
- (void)setPendingInitialAutoPlay:(BOOL)arg1;
- (BOOL)isPageVisible;
- (void)setIsPageVisible:(BOOL)arg1;
- (BOOL)isAudioInterruption;
- (void)setIsAudioInterruption:(BOOL)arg1;
- (unsigned long long)secondAudio;
- (void)setSecondAudio:(unsigned long long)arg1;
- (unsigned long long)currentAudio;
- (void)setCurrentAudio:(unsigned long long)arg1;
- (id)screenEdgePanGesture;
- (void)setScreenEdgePanGesture:(id)arg1;
- (void).cxx_destruct;
@end
