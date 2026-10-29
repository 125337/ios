@interface MMLiveCDNPlayerView : UIView <MMFinderLivePIPMinimizeLogicControllerDelegate, MMFinderLivePIPMinimizeDisplayViewProtocol, MMFinderLiveFeedPIPHandleLogicDelegate, WCFinderSwitchExt, MMLiveCDNPlayerItemDelegate, WCFinderFeedImageCDNViewDelegate, ILiveTaskMgrExt, MMFinderLiveTaskExt, MMFinderLiveCDNPlayerMicLogicDelegate, MMLiveMorphTransitionExt, MMWebImageViewDelegate, WCAudioModuleDelegate, MMFinderLiveAudioRoomInfoLogicDelegate>
{
    BOOL _hiddenLoading; // +0x8
    BOOL _hiddenVideo; // +0x9
    BOOL _supportPlayInLockScreen; // +0xa
    BOOL _isOuterMuted; // +0xb
    BOOL _isUsingPreloadPlayerItem; // +0xc
    BOOL _automaticallyMutesWhileExternalPlaybackMode; // +0xd
    BOOL _enableMicMasking; // +0xe
    BOOL _shouldStartInBackground; // +0xf
    BOOL _needAsyncLoadGetLiveStatus; // +0x10
    BOOL _needAsyncLoadGetExtraAutoSwipeInfo; // +0x11
    BOOL _isAudioMode; // +0x12
    BOOL _isRemoteH; // +0x13
    BOOL _isPreplayMode; // +0x14
    BOOL _isRegisterAudioModule; // +0x15
    BOOL _isMuted; // +0x16
    BOOL _isPlayerLoading; // +0x17
    BOOL _isCoverLoading; // +0x18
    BOOL _isScreenSharing; // +0x19
    BOOL _useOuterMicLogic; // +0x1a
    BOOL _ignoreNextAudioModuleInterruptionByFinderMinimize; // +0x1b
    BOOL _invokeMorphTransform; // +0x1c
    BOOL _isMorphTransforming; // +0x1d
    BOOL _isInDelaySwitchStreamProcess; // +0x1e
    BOOL _shouldRestartPlayAfterPaid; // +0x1f
    BOOL _paidLiveTrialEndedChecked; // +0x20
    BOOL _isSelfAudioModuleActive; // +0x21
    BOOL _isRemoteHRenderFitMode; // +0x22
    BOOL _backgroundDecodingEnabled; // +0x23
    BOOL _playingEnableWhenResignActive; // +0x24
    BOOL _backgroundRenderingEnabled; // +0x25
    unsigned int _liveVrType; // +0x28
    int _commentScene; // +0x2c
    unsigned int _remainTime; // +0x30
    unsigned long long _scene; // +0x38
    id <MMLiveCDNPlayerViewDelegate> _delegate; // +0x40
    id <MMLiveCDNPlayerViewMinimizeModeDelegate> _minimizeModeDelegate; // +0x48
    id <MMLiveCDNPlayerViewPIPModeDelegate> _pipModeDelegate; // +0x50
    NSString * _url; // +0x58
    unsigned long long _currentMinimizeSizeStyle; // +0x60
    WCFinderFeedImageCDNView * _coverView; // +0x68
    MMFinderLiveAudioRoomInfoView * _audioRoomInfoView; // +0x70
    MMLiveCDNPlayerItem * _cdnPlayerItem; // +0x78
    long long _currentState; // +0x80
    MMLiveFeedStreamTaskId * _feedStreamTaskId; // +0x88
    MMLiveKTVMinimizeContentView * _ktvMinimizeContentView; // +0x90
    MMLiveChatRoomMinimizeContentView * _chatRoomMinimizeContentView; // +0x98
    WCFinderDataItem * _finderDataItem; // +0xa0
    WCFinderAnimationLoadingView * _loadingView; // +0xa8
    unsigned long long _audioRoomScene; // +0xb0
    UIImageView * _backgroundBlurView; // +0xb8
    MMWebImageView * _customCoverView; // +0xc0
    UIView * _actualCoverView; // +0xc8
    NSString * _customCoverUrl; // +0xd0
    long long _renderMode; // +0xd8
    long long _realRenderMode; // +0xe0
    UIView * _videoContainerView; // +0xe8
    UIView * _videoBackContainerView; // +0xf0
    UIView * _defaultVideoBackView; // +0xf8
    MMLiveAvatarBackgroundView * _blurVideoBackView; // +0x100
    UIView * _audioRoomInfoContainerView; // +0x108
    UIView * _micUserBackContainerView; // +0x110
    MMFinderLiveCDNPlayerMicUserInfoView * _micUserInfoView; // +0x118
    MMFinderLiveCDNPlayerMicLogic * _micLogic; // +0x120
    MMFinderLiveConnectMicUsersInfo * _allConnectedMicUsersInfo; // +0x128
    MMLiveSEIConnectMicMsg * _seiMicMsgInfo; // +0x130
    UILabel * _coverEffectLabel; // +0x138
    unsigned long long _blurEffectType; // +0x140
    LiveSdkChannelParams * _channelParams; // +0x148
    NSString * _audioModuleGroupName; // +0x150
    NSString * _audioModuleIdentifier; // +0x158
    MMLiveCDNPlayerViewStartPlayStateInfo * _startPlayStateInfo; // +0x160
    MMFinderLiveFeedPIPHandler * _pipHandler; // +0x168
    CGSize _videoSize; // +0x170
}
- (void)changeToPIPMode;
- (void)restoreFromPIPMode;
- (void)prepareForPIPMode;
- (void)processForExitPIPMode;
- (id)createPIPHandler;
- (void)notifyPIPPlayStateChangedTo:(unsigned long long)arg1;
- (void)notifyPIPMinimizeModeChangedTo:(BOOL)arg1;
- (void)notifyPIPVideoSizeChangedTo:(CGSize)arg1;
- (void)notifyPIPPlayerRectChangedTo:(CGRect)arg1;
- (void)notifyPIPActivateAudioModule;
- (void)notifyPIPDeactivateAudioModule;
- (void)notifyPIPAudioRoomModeChangedTo:(BOOL)arg1;
- (void)notifyPIPLocalAudioModeChangedTo:(BOOL)arg1;
- (void)notifyPIPRenderSizeHeightWidthPercentChangedTo:(double)arg1;
- (CGRect)getPIPRenderViewFrame:(id)arg1;
- (double)getPIPRenderSizeHeightWidthPercent;
- (BOOL)enableAutoStartPIPInBackground;
- (id)pipMinimizeContentView;
- (id)liveTaskId;
- (void)notifyShowContentView;
- (void)notifyHideContentView;
- (void)onPIPHandleLogicWillConfig:(id)arg1;
- (void)onPictureInPictureAbilityStart;
- (void)onPictureInPictureAbilityStop;
- (void)onPictureInPictureWillAutoStop:(unsigned long long)arg1;
- (void)onPictureInPictureWillRestoreUserInterface;
- (void)onEnterForegroundWithPIPActive;
- (BOOL)isCurrHasPIPAudioModuleAuthority;
- (void)onLiveFeedPIPRequestPauseLive:(id)arg1;
- (void)onLiveFeedPIPRequestResumeLive:(id)arg1;
- (BOOL)onLiveFeedPIPCheckCurrHasPIPModuleAuthority;
- (BOOL)onLiveFeedPIPCheckLiveIsPlaying;
- (BOOL)onLiveFeedPIPCheckLiveIsFloating;
- (CGSize)onLiveFeedPIPGetVideoSize;
- (void)onLiveFeedPIPHandleRequestRestoreFromFloatingDirectly:(id /* block */)arg1;
- (void)onLiveFeedPIPRequestPlayerBackgroundDecoding:(BOOL)arg1;
- (void)onLiveFeedPIPRequestPlayerBackgroundRendering:(BOOL)arg1;
- (void)onLiveFeedPIPWillStartDisplay;
- (void)onLiveFeedPIPDidStartDisplay;
- (void)onLiveFeedPIPStopDisplay:(id)arg1;
- (id)onLiveFeedPIPGetContentVM;
- (id)pipHandleLogic;
- (BOOL)enableCustomRenderInBackground;
- (void)finderPIPSwitchChange;
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
- (CGRect)getFitModeVideoContainerRectWithVideoSize:(CGSize)arg1;
- (void)updateVideoRect;
- (void)checkAndInitBackgroundBlurView;
- (void)checkAndInitCoverImageView;
- (void)checkAndInitCustomCoverView;
- (void)reAttachCoverViewsToBlurBackViewIfNeed;
- (id)realCoverView;
- (void)updateCoverViewBlurStateFeed;
- (BOOL)isAudioDisplayMode;
- (BOOL)isAudioRoomMode;
- (BOOL)isInConnectedMicUI;
- (void)setRenderMode:(long long)arg1;
- (void)updateRealRenderModeAndUpdateViews:(BOOL)arg1;
- (long long)adjustRenderModeIfNeed:(long long)arg1;
- (void)checkAndInitLoadingView;
- (void)showDefaultVideoBackView;
- (void)showBlurVideoBackView;
- (id)blurBackgroundColor;
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
- (void)startPlayWithUrl:(id)arg1 andFinderDataItem:(id)arg2 useOuterMicLogic:(BOOL)arg3 audioModuleGroup:(unsigned long long)arg4;
- (void)realStartPlay;
- (void)updatePlayerItemEncryptionParams;
- (void)applyCdnPlayerItem;
- (void)checkAndCreateVideoContainerView;
- (void)reclaimVideoView;
- (BOOL)checkPlayerItemAndNotifyStartPlayEvent;
- (void)delaySwitchStream;
- (void)clearDelaySwitchStreamFlag;
- (void)stopPlay;
- (void)stopPlay:(id)arg1;
- (void)stopPlayByUserTapped:(BOOL)arg1;
- (void)stopPlayByUserTapped:(BOOL)arg1 param:(id)arg2;
- (void)checkAndRemovePlayerItem;
- (void)resume;
- (void)inner_resume;
- (void)checkAndUpdateCategoryForResume;
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
- (BOOL)transitionWithBackgroundBlur;
- (void)prepareForMorphTransition;
- (void)prepareKTVReuseForEnterLiveRoom;
- (void)showLoadingView;
- (void)hiddenLoadingView;
- (void)updatePlaySize:(CGSize)arg1;
- (void)updateBackgroundBlurViewHidden:(BOOL)arg1;
- (void)updateSeiMsg:(id)arg1;
- (BOOL)tryProcessSeiMsgToJson:(id)arg1;
- (void)processLiveStreamServerTimeSEIMsgFromJsonFormat:(id)arg1 andOriginalSeiMsg:(id)arg2;
- (void)processSEIMsgFromJsonFormat:(id)arg1;
- (BOOL)tryProcessSeiMsgToPB:(id)arg1;
- (void)updateConnectMicOtherAnchorCoverViewAppearance:(id)arg1;
- (unsigned long long)getLiveCDNPlayerItemScene;
- (void)setIdleTimeDisableIfNeed;
- (void)updateAudioRoomScene:(unsigned long long)arg1;
- (void)updateFeedStreamTaskId:(id)arg1;
- (void)handleFeedStreamJoinLiveFinished;
- (void)updateAnchorIsTalking:(BOOL)arg1;
- (void)prepareForMinimizeMode;
- (void)processForExitMinimizeMode;
- (void)changeToMinimizeMode;
- (void)restoreFromMinimizeMode;
- (void)updateKTVMinimizeContentView;
- (void)updateChatRoomMinimizeContentView;
- (void)adjustAudioRoomViewLayoutInFeedStreamScene;
- (void)enterIndependentRenderMode;
- (void)tryExitIndependentRenderMode;
- (int)currAudioModuleScene;
- (id)generateSnapImageForMinimizeAnimation;
- (void)updateRealRenderMode:(long long)arg1;
- (void)updateActualCoverView:(id)arg1;
- (void)showVideoBackViewIfNeed;
- (void)checkVideoBackViewVisible;
- (unsigned long long)getLiveVideoDisplayScene;
- (BOOL)isVideoSizeWidthOverHeight;
- (void)updateHideAudioMicUserAvatar;
- (void)enableBackgroundDecoding:(BOOL)arg1;
- (void)enablePlayingWhenResignActive:(BOOL)arg1;
- (void)enableStartInBackground:(BOOL)arg1;
- (void)enableBackgroundRendering:(BOOL)arg1;
- (BOOL)checkSelfAudioModuleActive;
- (void)setIsCoverLoading:(BOOL)arg1;
- (void)setIsPlayerLoading:(BOOL)arg1;
- (void)setSupportPlayInLockScreen:(BOOL)arg1;
- (BOOL)shouldForbidCapture;
- (BOOL)isLiveTrialTimeout;
- (BOOL)isNotPurchasedChargeableLive;
- (int)commentScene;
- (BOOL)customFit;
- (BOOL)isVideoBackViewVisible;
- (void)updateCurrentMinimizeSizeStyleAndNotify:(BOOL)arg1;
- (void)checkAndNotifyMinimizeSizeStyleChangedWithLastValue:(unsigned long long)arg1;
- (BOOL)isInMinimizeMode;
- (BOOL)isOnlyInMinimizeMode;
- (BOOL)isInPIPMode;
- (BOOL)isOnlyInPIPMode;
- (BOOL)notInAnyMode;
- (BOOL)backgroundDecodingEnabled;
- (BOOL)playingEnableWhenResignActive;
- (BOOL)shouldStartInBackground;
- (void)startCountDown;
- (void)countDown;
- (void)stopCountDown;
- (void)onStopCountDown;
- (void)checkPaidLiveTrialEnded;
- (void)didChangeScreenCapture:(id)arg1;
- (void)finderFeedImageLoadFinish;
- (void)reportCDNImageRenderCost:(unsigned long long)arg1;
- (void)removeVrLivelurEffect;
- (void)onLiveCDNPlayerItem:(id)arg1 playEvent:(int)arg2 withParam:(id)arg3;
- (void)onLiveCDNPlayerItem:(id)arg1 netStatus:(id)arg2;
- (void)onMMLiveCDNPlayerItemWillChangeDelegate:(id)arg1;
- (void)onLiveCDNPlayerItem:(id)arg1 pixelBufferRendered:(__CVBuffer *)arg2;
- (void)onLiveCDNPlayerItem:(id)arg1 playStateChangedTo:(unsigned long long)arg2;
- (void)onMMLiveStartForNotifyOuter;
- (void)onMMLiveFinishedForNotifyOuter;
- (void)updatePlayerMuted;
- (void)updateAudioCategory:(id)arg1;
- (void)onFinderLiveTaskPaymentTypeChanged:(id)arg1;
- (void)onFinderLiveCDNPlayerMicLogicMicUsersListUpdated;
- (void)updateConnectMicViewsWithMicUsersInfo:(id)arg1;
- (void)onFinderLiveCDNPlayerMicLogicAudioRoomMicUsersListTalkingStatusUpdated;
- (void)onFinderLiveCdnPlayerMicLogicFinderObjectAsyncLoadInfoReady:(id)arg1;
- (void)setEnableMicMasking:(BOOL)arg1;
- (id)onMMFinderLiveAudioRoomTryGetAnchorSdkUserId;
- (int)onMMFinderLiveAudioRoomTryGetCommentScene;
- (void)onMMFinderLiveAudioRoomSceneChanged:(unsigned long long)arg1;
- (void)updateMicTopicInfoWithFinderLiveMicConfig:(id)arg1;
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
- (BOOL)activateAudioModule;
- (BOOL)activateAudioModuleWithOptions:(unsigned long long)arg1;
- (unsigned long long)getRequiredAudioModuleOptions;
- (void)deactivateAudioModule;
- (void)deactivateAudioModuleWithOptions:(unsigned long long)arg1;
- (void)didMoveToWindow;
- (void)startPIPHandler;
- (void)stopPIPHandler;
- (void)stopPreviousPIPHandlerIfNeed;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)minimizeModeDelegate;
- (void)setMinimizeModeDelegate:(id)arg1;
- (id)pipModeDelegate;
- (void)setPipModeDelegate:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (BOOL)hiddenLoading;
- (void)setHiddenLoading:(BOOL)arg1;
- (BOOL)hiddenVideo;
- (void)setHiddenVideo:(BOOL)arg1;
- (unsigned int)liveVrType;
- (void)setLiveVrType:(unsigned int)arg1;
- (void)setCommentScene:(int)arg1;
- (BOOL)supportPlayInLockScreen;
- (BOOL)isOuterMuted;
- (void)setIsOuterMuted:(BOOL)arg1;
- (BOOL)isUsingPreloadPlayerItem;
- (void)setIsUsingPreloadPlayerItem:(BOOL)arg1;
- (unsigned long long)currentMinimizeSizeStyle;
- (void)setCurrentMinimizeSizeStyle:(unsigned long long)arg1;
- (BOOL)automaticallyMutesWhileExternalPlaybackMode;
- (void)setAutomaticallyMutesWhileExternalPlaybackMode:(BOOL)arg1;
- (BOOL)enableMicMasking;
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
- (id)cdnPlayerItem;
- (void)setCdnPlayerItem:(id)arg1;
- (long long)currentState;
- (void)setCurrentState:(long long)arg1;
- (id)feedStreamTaskId;
- (void)setFeedStreamTaskId:(id)arg1;
- (id)ktvMinimizeContentView;
- (void)setKtvMinimizeContentView:(id)arg1;
- (id)chatRoomMinimizeContentView;
- (void)setChatRoomMinimizeContentView:(id)arg1;
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (BOOL)isMuted;
- (void)setIsMuted:(BOOL)arg1;
- (BOOL)isPlayerLoading;
- (BOOL)isCoverLoading;
- (BOOL)isScreenSharing;
- (void)setIsScreenSharing:(BOOL)arg1;
- (unsigned long long)audioRoomScene;
- (void)setAudioRoomScene:(unsigned long long)arg1;
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
- (BOOL)ignoreNextAudioModuleInterruptionByFinderMinimize;
- (void)setIgnoreNextAudioModuleInterruptionByFinderMinimize:(BOOL)arg1;
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
- (id)coverEffectLabel;
- (void)setCoverEffectLabel:(id)arg1;
- (unsigned long long)blurEffectType;
- (void)setBlurEffectType:(unsigned long long)arg1;
- (id)channelParams;
- (void)setChannelParams:(id)arg1;
- (BOOL)paidLiveTrialEndedChecked;
- (void)setPaidLiveTrialEndedChecked:(BOOL)arg1;
- (id)audioModuleGroupName;
- (void)setAudioModuleGroupName:(id)arg1;
- (id)audioModuleIdentifier;
- (void)setAudioModuleIdentifier:(id)arg1;
- (BOOL)isSelfAudioModuleActive;
- (void)setIsSelfAudioModuleActive:(BOOL)arg1;
- (id)startPlayStateInfo;
- (void)setStartPlayStateInfo:(id)arg1;
- (BOOL)isRemoteHRenderFitMode;
- (void)setIsRemoteHRenderFitMode:(BOOL)arg1;
- (void)setBackgroundDecodingEnabled:(BOOL)arg1;
- (void)setPlayingEnableWhenResignActive:(BOOL)arg1;
- (BOOL)backgroundRenderingEnabled;
- (void)setBackgroundRenderingEnabled:(BOOL)arg1;
- (id)pipHandler;
- (void)setPipHandler:(id)arg1;
- (void).cxx_destruct;
@end
