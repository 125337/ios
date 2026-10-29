@interface MMFinderLiveAudioRoomTalkingUserView : UIView
{
    BOOL _scalable; // +0x8
    BOOL _isAvatarRounded; // +0x9
    BOOL _userIsTalking; // +0xa
    WCFinderHeadImageView * _userAvatarView; // +0x10
    MMFinderLiveAudioRoomMicAudioAnimationView * _audioAnimationView; // +0x18
    UIColor * _audioWaveColor; // +0x20
    UILabel * _textLabel; // +0x28
    WCFinderContact * _userContact; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configViews;
- (void)layoutSubviews;
- (double)currentScale;
- (void)layoutUI;
- (void)updateUserContact:(id)arg1 isAvatarRounded:(BOOL)arg2 userIsTalking:(BOOL)arg3;
- (void)updateUserIsTalking:(BOOL)arg1;
- (void)updateAudioWaveColor:(id)arg1;
- (BOOL)scalable;
- (void)setScalable:(BOOL)arg1;
- (BOOL)isAvatarRounded;
- (void)setIsAvatarRounded:(BOOL)arg1;
- (BOOL)userIsTalking;
- (void)setUserIsTalking:(BOOL)arg1;
- (id)userAvatarView;
- (void)setUserAvatarView:(id)arg1;
- (id)audioAnimationView;
- (void)setAudioAnimationView:(id)arg1;
- (id)audioWaveColor;
- (void)setAudioWaveColor:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)userContact;
- (void)setUserContact:(id)arg1;
- (void).cxx_destruct;
@end
