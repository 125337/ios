@interface MMFinderLiveConnectMicModePreviewItemView : UIView
{
    BOOL _videoAvailable; // +0x8
    BOOL _isOtherAnchorAudioMode; // +0x9
    unsigned long long _displayMode; // +0x10
    UIImageView * _imageView; // +0x18
    UIView * _audioBackgroundView; // +0x20
    MMWebImageView * _avatarView; // +0x28
    MMLiveGradientLayerView * _bottomGradientView; // +0x30
    UILabel * _displayNameLabel; // +0x38
    unsigned long long _userRole; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setDisplayMode:(unsigned long long)arg1;
- (void)setVideoAvailable:(BOOL)arg1;
- (void)updateWithMicUser:(id)arg1;
- (void)updateWithAnchorBackgroundImage:(id)arg1 orBackgroundImageUri:(id)arg2 avatarUri:(id)arg3;
- (void)updateAudioBackgroundViewWithAnchorBackgroundImage:(id)arg1 orBackgroundImageUri:(id)arg2;
- (void)renderImageBuffer:(__CVBuffer *)arg1;
- (void)layoutSubviews;
- (void)updateViewsVisibility;
- (void)updateViewsVisibilityForAnchor;
- (void)updateViewsVisibilityForOtherAnchor;
- (void)updateViewsVisibilityForVideoAudience;
- (void)updateViewsVisibilityForAudioAudience;
- (void)layoutForVideoAudienceOrOtherAnchor;
- (void)layoutForAudioAudience;
- (unsigned long long)displayMode;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)audioBackgroundView;
- (void)setAudioBackgroundView:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)bottomGradientView;
- (void)setBottomGradientView:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (unsigned long long)userRole;
- (void)setUserRole:(unsigned long long)arg1;
- (BOOL)videoAvailable;
- (BOOL)isOtherAnchorAudioMode;
- (void)setIsOtherAnchorAudioMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

