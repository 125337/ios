@interface MMFinderLiveCDNPlayerMicUserInfoView : UIView
{
    BOOL _anchorIsAudioMode; // +0x8
    BOOL _hideAudioMicUserAvatar; // +0x9
    BOOL _enableMasking; // +0xa
    UIImage * _anchorCoverImage; // +0x10
    MMFinderLiveConnectMicUsersInfo * _micUsersInfo; // +0x18
    NSArray * _userInfoList; // +0x20
    NSMutableDictionary * _userViewDic; // +0x28
    UIImageView * _coverViewInMicMode; // +0x30
    UIView * _videoContainerView; // +0x38
    UIView * _micUserBackContainerView; // +0x40
    NSMutableArray * _unoccupiedSeatViewList; // +0x48
    NSMutableArray * _cachedUnoccupiedSeatViewList; // +0x50
    CGSize _lastViewSize; // +0x58
}
- (void)layoutSubviews;
- (void)clearUserViewDicAndViews;
- (void)updateConnectMicUserViews;
- (void)layoutCoverViewInMicMode;
- (CGRect)getUserViewFrameWithUserInfo:(id)arg1;
- (void)layoutUI;
- (void)checkAndCreateCoverViewInMicMode;
- (void)setEnableMasking:(BOOL)arg1;
- (void)configureMicFocusCdnViewMasks;
- (void)layoutMaskLayerToCoverView:(id)arg1;
- (void)showWithConnectMicUsersInfo:(id)arg1;
- (void)updateUnoccupiedSeatViews;
- (void)clearCurrentUnoccupiedSeatViewList;
- (void)clearAndHide;
- (void)updateConnectMicOtherAnchorCoverViewAppearance:(id)arg1;
- (void)setAnchorCoverImage:(id)arg1;
- (void)setAnchorIsAudioMode:(BOOL)arg1;
- (void)setHideAudioMicUserAvatar:(BOOL)arg1;
- (void)updateVideoContainerView:(id)arg1 andBackContainerView:(id)arg2;
- (void)updateMicFocusModeAllAudioMicUserAvatarAlpha:(double)arg1;
- (id)anchorCoverImage;
- (BOOL)anchorIsAudioMode;
- (BOOL)hideAudioMicUserAvatar;
- (BOOL)enableMasking;
- (id)micUsersInfo;
- (void)setMicUsersInfo:(id)arg1;
- (id)userInfoList;
- (void)setUserInfoList:(id)arg1;
- (id)userViewDic;
- (void)setUserViewDic:(id)arg1;
- (id)coverViewInMicMode;
- (void)setCoverViewInMicMode:(id)arg1;
- (id)videoContainerView;
- (void)setVideoContainerView:(id)arg1;
- (id)micUserBackContainerView;
- (void)setMicUserBackContainerView:(id)arg1;
- (CGSize)lastViewSize;
- (void)setLastViewSize:(CGSize)arg1;
- (id)unoccupiedSeatViewList;
- (void)setUnoccupiedSeatViewList:(id)arg1;
- (id)cachedUnoccupiedSeatViewList;
- (void)setCachedUnoccupiedSeatViewList:(id)arg1;
- (void).cxx_destruct;
@end

