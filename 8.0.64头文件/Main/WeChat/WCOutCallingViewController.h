@interface WCOutCallingViewController : MMUIViewController <IWCOutCallExt, WCOutDialPadDelegate, MMTipsViewControllerDelegate>
{
    BOOL m_buttonsEnable; // +0x70
    long long m_lastAddKeyPadTime; // +0x78
    BOOL _hasBeAccepted; // +0x80
    id <WcoMinimizeDelegate> _delegate; // +0x88
    UIView * _normalBigView; // +0x90
    UILabel * _userLabel; // +0x98
    UILabel * _phoneLabel; // +0xa0
    UILabel * _stateLabel; // +0xa8
    MMTimerLabel * _timerLabel; // +0xb0
    UILabel * _keyPadInputLabel; // +0xb8
    WCOutDialPad * _dialPad; // +0xc0
    MMTimer * _m_netStatusUpdateTimer; // +0xc8
    UILabel * _m_netStatusLabel; // +0xd0
    WavAudioPlayer * _m_wavAudioPlayer; // +0xd8
    UIButton * _minimizeButton; // +0xe0
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)initView;
- (void)updateNetStatus;
- (void)configBlurBackground;
- (void)configNormalBigView;
- (void)configKeyPadBigView;
- (void)initViewData;
- (void)updatePhoneAndUserLabel;
- (void)dismiss;
- (void)OnPressedDialPadKeyWithText:(id)arg1 andKeyCode:(int)arg2;
- (void)OnPressedDialPadFunctionBtnWithType:(unsigned long long)arg1;
- (void)OnUpdateCallStateWithText:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)initMinimizeButton;
- (void)onMinimizeButtonClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)normalBigView;
- (void)setNormalBigView:(id)arg1;
- (id)userLabel;
- (void)setUserLabel:(id)arg1;
- (id)phoneLabel;
- (void)setPhoneLabel:(id)arg1;
- (id)stateLabel;
- (void)setStateLabel:(id)arg1;
- (id)timerLabel;
- (void)setTimerLabel:(id)arg1;
- (id)keyPadInputLabel;
- (void)setKeyPadInputLabel:(id)arg1;
- (id)dialPad;
- (void)setDialPad:(id)arg1;
- (id)m_netStatusUpdateTimer;
- (void)setM_netStatusUpdateTimer:(id)arg1;
- (id)m_netStatusLabel;
- (void)setM_netStatusLabel:(id)arg1;
- (id)m_wavAudioPlayer;
- (void)setM_wavAudioPlayer:(id)arg1;
- (BOOL)hasBeAccepted;
- (void)setHasBeAccepted:(BOOL)arg1;
- (id)minimizeButton;
- (void)setMinimizeButton:(id)arg1;
- (void).cxx_destruct;
@end
