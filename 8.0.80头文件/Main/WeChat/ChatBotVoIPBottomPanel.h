@interface ChatBotVoIPBottomPanel : UIView <UIGestureRecognizerDelegate>
{
    BOOL _needCancelSendVoice; // +0x8
    unsigned int _btnBitSet; // +0xc
    unsigned int _viewStatus; // +0x10
    int _openScene; // +0x14
    id <ChatBotVoIPBottomPanelDelegate> _delegate; // +0x18
    ChatBotAnimatedWaveView * _voiceInputBtnWaveView; // +0x20
    UIView * _voiceInputBtn; // +0x28
    UIView * _voiceInputGesView; // +0x30
    UIView * _voiceInputBtnDisplayView; // +0x38
    UILabel * _voiceInputBtnTitle; // +0x40
    UIVisualEffectView * _voiceInputBtnBlurView; // +0x48
    UILongPressGestureRecognizer * _voiceInputLongPressGes; // +0x50
    ChatBotBlurButton * _keyBoardBtn; // +0x58
    ChatBotBlurButton * _cameraBtn; // +0x60
    ChatBotBlurButton * _backBtn; // +0x68
    ChatBotBlurButton * _stopBtn; // +0x70
    MMUIButton * _flipBtn; // +0x78
    MMUIButton * _takePhotoBtn; // +0x80
    AVAudioPlayer * _player; // +0x88
    ChatBotEllipseRecordView * _voiceRecordView; // +0x90
    UIColor * _buttonColor; // +0x98
}
- (id)initWithPanelBtnBitSet:(unsigned int)arg1 openScene:(int)arg2;
- (id)initWithPanelBtnBitSet:(unsigned int)arg1 openScene:(int)arg2 buttonColor:(id)arg3;
- (void)setViewStatus:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)layoutVoiceInputBtn;
- (void)updateVoiceInputBtnWhenLongPressed;
- (void)addTapGesToVoiceInputGesView;
- (void)addLongPressGesToVoiceInputGesView;
- (void)onVoiceInputShouldBegin;
- (void)onVoiceInputShouldEnd;
- (void)realOpenClientMic;
- (void)realCloseClientMic;
- (void)layoutKeyBoardBtn;
- (void)onKeyBoardBtnClick;
- (void)layoutCameraBtn;
- (void)onCameraBtnClick;
- (void)layoutBackBtn;
- (void)onBackBtnClick;
- (void)layoutFlipBtn;
- (void)onFlipBtnClick;
- (void)layoutTakePhotoBtn;
- (void)onTakePhotoBtnClick;
- (void)updatePanleWithBtnBitSet:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)layoutVoiceRecordView;
- (void)updateViewStatus:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)quitCameraMode;
- (void)onChangeMainBtn:(BOOL)arg1;
- (void)layoutStopBtn;
- (void)onPressStop;
- (void)addTapGesToStopBtn;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)voiceInputBtnWaveView;
- (void)setVoiceInputBtnWaveView:(id)arg1;
- (unsigned int)btnBitSet;
- (void)setBtnBitSet:(unsigned int)arg1;
- (unsigned int)viewStatus;
- (id)voiceInputBtn;
- (void)setVoiceInputBtn:(id)arg1;
- (id)voiceInputGesView;
- (void)setVoiceInputGesView:(id)arg1;
- (id)voiceInputBtnDisplayView;
- (void)setVoiceInputBtnDisplayView:(id)arg1;
- (id)voiceInputBtnTitle;
- (void)setVoiceInputBtnTitle:(id)arg1;
- (id)voiceInputBtnBlurView;
- (void)setVoiceInputBtnBlurView:(id)arg1;
- (id)voiceInputLongPressGes;
- (void)setVoiceInputLongPressGes:(id)arg1;
- (id)keyBoardBtn;
- (void)setKeyBoardBtn:(id)arg1;
- (id)cameraBtn;
- (void)setCameraBtn:(id)arg1;
- (id)backBtn;
- (void)setBackBtn:(id)arg1;
- (id)stopBtn;
- (void)setStopBtn:(id)arg1;
- (id)flipBtn;
- (void)setFlipBtn:(id)arg1;
- (id)takePhotoBtn;
- (void)setTakePhotoBtn:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)voiceRecordView;
- (void)setVoiceRecordView:(id)arg1;
- (int)openScene;
- (void)setOpenScene:(int)arg1;
- (BOOL)needCancelSendVoice;
- (void)setNeedCancelSendVoice:(BOOL)arg1;
- (id)buttonColor;
- (void)setButtonColor:(id)arg1;
- (void).cxx_destruct;
@end
