@interface HearingAidChooseModeViewController : MMUIViewController <MMTipsViewControllerDelegate, PariViewDelegate, RoundButtonDelegate, AbandonTextViewDelegate>
{
    unsigned char _isAlready; // +0x70
    unsigned char _currentIsAB; // +0x71
    BOOL _isInit; // +0x72
    BOOL _isAudioInterruption; // +0x73
    int _isClickLeft; // +0x74
    int _lastIsClickLeft; // +0x78
    MMUILabel * _titleLabel; // +0x80
    UIView * _chooseModeView; // +0x88
    UIView * _chooseModeViewAB; // +0x90
    UIView * _chooseModeViewCD; // +0x98
    HearingAidChooseModePairView * _pairAB; // +0xa0
    HearingAidChooseModePairView * _pairCD; // +0xa8
    unsigned long long _audioA; // +0xb0
    unsigned long long _audioB; // +0xb8
    unsigned long long _audioC; // +0xc0
    unsigned long long _audioD; // +0xc8
    UIView * _footerView; // +0xd0
    UIView * _confirmBtnView; // +0xd8
    RoundButton * _confirmBtn; // +0xe0
    UIImageView * _confirmBtnImage; // +0xe8
    AbandonTextView * _abandonBtn; // +0xf0
    MMUILabel * _tipsView; // +0xf8
    NSTimer * _hideTimer; // +0x100
    UIScreenEdgePanGestureRecognizer * _screenEdgePanGesture; // +0x108
}
- (id)initWithAudio1:(unsigned long long)arg1 audio2:(unsigned long long)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)initUI;
- (void)initTitle;
- (void)initChooseModeView;
- (void)initFooterView;
- (void)initConfrimButton;
- (id)genTextLabel:(id)arg1;
- (void)genGesture;
- (void)genAbandonBtn;
- (void)genTipsView;
- (void)updateLayout;
- (BOOL)isLargeFont;
- (BOOL)isiphoneDuoOrIpad;
- (void)onPairABChoosed:(BOOL)arg1;
- (void)startCD:(BOOL)arg1;
- (void)onPairCDChoosed:(BOOL)arg1;
- (void)showTipsView:(id)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)handleScreenEdgePanGesture:(id)arg1;
- (void)updateBtnBackGround:(BOOL)arg1;
- (void)viewDidBeInteractivePoped;
- (void)onBackClick;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)dataReport:(BOOL)arg1 processResult:(int)arg2 audioAutoPlay:(BOOL)arg3;
- (void)onReceiveTouch:(BOOL)arg1;
- (void)isAllPlayed:(BOOL)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)onResponseAudioInterruptionBegin;
- (void)onResponseAudioInterruptionEnd;
- (BOOL)judgeSelfIsPopVC;
- (void)appDidEnterBackground;
- (void)RoundButton_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)RoundButton_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)AbandonTextView_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)AbandonTextView_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)chooseModeView;
- (void)setChooseModeView:(id)arg1;
- (id)chooseModeViewAB;
- (void)setChooseModeViewAB:(id)arg1;
- (id)chooseModeViewCD;
- (void)setChooseModeViewCD:(id)arg1;
- (id)pairAB;
- (void)setPairAB:(id)arg1;
- (id)pairCD;
- (void)setPairCD:(id)arg1;
- (unsigned long long)audioA;
- (void)setAudioA:(unsigned long long)arg1;
- (unsigned long long)audioB;
- (void)setAudioB:(unsigned long long)arg1;
- (unsigned long long)audioC;
- (void)setAudioC:(unsigned long long)arg1;
- (unsigned long long)audioD;
- (void)setAudioD:(unsigned long long)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)confirmBtnView;
- (void)setConfirmBtnView:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)confirmBtnImage;
- (void)setConfirmBtnImage:(id)arg1;
- (id)abandonBtn;
- (void)setAbandonBtn:(id)arg1;
- (int)isClickLeft;
- (void)setIsClickLeft:(int)arg1;
- (int)lastIsClickLeft;
- (void)setLastIsClickLeft:(int)arg1;
- (unsigned char)isAlready;
- (void)setIsAlready:(unsigned char)arg1;
- (unsigned char)currentIsAB;
- (void)setCurrentIsAB:(unsigned char)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (BOOL)isInit;
- (void)setIsInit:(BOOL)arg1;
- (id)hideTimer;
- (void)setHideTimer:(id)arg1;
- (BOOL)isAudioInterruption;
- (void)setIsAudioInterruption:(BOOL)arg1;
- (id)screenEdgePanGesture;
- (void)setScreenEdgePanGesture:(id)arg1;
- (void).cxx_destruct;
@end
