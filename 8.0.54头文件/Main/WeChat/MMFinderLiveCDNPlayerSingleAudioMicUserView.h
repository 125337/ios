@interface MMFinderLiveCDNPlayerSingleAudioMicUserView : UIView
{
    BOOL _hideAudioMicUserAvatar; // +0x8
    MMFinderLiveConnectMicUser * _userInfo; // +0x10
    WCFinderHeadImageView * _headImageView; // +0x18
    WCFinderHeadImageView * _backgroundHeadImageView; // +0x20
    UIView * _audioUserBlurView; // +0x28
}
- (void)setHideAudioMicUserAvatar:(BOOL)arg1;
- (void)updateHeadImageView;
- (void)layoutSubviews;
- (void)configUI;
- (void)layoutUI;
- (void)showWithConnectMicUserInfo:(id)arg1;
- (void)clearAndHide;
- (void)updateUserAvatarAlpha:(double)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)backgroundHeadImageView;
- (void)setBackgroundHeadImageView:(id)arg1;
- (id)audioUserBlurView;
- (void)setAudioUserBlurView:(id)arg1;
- (BOOL)hideAudioMicUserAvatar;
- (void).cxx_destruct;
@end

