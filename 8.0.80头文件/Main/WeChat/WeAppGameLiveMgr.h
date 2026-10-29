@interface WeAppGameLiveMgr : MMUserService <MMLiveOpenApiMgrExt, MMLiveTaskMgrExt, MMLiveCompleteViewControllerDelegate, WCFinderFeedContentVMExt, WAAppTaskMgrExt, WCAudioSessionExt, WAGamePkVideoCaptureDelegate, MMServiceProtocol>
{
    unsigned long long _liveId; // +0x8
    NSString * _finderUsername; // +0x10
    unsigned long long _finderId; // +0x18
    NSString * _onLiveAppId; // +0x20
    unsigned long long _onLiveVersionType; // +0x28
    BOOL _disableLiveInfoEvent; // +0x30
    BOOL _disableLiveMicInfoEvent; // +0x31
    BOOL _isMicMuted; // +0x32
    BOOL _gameDismissedWhileLiving; // +0x33
    NSString * _resumeAppId; // +0x38
    unsigned long long _resumeVersionType; // +0x40
    BOOL _shouldDoResume; // +0x48
    BOOL _musicCaptureDisabled; // +0x49
    BOOL _exitRoomAbnormal; // +0x4a
    BOOL _pkCapturePolling; // +0x4b
    BOOL _pkFirstFrameArrived; // +0x4c
    BOOL _pkFirstFramePushed; // +0x4d
    double _pkCaptureSessionStartUptime; // +0x50
    long long _pkCaptureGen; // +0x58
    unsigned int _pkSendFailCount; // +0x60
    BOOL _pkSendOkLogged; // +0x64
    BOOL _pkGameViewVisible; // +0x65
    BOOL _pkAppInForeground; // +0x66
    BOOL _pkCapturePaused; // +0x67
    BOOL _pkObservingAppLifecycle; // +0x68
    id /* block */ _startResultCallback; // +0x70
    id /* block */ _liveCompleteCloseBlock; // +0x78
    id /* block */ _shareFriendCompletionBlock; // +0x80
    id /* block */ _getLiveRoomMemberInfoCompletionBlock; // +0x88
    id <WAGameLiveServiceExt> _serviceExt; // +0x90
    MemoryMappedKV * _gameTeamInfoMMKV; // +0x98
    NSMutableArray * _pendingMsg; // +0xa0
    WAGamePkVideoCapture * _pkVideoCapture; // +0xa8
    unsigned long long _pkLiveId; // +0xb0
    NSString * _pkAppId; // +0xb8
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)setDelegate:(id)arg1;
- (void)startGameLiveFromMenu:(id)arg1 versionType:(unsigned long long)arg2 callback:(id /* block */)arg3 nav:(id)arg4 startInfo:(id)arg5;
- (void)notifyAppRebootWithNav:(id)arg1;
- (void)sendGameLiveMenuClickEvent:(id)arg1 versionType:(unsigned long long)arg2;
- (void)launchWAGameForFinderLive:(id)arg1 versionType:(unsigned long long)arg2 viewController:(id)arg3 fromWeApp:(BOOL)arg4 firstStart:(BOOL)arg5;
- (void)hideWAGameForFinderLive:(id)arg1 versionType:(unsigned long long)arg2;
- (void)onLaunchGameFailed;
- (void)setMicMute:(BOOL)arg1;
- (BOOL)isMicMuted;
- (BOOL)isMicCaptureDisabledBySwitch;
- (BOOL)isDisableMicMusicCapture;
- (void)checkDisableMicMusicCapture;
- (void)notifyGameLiveWillStart;
- (void)notifyGameLiveDidStart;
- (void)exitGameLive:(unsigned long long)arg1 complete:(id /* block */)arg2 nav:(id)arg3;
- (void)joinTeam:(id)arg1 complete:(id /* block */)arg2;
- (void)setLiveInfoEvent:(BOOL)arg1;
- (void)setLiveMicInfoEvent:(BOOL)arg1 duration:(unsigned long long)arg2;
- (void)cancelWhileCountDown;
- (void)resetState;
- (void)saveCurrentState;
- (void)enterCurrentLiveRoom:(id)arg1;
- (BOOL)isGameLiving:(id)arg1 versionType:(unsigned long long)arg2;
- (void)shareToFriend:(id)arg1 completion:(id /* block */)arg2;
- (void)shareToMoment:(id)arg1;
- (void)openFansClub:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isLiving;
- (BOOL)isMiniGamePking;
- (BOOL)isMiniGamePkingForAppId:(id)arg1;
- (void)notifyOpenMiniGame:(id)arg1 versionType:(unsigned long long)arg2 scene:(unsigned int)arg3;
- (BOOL)minimize;
- (void)notifyGameViewVisible:(BOOL)arg1;
- (void)updateCoverImage:(id)arg1;
- (void)enableLocalVideo:(BOOL)arg1;
- (void)enableLocalAudio:(BOOL)arg1;
- (BOOL)enableCustomVideoCapture:(BOOL)arg1;
- (BOOL)sendCustomVideoData:(__CVBuffer *)arg1 pixelFormat:(int)arg2 timestampMs:(unsigned long long)arg3 rotation:(int)arg4;
- (BOOL)sendCustomVideoData:(void *)arg1 size:(int)arg2 pixelFormat:(int)arg3 timestampMs:(unsigned long long)arg4 width:(double)arg5 height:(double)arg6 rotation:(int)arg7;
- (BOOL)sendCustomVideoData:(id)arg1 pixelFormat:(int)arg2 timestampMs:(unsigned long long)arg3 width:(double)arg4 height:(double)arg5 rotation:(int)arg6;
- (BOOL)enableCustomAudioCapture:(BOOL)arg1;
- (BOOL)sendCustomAudioData:(void *)arg1 size:(int)arg2 sampleRate:(int)arg3 channels:(int)arg4 timestampMs:(unsigned long long)arg5;
- (BOOL)sendCustomAudioData:(id)arg1 sampleRate:(int)arg2 channels:(int)arg3 timestampMs:(unsigned long long)arg4;
- (BOOL)enableMixExternalAudio:(BOOL)arg1 playout:(BOOL)arg2;
- (BOOL)mixExternalAudioData:(void *)arg1 size:(int)arg2 sampleRate:(int)arg3 channels:(int)arg4 timestampMs:(unsigned long long)arg5;
- (BOOL)mixExternalAudioData:(id)arg1 sampleRate:(int)arg2 channels:(int)arg3 timestampMs:(unsigned long long)arg4;
- (void)setExperimentConfig:(id)arg1 withParams:(id)arg2;
- (void)setEncoderParamWithVideoSize:(double)arg1 height:(double)arg2;
- (void)setupLiveInfoFromFinder;
- (void)getCurrentLiveRoomMemberInfo:(id /* block */)arg1;
- (id)getCurrentLiveRoomInfo;
- (void)cgiUpdateTopic:(id)arg1 completion:(id /* block */)arg2;
- (void)sendLiveStateChangeEvent:(unsigned long long)arg1 reason:(unsigned long long)arg2 appId:(id)arg3;
- (long long)convertToVideoRotation:(int)arg1;
- (long long)convertToLivePixelFormat:(int)arg1;
- (long long)convertToLiveSamplerate:(int)arg1;
- (id)pendingMsg;
- (void)showMusicPanel;
- (id)getCurrentMusicInfo;
- (void)onCustomVideoData:(__CVBuffer *)arg1 pixelFormat:(long long)arg2 rotation:(long long)arg3 timestampMs:(unsigned long long)arg4;
- (void)onCustomAudioData:(id)arg1 sampleRate:(long long)arg2 channels:(int)arg3 timestampMs:(unsigned long long)arg4;
- (void)onMixExternalAudioData:(id)arg1 sampleRate:(long long)arg2 channels:(int)arg3 timestampMs:(unsigned long long)arg4;
- (void)onGetLiveOnlineMemberList:(unsigned long long)arg1 liveRoomMemberList:(id)arg2;
- (void)appendOfficialNotifyMsg:(id)arg1;
- (void)onReceiveLiveRoomMsg:(unsigned long long)arg1 liveRoomMsgList:(id)arg2 currOnlineCount:(unsigned int)arg3 totalViewCount:(unsigned int)arg4 currLikeCount:(unsigned long long)arg5 totalRewardCount:(unsigned long long)arg6;
- (void)onReceiveLiveMusicMsg:(BOOL)arg1 musicName:(id)arg2;
- (void)onReceiveLiveRoomAppMsg:(unsigned long long)arg1 liveRoomAppMsg:(id)arg2;
- (void)onMMLiveVerifyFinishedWithLiveTask:(id)arg1 startExtraInfo:(id)arg2 verifySuccess:(BOOL)arg3;
- (void)onMMLiveWillStart;
- (void)onMMLiveStartFinishedWithLiveTask:(id)arg1 startExtraInfo:(id)arg2 startSuccess:(BOOL)arg3;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)onMMLiveCancel;
- (void)onLiveTask:(id)arg1 userVoiceVolume:(id)arg2 totalVolume:(long long)arg3 isSelfAnchorUserTalking:(BOOL)arg4;
- (void)onLiveTask:(id)arg1 networkLocalQuality:(id)arg2 remoteQuality:(id)arg3;
- (void)onLiveTask:(id)arg1 exitLiveRoom:(long long)arg2 error:(id)arg3;
- (void)onMMLiveCompleteViewControllerClose;
- (void)onDoneForwardMessageWithContentVM:(id)arg1 andUserArray:(id)arg2;
- (void)onForwardMessageCancelWithContentVM:(id)arg1 andUserArray:(id)arg2;
- (void)onAppTaskDidCancelColdLaunchWithAppId:(id)arg1;
- (void)onAppTaskDidColdLaunchFailedWithAppId:(id)arg1;
- (void)onAppTaskTerminate:(id)arg1;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (id)gameTeamKey:(id)arg1 versionType:(long long)arg2;
- (void)setGameTeamInfo:(id)arg1 forAppId:(id)arg2 versionType:(long long)arg3;
- (id)getGameTeamInfo:(id)arg1 versionType:(long long)arg2;
- (BOOL)startMiniGameMediaCapture:(unsigned long long)arg1 appId:(id)arg2 path:(id)arg3 scene:(unsigned long long)arg4 sceneNote:(id)arg5;
- (void)stopMiniGameMediaCapture:(unsigned long long)arg1 appId:(id)arg2;
- (void)openMiniGameForPk:(id)arg1 path:(id)arg2 scene:(unsigned long long)arg3 sceneNote:(id)arg4;
- (void)refreshPkCaptureVisibilityWithReason:(id)arg1;
- (void)internalPausePkCapture;
- (void)internalResumePkCapture;
- (void)openMiniGameForPk:(id)arg1 path:(id)arg2 scene:(unsigned long long)arg3 sceneNote:(id)arg4 fromMinimized:(BOOL)arg5;
- (void)startPkCaptureWithAppId:(id)arg1;
- (void)pollPkCaptureWithAppId:(id)arg1 gen:(long long)arg2;
- (void)notifyGameFirstFrameForPk:(id)arg1;
- (void)addPkAppLifecycleObserverIfNeeded;
- (void)removePkAppLifecycleObserver;
- (void)onPkAppDidEnterBackground:(id)arg1;
- (void)onPkAppWillEnterForeground:(id)arg1;
- (void)onCaptureStatusChange:(unsigned long long)arg1;
- (void)stopMiniGamePkWithLiveId:(unsigned long long)arg1 callback:(id /* block */)arg2;
- (void)onPkVideoFrame:(__CVBuffer *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 pixelFormat:(unsigned int)arg4;
- (id /* block */)startResultCallback;
- (void)setStartResultCallback:(id /* block */)arg1;
- (id /* block */)liveCompleteCloseBlock;
- (void)setLiveCompleteCloseBlock:(id /* block */)arg1;
- (id /* block */)shareFriendCompletionBlock;
- (void)setShareFriendCompletionBlock:(id /* block */)arg1;
- (id /* block */)getLiveRoomMemberInfoCompletionBlock;
- (void)setGetLiveRoomMemberInfoCompletionBlock:(id /* block */)arg1;
- (id)serviceExt;
- (void)setServiceExt:(id)arg1;
- (id)gameTeamInfoMMKV;
- (void)setGameTeamInfoMMKV:(id)arg1;
- (void)setPendingMsg:(id)arg1;
- (id)pkVideoCapture;
- (void)setPkVideoCapture:(id)arg1;
- (unsigned long long)pkLiveId;
- (void)setPkLiveId:(unsigned long long)arg1;
- (id)pkAppId;
- (void)setPkAppId:(id)arg1;
- (BOOL)pkCapturePaused;
- (void)setPkCapturePaused:(BOOL)arg1;
- (BOOL)pkObservingAppLifecycle;
- (void)setPkObservingAppLifecycle:(BOOL)arg1;
- (BOOL)pkGameViewVisible;
- (void)setPkGameViewVisible:(BOOL)arg1;
- (BOOL)pkAppInForeground;
- (void)setPkAppInForeground:(BOOL)arg1;
- (void).cxx_destruct;
@end
