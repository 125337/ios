@interface MMFinderLiveReplayTask : MMFinderLiveTask
{
    BOOL _isLivePausedBySlider; // +0x8
    BOOL _isLivePausedForCapture; // +0x9
    BOOL _isLivePausedForBarrage; // +0xa
    BOOL _isLivePausedReplayLiveForOuter; // +0xb
    MMFinderLiveReplayView * _replayView; // +0x10
}
- (id)initWithLiveContentVM:(id)arg1;
- (id)createNewTaskId;
- (BOOL)handleConflictWithNewLive:(id)arg1 navigationController:(id)arg2;
- (BOOL)handleConflictWithNewFinderLiveContentVMs:(id)arg1 selectedIndex:(id)arg2 navigationController:(id)arg3 tabType:(long long)arg4 commentScene:(int)arg5 replayEntryType:(id)arg6 useVerticalFullscreenMinimization:(BOOL)arg7 routeParam:(id)arg8;
- (BOOL)innerPauseLiveForAudience;
- (BOOL)innerResumeLiveForAudience;
- (BOOL)isLiveClosed;
- (BOOL)needEnterLiveComplete;
- (void)checkPaidLiveTrialCountLimitReached;
- (id)getConflictWording;
- (id)createLiveViewWithFrame:(CGRect)arg1 andTaskId:(id)arg2 andDelegate:(id)arg3;
- (BOOL)isLivePause;
- (id)getLivePauseSceneDescription;
- (void)resumeLiveByMinimizeWindow;
- (void)resumeLiveByPIP;
- (void)resumeLiveByNowPlayingControl;
- (id)getLiveMuteSceneDescription;
- (BOOL)pauseAudioModeBackgroundVideoPlayerIfNeeded;
- (BOOL)pauseAnchorAudioModeBackgroundVideoPlayerIfNeeded;
- (BOOL)pauseOpposingAnchorAudioModeBackgroundVideoPlayerIfNeeded;
- (BOOL)resumeAudioModeBackgroundVideoPlayerIfNeeded;
- (BOOL)resumeAnchorAudioModeBackgroundVideoPlayerIfNeeded;
- (BOOL)resumeOpposingAnchorAudioModeBackgroundVideoPlayerIfNeeded;
- (id)replayTaskId;
- (BOOL)isReplay;
- (BOOL)shouldForbidLandScapeForIphone;
- (BOOL)getCurrentShouldForbidLandscape;
- (id)audioModeCoverImageUrlString;
- (BOOL)disableForwardByGlobalReplayConfig;
- (void)setIsLivePausedBySlider:(BOOL)arg1;
- (void)setIsLivePausedForCapture:(BOOL)arg1;
- (void)setIsLivePausedForBarrage:(BOOL)arg1;
- (void)setIsLivePausedReplayLiveForOuter:(BOOL)arg1;
- (BOOL)isLiveAudienceDisplayMode;
- (void)updateReplayRemoteVideoSize:(CGSize)arg1;
- (BOOL)muteLiveRemoteAudio;
- (BOOL)unMuteLiveRemoteAudio;
- (void)pauseLiveBySlider;
- (void)resumeLiveBySlider;
- (void)pauseLiveForCapture;
- (void)resumeLiveForUnCapture;
- (void)pauseLiveForBarrage;
- (void)resumeLiveForBarrage;
- (void)pauseReplayLiveForOuter;
- (void)resumeReplayLiveForOuter;
- (id)replayEntryType;
- (BOOL)isLivePausedBySlider;
- (BOOL)isLivePausedForCapture;
- (BOOL)isLivePausedForBarrage;
- (BOOL)isLivePausedReplayLiveForOuter;
- (id)replayView;
- (void)setReplayView:(id)arg1;
- (void).cxx_destruct;
@end
