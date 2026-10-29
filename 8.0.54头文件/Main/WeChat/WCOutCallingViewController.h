@interface WCOutCallingViewController : MMUIViewController <IWCOutCallExt, WCOutDialPadDelegate, MMTipsViewControllerDelegate>
{
    BOOL m_buttonsEnable; // +0x68
    long long m_lastAddKeyPadTime; // +0x70
    BOOL _hasBeAccepted; // +0x78
    id <WcoMinimizeDelegate> _delegate; // +0x80
    UIView * _normalBigView; // +0x88
    UILabel * _userLabel; // +0x90
    UILabel * _phoneLabel; // +0x98
    UILabel * _stateLabel; // +0xa0
    MMTimerLabel * _timerLabel; // +0xa8
    UILabel * _keyPadInputLabel; // +0xb0
    WCOutDialPad * _dialPad; // +0xb8
    MMTimer * _m_netStatusUpdateTimer; // +0xc0
    UILabel * _m_netStatusLabel; // +0xc8
    WavAudioPlayer * _m_wavAudioPlayer; // +0xd0
    UIButton * _minimizeButton; // +0xd8
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

