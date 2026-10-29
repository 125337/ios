@interface MMLiveCDNPlayerView : UIView <MMLiveCDNPlayerItemDelegate, WCFinderFeedImageCDNViewDelegate, ILiveTaskMgrExt, MMFinderLiveTaskExt, MMFinderLiveCDNPlayerMicLogicDelegate, MMLiveMorphTransitionExt, MMWebImageViewDelegate, MMFinderLiveActivityTaskExt, WCAudioModuleDelegate, MMFinderLiveAudioRoomInfoLogicDelegate>
{
    BOOL _hiddenLoading; // +0x8
    BOOL _hiddenVideo; // +0x9
    BOOL _isOuterMuted; // +0xa
    BOOL _isUsingPreloadPlayerItem; // +0xb
    BOOL _automaticallyMutesWhileExternalPlaybackMode; // +0xc
    BOOL _enableMicMasking; // +0xd
    BOOL _shouldStartInBackground; // +0xe
    BOOL _needAsyncLoadGetLiveStatus; // +0xf
    BOOL _needAsyncLoadGetExtraAutoSwipeInfo; // +0x10
    BOOL _isAudioMode; // +0x11
    BOOL _isRemoteH; // +0x12
    BOOL _isPreplayMode; // +0x13
    BOOL _isRegisterAudioModule; // +0x14
    BOOL _isMuted; // +0x15
    BOOL _isPlayerLoading; // +0x16
    BOOL _isCoverLoading; // +0x17
    BOOL _isScreenSharing; // +0x18
    BOOL _useOuterMicLogic; // +0x19
    BOOL _invokeMorphTransform; // +0x1a
    BOOL _isMorphTransforming; // +0x1b
    BOOL _isInDelaySwitchStreamProcess; // +0x1c
    BOOL _shouldRestartPlayAfterPaid; // +0x1d
    BOOL _isWinterOlympicLive; // +0x1e
    BOOL _paidLiveTrialEndedChecked; // +0x1f
    BOOL _isRemoteHRenderFitMode; // +0x20
    unsigned int _liveVrType; // +0x24
    int _commentScene; // +0x28
    unsigned int _remainTime; // +0x2c
    unsigned long long _scene; // +0x30
    NSString * _url; // +0x38
    WCFinderFeedImageCDNView * _coverView; // +0x40
    MMFinderLiveAudioRoomInfoView * _audioRoomInfoView; // +0x48
    id <MMLiveCDNPlayerViewDelegate> _delegate; // +0x50
    WCFinderDataItem * _finderDataItem; // +0x58
    WCFinderAnimationLoadingView * _loadingView; // +0x60
    MMLiveCDNPlayerItem * _cdnPlayerItem; // +0x68
    unsigned long long _audioRoomScene; // +0x70
    MMLiveFeedStreamTaskId * _feedStreamTaskId; // +0x78
    UIImageView * _backgroundBlurView; // +0x80
    MMWebImageView * _customCoverView; // +0x88
    UIView * _actualCoverView; // +0x90
    NSString * _customCoverUrl; // +0x98
    long long _renderMode; // +0xa0
    long long _realRenderMode; // +0xa8
    UIView * _videoContainerView; // +0xb0
    UIView * _videoBackContainerView; // +0xb8
    UIView * _defaultVideoBackView; // +0xc0
    MMLiveAvatarBackgroundView * _blurVideoBackView; // +0xc8
    UIView * _audioRoomInfoContainerView; // +0xd0
    UIView * _micUserBackContainerView; // +0xd8
    MMFinderLiveCDNPlayerMicUserInfoView * _micUserInfoView; // +0xe0
    MMFinderLiveCDNPlayerMicLogic * _micLogic; // +0xe8
    MMFinderLiveConnectMicUsersInfo * _allConnectedMicUsersInfo; // +0xf0
    MMLiveSEIConnectMicMsg * _seiMicMsgInfo; // +0xf8
    UILabel * _coverEffectLabel; // +0x100
    unsigned long long _blurEffectType; // +0x108
    LiveSdkChannelParams * _channelParams; // +0x110
    MMLiveCDNPlayerViewStartPlayStateInfo * _startPlayStateInfo; // +0x118
    CGSize _videoSize; // +0x120
}
- (id)initWithFrame:(CGRect)arg1 scene:(unsigned long long)arg2 andDelegate:(id)arg3;
- (void)dealloc;
- (void)initNotifications;
- (void)initRemoteHRenderFitMode;
- (void)prepareForReuse;
- (unsigned long long)getLiveCDNPlayerType;
- (void)hideAllMicViews;
- (void)clearVideoContainerViewMask;
- (void)layoutSubviews;
- (void)layoutUI;
- (CGRect)getVideoContainerRect;
- (void)updateVideoRect;
- (void)checkAndInitBackgroundBlurView;
- (void)checkAndInitCoverImageView;
- (void)checkAndInitCustomCoverView;
- (void)reAttachCoverViewsToBlurBackViewIfNeed;
- (id)realCoverView;
- (void)updateCoverViewBlurStateFeed;
- (BOOL)isAudioDisplayMode;
- (BOOL)isAudioRoomMode;
- (void)setRenderMode:(long long)arg1;
- (void)updateRealRenderModeAndUpdateViews:(BOOL)arg1;
- (long long)adjustRenderModeIfNeed:(long long)arg1;
- (void)checkAndInitLoadingView;
- (void)showDefaultVideoBackView;
- (void)showBlurVideoBackView;
- (void)checkAndInitVideoBackContainerView;
- (void)updateCoverSpamEffect:(id)arg1;
- (void)removeCoverSpamEffect;
- (void)layoutCoverEffectView;
- (void)tryUpdateBlurEffectWithType:(unsigned long long)arg1;
- (void)tryRemoveCoverBlurEffect;
- (void)configAllMicViews;
- (void)clearAllMicViews;
- (void)layoutAllMicViews;
- (void)realLayoutAllMicViews;
- (void)configAudioRoomInfoViews;
- (void)layoutAudioRoomInfoViews;
- (void)clearAudioRoomInfoViews;
- (void)startPlayWithUrl:(id)arg1 andFinderDataItem:(id)arg2;
- (void)startPlayWithUrl:(id)arg1 channelParams:(id)arg2;
- (void)startPlayWithUrl:(id)arg1 andFinderDataItem:(id)arg2 useOuterMicLogic:(BOOL)arg3;
- (void)realStartPlay;
- (void)updatePlayerItemEncryptionParams;
- (void)applyCdnPlayerItem;
- (void)checkAndCreateVideoContainerView;
- (void)reclaimVideoView;
- (BOOL)checkPlayerItemAndNotifyStartPlayEvent;
- (void)delaySwitchStream;
- (void)clearDelaySwitchStreamFlag;
- (void)stopPlay;
- (void)stopPlayByUserTapped:(BOOL)arg1;
- (void)checkAndRemovePlayerItem;
- (void)resume;
- (void)pause;
- (void)resetRenderStats;
- (BOOL)isPaused;
- (void)setMute:(BOOL)arg1;
- (void)setIsPreplayMode:(BOOL)arg1;
- (BOOL)shouldMuteForExternalPlaybackMode;
- (void)setInterruptedWhenAppResignActive:(BOOL)arg1;
- (BOOL)interruptedWhenAppResignActive;
- (void)removeCoverImage;
- (BOOL)isPlaying;
- (void)tryShowAudioModeImageThumb;
- (void)tryHideAudioModeImageThumb;
- (void)showCover;
- (void)showLive;
- (void)checkAndShowLiveWhenReceiveFirstIFrame;
- (void)delayShowLive;
- (void)clearStartPlayStateInfo;
- (void)checkStartPlayStateInfoAndShowLive;
- (void)updateImageWithMediaWrap:(id)arg1 downloadFlag:(unsigned long long)arg2 isPriority:(BOOL)arg3;
- (void)updateCustomImageUrl:(id)arg1;
- (BOOL)isAlreadyConfigured;
- (void)updateLoadingViewToCenter;
- (void)prepareForMorphTransition;
- (void)showLoadingView;
- (void)hiddenLoadingView;
- (void)updatePlaySize:(CGSize)arg1;
- (void)updateBackgroundBlurViewHidden:(BOOL)arg1;
- (void)updateSeiMsg:(id)arg1;
- (BOOL)tryProcessSeiMsgToJson:(id)arg1;
- (void)processSEIMsgFromJsonFormat:(id)arg1;
- (BOOL)tryProcessSeiMsgToPB:(id)arg1;
- (void)updateConnectMicOtherAnchorCoverViewAppearance:(id)arg1;
- (unsigned long long)getLiveCDNPlayerItemScene;
- (void)setIdleTimeDisableIfNeed;
- (void)updateAudioRoomScene:(unsigned long long)arg1;
- (void)updateFeedStreamTaskId:(id)arg1;
- (void)handleFeedStreamJoinLiveFinished;
- (void)updateAnchorIsTalking:(BOOL)arg1;
- (void)updateRealRenderMode:(long long)arg1;
- (void)updateActualCoverView:(id)arg1;
- (void)showVideoBackViewIfNeed;
- (void)checkVideoBackViewVisible;
- (unsigned long long)getLiveVideoDisplayScene;
- (BOOL)isVideoSizeWidthOverHeight;
- (void)setIsCoverLoading:(BOOL)arg1;
- (void)setIsPlayerLoading:(BOOL)arg1;
- (BOOL)shouldForbidCapture;
- (BOOL)isLiveTrialTimeout;
- (BOOL)isNotPurchasedChargeableLive;
- (int)commentScene;
- (BOOL)customFit;
- (BOOL)isVideoBackViewVisible;
- (void)startCountDown;
- (void)countDown;
- (void)stopCountDown;
- (void)onStopCountDown;
- (void)checkPaidLiveTrialEnded;
- (void)didChangeScreenCapture:(id)arg1;
- (void)finderFeedImageLoadFinish;
- (void)removeVrLivelurEffect;
- (void)onLiveCDNPlayerItem:(id)arg1 playEvent:(int)arg2 withParam:(id)arg3;
- (void)onLiveCDNPlayerItem:(id)arg1 netStatus:(id)arg2;
- (void)onMMLiveCDNPlayerItemWillChangeDelegate:(id)arg1;
- (void)onMMLiveStartForNotifyOuter;
- (void)onMMLiveFinishedForNotifyOuter;
- (void)updatePlayerMuted;
- (void)updateAudioCategory:(id)arg1;
- (void)onFinderLiveTaskPaymentTypeChanged:(id)arg1;
- (BOOL)isWinterOlympicLiveWithoutVideo;
- (void)onFinderLiveActivityWinterOlympicStreamStatusChanged:(unsigned int)arg1 withTid:(id)arg2;
- (void)onFinderLiveCDNPlayerMicLogicMicUsersListUpdated;
- (void)updateConnectMicViewsWithMicUsersInfo:(id)arg1;
- (void)onFinderLiveCDNPlayerMicLogicAudioRoomMicUsersListTalkingStatusUpdated;
- (void)setEnableMicMasking:(BOOL)arg1;
- (id)onMMFinderLiveAudioRoomTryGetAnchorSdkUserId;
- (int)onMMFinderLiveAudioRoomTryGetCommentScene;
- (void)morphTransitionStarting;
- (void)morphTransitionStartedWithDuration:(double)arg1;
- (void)morphTransitionEnding;
- (void)morphTransitionCanceled;
- (void)onLoadImageOK:(id)arg1;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)changeToCDNPlayerCategoryPlayback;
- (BOOL)isMultiTalkLive;
- (BOOL)isInAudioModuleSceneCDNPlayer;
- (BOOL)isSupportAudioMonoService;
- (void)addAudioMonoServiceForIPad;
- (void)removeAudioMonoServiceForIPad;
- (void)onAudioMonoServiceBussinessAdded:(id)arg1 inMainScene:(BOOL)arg2;
- (void)onAudioMonoServiceBussinessRemoved:(id)arg1 inMainScene:(BOOL)arg2;
- (BOOL)needHandleAudioMonoService:(id)arg1 inMainScene:(BOOL)arg2;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (BOOL)hiddenLoading;
- (void)setHiddenLoading:(BOOL)arg1;
- (BOOL)hiddenVideo;
- (void)setHiddenVideo:(BOOL)arg1;
- (unsigned int)liveVrType;
- (void)setLiveVrType:(unsigned int)arg1;
- (void)setCommentScene:(int)arg1;
- (BOOL)isOuterMuted;
- (void)setIsOuterMuted:(BOOL)arg1;
- (BOOL)isUsingPreloadPlayerItem;
- (void)setIsUsingPreloadPlayerItem:(BOOL)arg1;
- (BOOL)automaticallyMutesWhileExternalPlaybackMode;
- (void)setAutomaticallyMutesWhileExternalPlaybackMode:(BOOL)arg1;
- (BOOL)enableMicMasking;
- (BOOL)shouldStartInBackground;
- (void)setShouldStartInBackground:(BOOL)arg1;
- (BOOL)needAsyncLoadGetLiveStatus;
- (void)setNeedAsyncLoadGetLiveStatus:(BOOL)arg1;
- (BOOL)needAsyncLoadGetExtraAutoSwipeInfo;
- (void)setNeedAsyncLoadGetExtraAutoSwipeInfo:(BOOL)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)audioRoomInfoView;
- (void)setAudioRoomInfoView:(id)arg1;
- (BOOL)isAudioMode;
- (void)setIsAudioMode:(BOOL)arg1;
- (BOOL)isRemoteH;
- (void)setIsRemoteH:(BOOL)arg1;
- (BOOL)isPreplayMode;
- (BOOL)isRegisterAudioModule;
- (void)setIsRegisterAudioModule:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)cdnPlayerItem;
- (void)setCdnPlayerItem:(id)arg1;
- (BOOL)isMuted;
- (void)setIsMuted:(BOOL)arg1;
- (BOOL)isPlayerLoading;
- (BOOL)isCoverLoading;
- (BOOL)isScreenSharing;
- (void)setIsScreenSharing:(BOOL)arg1;
- (unsigned long long)audioRoomScene;
- (void)setAudioRoomScene:(unsigned long long)arg1;
- (id)feedStreamTaskId;
- (void)setFeedStreamTaskId:(id)arg1;
- (id)backgroundBlurView;
- (void)setBackgroundBlurView:(id)arg1;
- (id)customCoverView;
- (void)setCustomCoverView:(id)arg1;
- (id)actualCoverView;
- (void)setActualCoverView:(id)arg1;
- (id)customCoverUrl;
- (void)setCustomCoverUrl:(id)arg1;
- (long long)renderMode;
- (long long)realRenderMode;
- (void)setRealRenderMode:(long long)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (id)videoContainerView;
- (void)setVideoContainerView:(id)arg1;
- (id)videoBackContainerView;
- (void)setVideoBackContainerView:(id)arg1;
- (id)defaultVideoBackView;
- (void)setDefaultVideoBackView:(id)arg1;
- (id)blurVideoBackView;
- (void)setBlurVideoBackView:(id)arg1;
- (id)audioRoomInfoContainerView;
- (void)setAudioRoomInfoContainerView:(id)arg1;
- (id)micUserBackContainerView;
- (void)setMicUserBackContainerView:(id)arg1;
- (id)micUserInfoView;
- (void)setMicUserInfoView:(id)arg1;
- (id)micLogic;
- (void)setMicLogic:(id)arg1;
- (id)allConnectedMicUsersInfo;
- (void)setAllConnectedMicUsersInfo:(id)arg1;
- (id)seiMicMsgInfo;
- (void)setSeiMicMsgInfo:(id)arg1;
- (BOOL)useOuterMicLogic;
- (void)setUseOuterMicLogic:(BOOL)arg1;
- (BOOL)invokeMorphTransform;
- (void)setInvokeMorphTransform:(BOOL)arg1;
- (BOOL)isMorphTransforming;
- (void)setIsMorphTransforming:(BOOL)arg1;
- (BOOL)isInDelaySwitchStreamProcess;
- (void)setIsInDelaySwitchStreamProcess:(BOOL)arg1;
- (unsigned int)remainTime;
- (void)setRemainTime:(unsigned int)arg1;
- (BOOL)shouldRestartPlayAfterPaid;
- (void)setShouldRestartPlayAfterPaid:(BOOL)arg1;
- (BOOL)isWinterOlympicLive;
- (void)setIsWinterOlympicLive:(BOOL)arg1;
- (id)coverEffectLabel;
- (void)setCoverEffectLabel:(id)arg1;
- (unsigned long long)blurEffectType;
- (void)setBlurEffectType:(unsigned long long)arg1;
- (id)channelParams;
- (void)setChannelParams:(id)arg1;
- (BOOL)paidLiveTrialEndedChecked;
- (void)setPaidLiveTrialEndedChecked:(BOOL)arg1;
- (id)startPlayStateInfo;
- (void)setStartPlayStateInfo:(id)arg1;
- (BOOL)isRemoteHRenderFitMode;
- (void)setIsRemoteHRenderFitMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

