@interface WCFinderLiveHomePageEntertainmentTeamupAudioRoomAvatarView : WCFinderLiveHomePageEntertainmentTeamupAvatarView
{
    BOOL _userIsTalking; // +0x8
    UIView * _imageContainerView; // +0x10
    UIView * _cameraContainerView; // +0x18
    UIImageView * _cameraImageView; // +0x20
    MMFinderLiveAudioRoomMicAudioAnimationView * _audioAnimationView; // +0x28
    UIColor * _audioWaveColor; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithInfo:(id)arg1;
- (void)updateUserCameraOn:(BOOL)arg1;
- (void)updateCameraViewState;
- (void)prepareForReuse;
- (void)updateUserIsTalking:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)updateAudioWaveColor:(id)arg1;
- (void)layoutSubviews;
- (double)cameraContainerSize;
- (double)cameraImageSize;
- (void)layoutAudioAnimationView;
- (id)imageContainerView;
- (void)setImageContainerView:(id)arg1;
- (id)cameraContainerView;
- (void)setCameraContainerView:(id)arg1;
- (id)cameraImageView;
- (void)setCameraImageView:(id)arg1;
- (id)audioAnimationView;
- (void)setAudioAnimationView:(id)arg1;
- (BOOL)userIsTalking;
- (void)setUserIsTalking:(BOOL)arg1;
- (id)audioWaveColor;
- (void)setAudioWaveColor:(id)arg1;
- (void).cxx_destruct;
@end
