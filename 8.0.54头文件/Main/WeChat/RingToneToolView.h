@interface RingToneToolView : UIStackView
{
    BOOL _isPlaying; // +0x8
    id <RingToneToolActionResponder> _responder; // +0x10
    UIButton * _playButton; // +0x18
    UIButton * _cropButton; // +0x20
    UIButton * _switchButton; // +0x28
    UIButton * _moreButton; // +0x30
    UIImageView * _musicDancingView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)config;
- (void)initView;
- (void)addMorebutton;
- (void)initMusicDanceingView;
- (void)dancingMusicView:(BOOL)arg1 type:(unsigned long long)arg2;
- (void)updatePlayerMode:(unsigned long long)arg1;
- (void)initiativeTriggerPlay;
- (void)setIsPlaying:(BOOL)arg1;
- (void)setRingPlayButtonEnabled:(BOOL)arg1;
- (void)onPlayButtonTap;
- (void)onSwitchButtonTap;
- (void)onMoreButtonTap;
- (id)responder;
- (void)setResponder:(id)arg1;
- (BOOL)isPlaying;
- (id)playButton;
- (void)setPlayButton:(id)arg1;
- (id)cropButton;
- (void)setCropButton:(id)arg1;
- (id)switchButton;
- (void)setSwitchButton:(id)arg1;
- (id)moreButton;
- (void)setMoreButton:(id)arg1;
- (id)musicDancingView;
- (void)setMusicDancingView:(id)arg1;
- (void).cxx_destruct;
@end

