@interface MMFinderLiveReplayView : UIView <MMWebImageViewDelegate, MMFinderLiveTaskExt, MMFinderLiveReplayMicInfoDisplayLogicDelegate, TXPIPManagerExt, MMFinderLiveReplayStopgapViewDelegate, MMLiveContainerDisplayViewProtocol, MMFinderLiveGestureAnimationPlaying>
{
    BOOL _isInMinimizeMode; // +0x8
    BOOL _autoplay; // +0x9
    unsigned int _initialPlayTime; // +0xc
    MMFinderLiveTaskId * _taskId; // +0x10
    MMFinderLiveReplayMicInfoDisplayLogic * _micInfoDisplayLogic; // +0x18
    id <MMFinderLiveReplayViewDelegate> _delegate; // +0x20
    WCPlayerView * _hlsPlayer; // +0x28
    UIView * _blurBackgroundView; // +0x30
    UIView<WCPlayerControlProtocol> * _controlView; // +0x38
    NSString * _groupName; // +0x40
    MMFinderLiveReplayStopgapView * _stopgapView; // +0x48
    unsigned long long _stopgapPollInterval; // +0x50
    MMFinderLiveFootageReplayModel * _footageReplayModel; // +0x58
    double _lastPlayTs; // +0x60
    double _actualWatchDuration; // +0x68
    MMFinderLiveReplayTaskId * _replayTaskId; // +0x70
    CGSize _footageReplayVideoSize; // +0x78
}
+ (CGRect)getMainVideoViewFrameWithVideoSize:(CGSize)arg1 containerView:(id)arg2;
+ (CGRect)createRemoteViewFrameWithDisplaySize:(CGSize)arg1 containerView:(id)arg2 scene:(unsigned long long)arg3;
+ (CGPoint)getAudienceRemoteVideoViewCenterForScene:(unsigned long long)arg1 containerView:(id)arg2 withDisplaySize:(CGSize)arg3;
- (CGRect)getMainVideoViewFrame;
- (CGRect)getMainVideoViewFrameWithoutReplayTask;
- (CGRect)getNormalizedMainVideoViewFrame;
- (double)getVideoContainerWHPercent;
- (id)initWithTaskId:(id)arg1 controlView:(id)arg2 initialPlayTime:(unsigned int)arg3 autoplay:(BOOL)arg4;
- (id)initWithTaskId:(id)arg1 footageReplayModel:(id)arg2 controlView:(id)arg3 initialPlayTime:(unsigned int)arg4 autoplay:(BOOL)arg5;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)startPlay;
- (void)stopPlay;
- (void)pause;
- (void)seekToTime:(double)arg1;
- (void)resumePlay;
- (void)mute;
- (void)unMute;
- (void)setPlaybackRate:(double)arg1;
- (double)currentPlayBackRate;
- (BOOL)isPlaying;
- (double)getActualWatchDurationInSeconds;
- (void)prepareForMaximizeMode;
- (void)prepareForMinimizeMode;
- (void)forceLayout;
- (void)setPlayerContentMode:(long long)arg1;
- (void)updatePlaySrcPathPersistingCurrentProgress:(BOOL)arg1 initialPlayTime:(double)arg2 forcePlay:(BOOL)arg3;
- (id)getHlsPlayer;
- (id)getAudioModeCoverView;
- (id)getConnectMicOtherAnchorCoverViewList;
- (id)getAudienceAudioMicUserViewList;
- (id)getCompactAllUserInfoView;
- (id)getAudienceAudioMicUserOperationViewList;
- (id)getLiveStateText;
- (void)layoutUI;
- (void)layoutBlurBackgroundView;
- (void)layoutHLSPlayerWithInitialSeek:(double)arg1 autoplay:(BOOL)arg2;
- (void)layoutStopgapView;
- (void)layoutMicInfoView;
- (id)createPlayerInfoWithInitialSeek:(double)arg1 autoplay:(BOOL)arg2;
- (void)updateReplaySrcForReplayPaymentType;
- (void)updateHlsPlayerFrame:(CGRect)arg1;
- (void)configureMicFocusMasksWithAllMicUsersInfo:(id)arg1 anchorInAudioMode:(BOOL)arg2;
- (void)layoutMaskLayerToCoverView:(id)arg1;
- (void)invokeStopgapPoll;
- (void)onFootageReplayVideoSizeChanged;
- (void)changeToCategoryPlayback;
- (id)liveTask;
- (id)replayUrl;
- (id)replayUrlPemKey;
- (id)groupName;
- (BOOL)shouldLoop;
- (void)setFootageReplayVideoSize:(CGSize)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)onFinderLiveTaskPaymentTypeChanged:(id)arg1;
- (CGRect)getNormalizedMinimizeSrcFrameForBusiness:(long long)arg1;
- (id)getExtendTransitionContainerBackView;
- (id)minimizeSrcView;
- (CGRect)minimizeSrcFrame;
- (id)onVideoPlayerPipBusinessIdRequested;
- (void)onMicInfoDisplayLogicStateUpdated:(id)arg1 connectMicStateValid:(BOOL)arg2 anchorInAudioMode:(BOOL)arg3 isScreenSharing:(BOOL)arg4 isAudioDisplayMode:(BOOL)arg5;
- (BOOL)insertHlsPlayerToPIPRenderLayer;
- (BOOL)insertStopgapViewToPipRenderLayer;
- (void)onPIPHandleLogicConfig:(id)arg1;
- (void)onReplayStopgapView:(id)arg1 transitToStateRequested:(unsigned long long)arg2;
- (BOOL)addGestureAnimationPagForUserWithId:(id)arg1 withGestureId:(id)arg2 instanceId:(id)arg3 referenceAspectRatio:(double)arg4 translationX:(double)arg5 translationY:(double)arg6 rotation:(double)arg7 scale:(double)arg8 giftSenderNickname:(id)arg9;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)micInfoDisplayLogic;
- (void)setMicInfoDisplayLogic:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGSize)footageReplayVideoSize;
- (id)hlsPlayer;
- (void)setHlsPlayer:(id)arg1;
- (id)blurBackgroundView;
- (void)setBlurBackgroundView:(id)arg1;
- (id)controlView;
- (void)setControlView:(id)arg1;
- (BOOL)isInMinimizeMode;
- (void)setIsInMinimizeMode:(BOOL)arg1;
- (unsigned int)initialPlayTime;
- (void)setInitialPlayTime:(unsigned int)arg1;
- (BOOL)autoplay;
- (void)setAutoplay:(BOOL)arg1;
- (void)setGroupName:(id)arg1;
- (id)stopgapView;
- (void)setStopgapView:(id)arg1;
- (unsigned long long)stopgapPollInterval;
- (void)setStopgapPollInterval:(unsigned long long)arg1;
- (id)footageReplayModel;
- (void)setFootageReplayModel:(id)arg1;
- (double)lastPlayTs;
- (void)setLastPlayTs:(double)arg1;
- (double)actualWatchDuration;
- (void)setActualWatchDuration:(double)arg1;
- (id)replayTaskId;
- (void)setReplayTaskId:(id)arg1;
- (void).cxx_destruct;
@end

