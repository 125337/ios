@interface HearingAidChooseModeViewController : MMUIViewController <MMTipsViewControllerDelegate, PariViewDelegate>
{
    unsigned char _isAlready; // +0x70
    unsigned char _currentIsAB; // +0x71
    BOOL _isInit; // +0x72
    int _isClickLeft; // +0x74
    MMUILabel * _titleLabel; // +0x78
    UIView * _chooseModeView; // +0x80
    UIView * _chooseModeViewAB; // +0x88
    UIView * _chooseModeViewCD; // +0x90
    HearingAidChooseModePairView * _pairAB; // +0x98
    HearingAidChooseModePairView * _pairCD; // +0xa0
    unsigned long long _audioA; // +0xa8
    unsigned long long _audioB; // +0xb0
    unsigned long long _audioC; // +0xb8
    unsigned long long _audioD; // +0xc0
    UIView * _confirmBtn; // +0xc8
    UIImageView * _confirmBtnImage; // +0xd0
    UILabel * _abandonBtn; // +0xd8
    MMUILabel * _tipsView; // +0xe0
    NSTimer * _hideTimer; // +0xe8
}
- (id)initWithAudio1:(unsigned long long)arg1 audio2:(unsigned long long)arg2;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initUI;
- (void)initTitle;
- (void)initChooseModeView;
- (void)initConfrimButton;
- (void)genAbandonBtn;
- (void)genTipsView;
- (void)updateLayout;
- (void)onPairABChoosed:(BOOL)arg1;
- (void)startCD:(BOOL)arg1;
- (void)onPairCDChoosed:(BOOL)arg1;
- (void)showTipsView:(id)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)updateBtnBackGround:(BOOL)arg1;
- (void)onBackClick;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)showTipsAboutVoiceChange;
- (void)onReceiveTouch:(BOOL)arg1;
- (void)isAllPlayed:(BOOL)arg1;
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
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)confirmBtnImage;
- (void)setConfirmBtnImage:(id)arg1;
- (id)abandonBtn;
- (void)setAbandonBtn:(id)arg1;
- (int)isClickLeft;
- (void)setIsClickLeft:(int)arg1;
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
- (void).cxx_destruct;
@end
