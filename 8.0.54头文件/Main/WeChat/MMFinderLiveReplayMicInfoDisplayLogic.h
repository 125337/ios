@interface MMFinderLiveReplayMicInfoDisplayLogic : NSObject <MMFinderLiveCDNPlayerMicLogicDelegate, MMWebImageViewDelegate, MMFinderLiveConnectMicAllUserInfoViewLayoutInfoDelegate>
{
    BOOL _useCompactView; // +0x8
    BOOL _inAudioMode; // +0x9
    BOOL _screenSharing; // +0xa
    id <MMFinderLiveReplayMicInfoDisplayLogicDelegate> _delegate; // +0x10
    MMFinderLiveReplayConnectMicLogic * _micLogic; // +0x18
    MMFinderLiveGestureAnimationContainerView * _gestureAnimationContainerView; // +0x20
    UIView * _micUserContainerViewBelow; // +0x28
    UIView * _micUserContainerViewAbove; // +0x30
    UIView * _audioModeCoverView; // +0x38
    MMLiveAudioModeAnimatedBackgroundPlayerViewModel * _audioModeBackgroundVideoViewModel; // +0x40
    MMWebImageView * _audioModeCoverImageView; // +0x48
    MMFinderLiveReplayMicInfoAnchorCoverDisplayLogic * _micAnchorCoverDisplayLogic; // +0x50
    MMFinderLiveReplayMicInfoBackgroundDisplayLogic * _micUserBackgroundDisplayLogic; // +0x58
    MMFinderLiveConnectMicAllUserInfoView * _connectMicAllUserInfoView; // +0x60
    MMFinderLiveReplayCompactMicUserInfoView * _compactAllUserInfoView; // +0x68
    UIView * _audioModeCoverShadingView; // +0x70
    UILabel * _audioModeCoverImageSpamTextLabel; // +0x78
    NSString * _audioModeBackgroundVideoUri; // +0x80
    MMFinderLiveWcPlayerView * _audioModeBackgroundVideoView; // +0x88
    UIView * _micUserBackgroundViewBelow; // +0x90
    UIView * _micUserBackgroundViewAbove; // +0x98
    UIView * _micAnchorUserContainerView; // +0xa0
    UIView * _connectMicAllUserInfoContainerView; // +0xa8
    MMLiveTaskId * _taskId; // +0xb0
    MMLiveResourceFetcherRootFlowAction * _downloadMgr; // +0xb8
    LiveRoomImg * _currentAnchorLiveRoomImages; // +0xc0
    LiveRoomImg * _opposingAnchorLiveRoomImages; // +0xc8
}
- (id)initWithFrame:(CGRect)arg1 replayTask:(id)arg2;
- (id)giftNotificationDelegate;
- (void)setGiftNotificationDelegate:(id)arg1;
- (BOOL)isVideoLandscapeMode;
- (void)setIsVideoLandscapeMode:(BOOL)arg1;
- (BOOL)hasUnknownMicUser;
- (void)setUseCompactView:(BOOL)arg1;
- (id)replayTask;
- (BOOL)isAudioDisplayMode;
- (void)updateLiveRoomImages:(id)arg1;
- (void)updateMicInfo:(id)arg1;
- (void)updateSeiMessage:(id)arg1;
- (void)clearMicLogicState;
- (void)notifyPIPHandleLogicConfig;
- (void)updateConnectMicAllUserInfoViewUnableDisplay:(BOOL)arg1;
- (void)layoutComponents;
- (BOOL)addGestureAnimationPagForUserWithId:(id)arg1 withGestureId:(id)arg2 instanceId:(id)arg3 referenceAspectRatio:(double)arg4 translationX:(double)arg5 translationY:(double)arg6 rotation:(double)arg7 scale:(double)arg8 giftSenderNickname:(id)arg9;
- (void)onFinderLiveCDNPlayerMicLogicMicUsersListUpdated;
- (void)onLoadImageOK:(id)arg1;
- (CGRect)onMMFinderLiveConnectMicAllUserInfoViewNormalizedFrameAspectRatioConversionRequested:(CGRect)arg1;
- (void)updateConnectMicOtherAnchorCoverViewAppearance:(id)arg1;
- (void)updateSoloAudioModeCoverAppearance:(BOOL)arg1;
- (CGRect)normalizedFrame:(CGRect)arg1 convertedToDisplayAspectRatioOfView:(id)arg2;
- (void)configureMicFocusMasksWithAllMicUsersInfo:(id)arg1 anchorInAudioMode:(BOOL)arg2;
- (void)layoutMaskLayerToCoverView:(id)arg1;
- (void)reorderMicUserViewsInPipWithOrderedMicUsers:(id)arg1 anchorZOrder:(unsigned long long)arg2;
- (void)bringMicUserComponentsToFrontInPipWithMicViewInfo:(id)arg1;
- (void)bringAnchorComponentsToFrontInPip;
- (void)configureAudioModeBackgroundForCurrentAnchor;
- (void)startAudioModeBackgroundPlayerWithPath:(id)arg1;
- (void)updateLiveRoomAudioModeBackgroundVideoUri:(id)arg1;
- (void)updateGestureAnimationContainerViewVisibility;
- (void)configLiveBusinessIdForWidgets;
- (BOOL)insertSoloAudioModeCoverImageViewToPIPRenderLayer;
- (BOOL)insertCurrentAnchorAudioModeBackgroundVideoViewToPIPRenderLayer;
- (BOOL)insertCompactAllUserInfoViewToPIPRenderLayer;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)micLogic;
- (void)setMicLogic:(id)arg1;
- (BOOL)useCompactView;
- (BOOL)inAudioMode;
- (void)setInAudioMode:(BOOL)arg1;
- (id)gestureAnimationContainerView;
- (void)setGestureAnimationContainerView:(id)arg1;
- (id)micUserContainerViewBelow;
- (void)setMicUserContainerViewBelow:(id)arg1;
- (id)micUserContainerViewAbove;
- (void)setMicUserContainerViewAbove:(id)arg1;
- (id)audioModeCoverView;
- (void)setAudioModeCoverView:(id)arg1;
- (id)audioModeBackgroundVideoViewModel;
- (void)setAudioModeBackgroundVideoViewModel:(id)arg1;
- (id)audioModeCoverImageView;
- (void)setAudioModeCoverImageView:(id)arg1;
- (id)micAnchorCoverDisplayLogic;
- (void)setMicAnchorCoverDisplayLogic:(id)arg1;
- (id)micUserBackgroundDisplayLogic;
- (void)setMicUserBackgroundDisplayLogic:(id)arg1;
- (id)connectMicAllUserInfoView;
- (void)setConnectMicAllUserInfoView:(id)arg1;
- (id)compactAllUserInfoView;
- (void)setCompactAllUserInfoView:(id)arg1;
- (id)audioModeCoverShadingView;
- (void)setAudioModeCoverShadingView:(id)arg1;
- (id)audioModeCoverImageSpamTextLabel;
- (void)setAudioModeCoverImageSpamTextLabel:(id)arg1;
- (id)audioModeBackgroundVideoUri;
- (void)setAudioModeBackgroundVideoUri:(id)arg1;
- (id)audioModeBackgroundVideoView;
- (void)setAudioModeBackgroundVideoView:(id)arg1;
- (id)micUserBackgroundViewBelow;
- (void)setMicUserBackgroundViewBelow:(id)arg1;
- (id)micUserBackgroundViewAbove;
- (void)setMicUserBackgroundViewAbove:(id)arg1;
- (id)micAnchorUserContainerView;
- (void)setMicAnchorUserContainerView:(id)arg1;
- (id)connectMicAllUserInfoContainerView;
- (void)setConnectMicAllUserInfoContainerView:(id)arg1;
- (BOOL)screenSharing;
- (void)setScreenSharing:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)downloadMgr;
- (void)setDownloadMgr:(id)arg1;
- (id)currentAnchorLiveRoomImages;
- (void)setCurrentAnchorLiveRoomImages:(id)arg1;
- (id)opposingAnchorLiveRoomImages;
- (void)setOpposingAnchorLiveRoomImages:(id)arg1;
- (void).cxx_destruct;
@end

