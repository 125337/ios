@interface ChatBotVoIPBottomPanel : UIView <UIGestureRecognizerDelegate>
{
    unsigned int _btnBitSet; // +0x8
    unsigned int _viewStatus; // +0xc
    id <ChatBotVoIPBottomPanelDelegate> _delegate; // +0x10
    ChatBotAnimatedWaveView * _voiceInputBtnWaveView; // +0x18
    UIView * _voiceInputBtn; // +0x20
    UIView * _voiceInputGesView; // +0x28
    UIImageView * _voiceInputBtnIcon; // +0x30
    UILabel * _voiceInputBtnTitle; // +0x38
    UIVisualEffectView * _voiceInputBtnBlurView; // +0x40
    UILongPressGestureRecognizer * _voiceInputLongPressGes; // +0x48
    ChatBotBlurButton * _keyBoardBtn; // +0x50
    ChatBotBlurButton * _cameraBtn; // +0x58
    ChatBotBlurButton * _backBtn; // +0x60
    ChatBotBlurButton * _stopBtn; // +0x68
    MMUIButton * _flipBtn; // +0x70
    MMUIButton * _takePhotoBtn; // +0x78
    AVAudioPlayer * _player; // +0x80
    ChatBotEllipseRecordView * _voiceRecordView; // +0x88
}
- (id)initWithPanelBtnBitSet:(unsigned int)arg1;
- (void)setViewStatus:(unsigned int)arg1;
- (void)layoutSubviews;
- (void)layoutVoiceInputBtn;
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
- (void)playSound:(id)arg1 OfType:(id)arg2 numberOfLoops:(long long)arg3;
- (void)onChangeMainBtn:(BOOL)arg1;
- (void)layoutStopBtn;
- (void)onPressStop;
- (void)addTapGesToStopBtn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)btnBitSet;
- (void)setBtnBitSet:(unsigned int)arg1;
- (unsigned int)viewStatus;
- (id)voiceInputBtnWaveView;
- (void)setVoiceInputBtnWaveView:(id)arg1;
- (id)voiceInputBtn;
- (void)setVoiceInputBtn:(id)arg1;
- (id)voiceInputGesView;
- (void)setVoiceInputGesView:(id)arg1;
- (id)voiceInputBtnIcon;
- (void)setVoiceInputBtnIcon:(id)arg1;
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
- (void).cxx_destruct;
@end
