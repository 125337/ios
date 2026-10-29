@interface WCFinderDiscoveryNearbyLiveCollectionViewCellConfig : NSObject
{
    BOOL _canShowVolumeEduView; // +0x8
    BOOL _canShowDescription; // +0x9
    BOOL _enableBottomExtraInfo; // +0xa
    BOOL _enableTopAuthorInfo; // +0xb
    double _avatorImageDiameter; // +0x10
    double _authInfoIconLeftMargin; // +0x18
    double _authInfoIconHeight; // +0x20
    double _activityImageViewMargin; // +0x28
    double _nickNameMargin; // +0x30
    double _avatarImageDescLabelMargin; // +0x38
    double _descLabelRecommendReasonMargin; // +0x40
    double _recommendReasonAvatarMargin; // +0x48
    double _authorInfoTopMargin; // +0x50
    double _nicknameFontSize; // +0x58
}
+ (id)defaultConfig:(id)arg1;
+ (id)bannerLiveConfig:(id)arg1;
- (void)reset:(id)arg1;
- (BOOL)canShowVolumeEduView;
- (void)setCanShowVolumeEduView:(BOOL)arg1;
- (BOOL)canShowDescription;
- (void)setCanShowDescription:(BOOL)arg1;
- (BOOL)enableBottomExtraInfo;
- (void)setEnableBottomExtraInfo:(BOOL)arg1;
- (double)avatorImageDiameter;
- (void)setAvatorImageDiameter:(double)arg1;
- (double)authInfoIconLeftMargin;
- (void)setAuthInfoIconLeftMargin:(double)arg1;
- (double)authInfoIconHeight;
- (void)setAuthInfoIconHeight:(double)arg1;
- (double)activityImageViewMargin;
- (void)setActivityImageViewMargin:(double)arg1;
- (double)nickNameMargin;
- (void)setNickNameMargin:(double)arg1;
- (double)avatarImageDescLabelMargin;
- (void)setAvatarImageDescLabelMargin:(double)arg1;
- (double)descLabelRecommendReasonMargin;
- (void)setDescLabelRecommendReasonMargin:(double)arg1;
- (double)recommendReasonAvatarMargin;
- (void)setRecommendReasonAvatarMargin:(double)arg1;
- (BOOL)enableTopAuthorInfo;
- (void)setEnableTopAuthorInfo:(BOOL)arg1;
- (double)authorInfoTopMargin;
- (void)setAuthorInfoTopMargin:(double)arg1;
- (double)nicknameFontSize;
- (void)setNicknameFontSize:(double)arg1;
@end
