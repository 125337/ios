@interface HearingAidChooseModePairView : NSObject <ChooseModelLogicDelegate, VoiceContainerViewDelegate>
{
    BOOL _isInterrupted; // +0x8
    BOOL _isClickLeft; // +0x9
    BOOL _isClickRight; // +0xa
    BOOL _leftIsPlayed; // +0xb
    BOOL _rightIsPlayed; // +0xc
    id <PariViewDelegate> _delegate; // +0x10
    UIViewController * _parentViewController; // +0x18
    UIView * _chooseModeView; // +0x20
    NSString * _audioTag1; // +0x28
    NSString * _audioTag2; // +0x30
    UIImageView * _firstPlayIcon; // +0x38
    UIImageView * _secondPlayIcon; // +0x40
    VoiceContainerView * _cardTop; // +0x48
    VoiceContainerView * _cardButtom; // +0x50
    id /* block */ _callback; // +0x58
    HearingAidChooseModePairLogic * _logic; // +0x60
    unsigned long long _currentAudio1; // +0x68
    unsigned long long _currentAudio2; // +0x70
}
- (id)initWithAudio1Tag:(id)arg1 audio2Tag:(id)arg2 callback:(id /* block */)arg3;
- (void)dealloc;
- (BOOL)start:(unsigned long long)arg1 audio2:(unsigned long long)arg2;
- (BOOL)stop;
- (id)view;
- (void)updateLayoutForWidth:(double)arg1;
- (id)genPlayTitle:(id)arg1;
- (id)genChooseCard:(BOOL)arg1;
- (void)onPlayControlBtnClick:(BOOL)arg1;
- (void)hasPlayed:(BOOL)arg1;
- (void)setUpPlayUI:(BOOL)arg1 playing:(BOOL)arg2;
- (void)updateState:(BOOL)arg1 secondPlaying:(BOOL)arg2 btnEnable:(BOOL)arg3;
- (void)isClickLeft:(BOOL)arg1;
- (void)clearClickBoarder;
- (id)getSelectedAudioName:(BOOL)arg1;
- (void)dataReport:(BOOL)arg1 letOrRight:(BOOL)arg2;
- (void)onErrSignal;
- (void)onFinishPlay:(BOOL)arg1;
- (void)VoiceContainerView_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)VoiceContainerView_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)VoiceContainerView_touchesEnded_right:(id)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isInterrupted;
- (void)setIsInterrupted:(BOOL)arg1;
- (id)parentViewController;
- (void)setParentViewController:(id)arg1;
- (id)chooseModeView;
- (void)setChooseModeView:(id)arg1;
- (id)audioTag1;
- (void)setAudioTag1:(id)arg1;
- (id)audioTag2;
- (void)setAudioTag2:(id)arg1;
- (id)firstPlayIcon;
- (void)setFirstPlayIcon:(id)arg1;
- (id)secondPlayIcon;
- (void)setSecondPlayIcon:(id)arg1;
- (id)cardTop;
- (void)setCardTop:(id)arg1;
- (id)cardButtom;
- (void)setCardButtom:(id)arg1;
- (BOOL)isClickLeft;
- (void)setIsClickLeft:(BOOL)arg1;
- (BOOL)isClickRight;
- (void)setIsClickRight:(BOOL)arg1;
- (BOOL)leftIsPlayed;
- (void)setLeftIsPlayed:(BOOL)arg1;
- (BOOL)rightIsPlayed;
- (void)setRightIsPlayed:(BOOL)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (unsigned long long)currentAudio1;
- (void)setCurrentAudio1:(unsigned long long)arg1;
- (unsigned long long)currentAudio2;
- (void)setCurrentAudio2:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
