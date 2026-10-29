@interface MMLiveOpenApiMgr : MMUserService <MMLiveTaskDelegate, WCFinderLiveExt, MMFinderLiveFansGroupOperationReportDelegate, MMServiceProtocol>
{
    BOOL _tempSwitchPause; // +0x8
    BOOL _joinTeamBusy; // +0x9
    BOOL _miniGamePking; // +0xa
    WCFinderFeedContentVM * _lastContentVM; // +0x10
    MMFinderLiveFansGroupOperationPanel * _fansGroupOperationPanel; // +0x18
    unsigned long long _videoFrameCount; // +0x20
    double _videoFrameStatStartTime; // +0x28
}
- (BOOL)routeToGameLiveWithAppId:(id)arg1 opensdkVersion:(unsigned int)arg2 extInfo:(id)arg3 sameAccount:(BOOL)arg4 failCallback:(id /* block */)arg5 rootVC:(id)arg6;
- (void)refreshGameLiveLaunchModelWith:(id)arg1 appId:(id)arg2;
- (BOOL)preJudgeSuccessWithExtInfoDic:(id)arg1 sameAccount:(BOOL)arg2 failCallback:(id /* block */)arg3;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)clearDataWithLiveId:(unsigned long long)arg1;
- (BOOL)routeToLiveFromOpenSDKWithAppId:(id)arg1 extInfo:(id)arg2 startInfo:(id)arg3 sameAccount:(BOOL)arg4 failCallback:(id /* block */)arg5 rootVC:(id)arg6;
- (BOOL)createVideoLiveWithAppId:(id)arg1 extInfo:(id)arg2 startInfo:(id)arg3 failCallback:(id /* block */)arg4 rootVC:(id)arg5;
- (BOOL)routeToLiveWithAppId:(id)arg1 extInfo:(id)arg2 failCallback:(id /* block */)arg3 rootVC:(id)arg4;
- (void)enterLiveRoomWithLiveId:(unsigned long long)arg1 finderUserName:(id)arg2 oberver:(id)arg3;
- (void)createLiveRoomWithAppId:(id)arg1 andExtInfo:(id)arg2 nav:(id)arg3 startInfo:(id)arg4;
- (void)exitLiveRoomWithLiveId:(unsigned long long)arg1 finderUserName:(id)arg2;
- (void)shareToFriendWithLiveId:(unsigned long long)arg1 fromViewController:(id)arg2;
- (void)shareToMomentWithLiveId:(unsigned long long)arg1 fromViewController:(id)arg2;
- (void)openFansClubWithLiveId:(unsigned long long)arg1 fromViewController:(id)arg2;
- (BOOL)isLivePushing;
- (BOOL)isMiniGamePking;
- (BOOL)startMiniGameMediaCapture:(unsigned long long)arg1 appId:(id)arg2 path:(id)arg3 scene:(unsigned long long)arg4 sceneNote:(id)arg5;
- (void)stopMiniGameMediaCapture:(unsigned long long)arg1 appId:(id)arg2;
- (void)openMiniGameForPk:(id)arg1 path:(id)arg2 scene:(unsigned long long)arg3 sceneNote:(id)arg4;
- (void)recordVideoFrameStat;
- (void)onCaptureStatusChange:(unsigned long long)arg1;
- (void)stopMiniGamePK:(unsigned long long)arg1;
- (BOOL)minimizeWithLiveId:(unsigned long long)arg1;
- (BOOL)dismissLiveMinimizationWithLiveId:(unsigned long long)arg1;
- (BOOL)enableCustomVideoCaptureWithLiveId:(unsigned long long)arg1 enable:(BOOL)arg2;
- (BOOL)sendCustomVideoDataWithLiveId:(unsigned long long)arg1 withPixelBuffer:(__CVBuffer *)arg2 pixelFormat:(long long)arg3 rotation:(long long)arg4 timestampMs:(unsigned long long)arg5;
- (BOOL)sendCustomVideoDataWithLiveId:(unsigned long long)arg1 withVideoData:(id)arg2 pixelFormat:(long long)arg3 rotation:(long long)arg4 timestampMs:(unsigned long long)arg5 width:(double)arg6 height:(double)arg7;
- (BOOL)enableCustomAudioCaptureWithLiveId:(unsigned long long)arg1 enable:(BOOL)arg2;
- (BOOL)sendCustomAudioDataWithLiveId:(unsigned long long)arg1 withAudioData:(id)arg2 sampleRate:(long long)arg3 channels:(int)arg4 timestampMs:(unsigned long long)arg5;
- (BOOL)enableMixExternalAudioWithLiveId:(unsigned long long)arg1 enablePublish:(BOOL)arg2 playout:(BOOL)arg3;
- (BOOL)mixExternalAudioDataWithLiveId:(unsigned long long)arg1 withAudioData:(id)arg2 sampleRate:(long long)arg3 channels:(int)arg4 timestampMs:(unsigned long long)arg5;
- (void)enableAudioVolumeEvaluation:(unsigned long long)arg1 withLiveId:(unsigned long long)arg2;
- (void)openLiveRoomViewWithLiveId:(unsigned long long)arg1 navigationController:(id)arg2;
- (void)closeLive:(unsigned long long)arg1 navigationController:(id)arg2 delegate:(id)arg3;
- (void)joinTeam:(unsigned long long)arg1 gameInfo:(id)arg2 complete:(id /* block */)arg3;
- (void)enableLocalVideo:(BOOL)arg1 withLiveId:(unsigned long long)arg2;
- (void)enableLocalAudio:(BOOL)arg1 withLiveId:(unsigned long long)arg2;
- (void)setVoiceVolume:(long long)arg1 withLiveId:(unsigned long long)arg2;
- (void)updateLiveRoomCoverImage:(id)arg1 withLiveId:(unsigned long long)arg2;
- (void)setExperimentConfig:(id)arg1 withParams:(id)arg2 withLiveId:(unsigned long long)arg3;
- (void)setVideoEncoderParamWithWidth:(double)arg1 height:(double)arg2 withLiveId:(unsigned long long)arg3;
- (id)getSelfFinderContact;
- (id)getLiveRoomInfoWithLiveId:(unsigned long long)arg1;
- (void)getLiveOnlineMemberListWithLiveId:(unsigned long long)arg1;
- (void)pauseLiveWithLiveId:(unsigned long long)arg1 withCompleteBlock:(id /* block */)arg2;
- (void)resumeLiveWithLiveId:(unsigned long long)arg1 withCompleteBlock:(id /* block */)arg2;
- (void)cgiUpdateTopic:(id)arg1 completion:(id /* block */)arg2;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(BOOL)arg7 liveClosed:(BOOL)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 extraClientConfigUpdated:(BOOL)arg14 liveGameData:(id)arg15 respContext:(id)arg16;
- (void)onFinderGetLiveOnlineMember:(id)arg1 taskId:(id)arg2 boardType:(unsigned int)arg3 onlineMemberResult:(id)arg4;
- (void)onGetFinderLiveAlertInfoWithTaskId:(id)arg1 alertInfo:(id)arg2;
- (void)onShowLiveHalfScreenNotification:(id)arg1 info:(id)arg2;
- (void)onJoinFinderLiveError:(id)arg1 finderDataItem:(id)arg2 joinLiveContext:(id)arg3 errorPage:(id)arg4;
- (void)onGetFinderLiveLayerAnchorVerificationShowInfoWithTaskId:(id)arg1 showInfo:(id)arg2;
- (void)onReportFansGroupOperationActionType:(long long)arg1;
- (void)onReportFansGroupNoticeActionType:(long long)arg1 notice:(id)arg2 level:(unsigned long long)arg3 imageUrl:(id)arg4 visibility:(long long)arg5;
- (BOOL)isLiveRoomMsgTypeSupport:(id)arg1;
- (unsigned int)convertFromLiveCommentMsgType:(id)arg1;
- (long long)convertToTRTCVideoRotation:(long long)arg1;
- (long long)convertToTRTCVideoPixelFormat:(long long)arg1;
- (long long)convertToTRTCAudioSampleRate:(long long)arg1;
- (long long)convertToUIImageOrientation:(long long)arg1 mirrored:(BOOL)arg2;
- (id)getContentVM:(id)arg1 fromViewController:(id)arg2;
- (id)lastContentVM;
- (void)setLastContentVM:(id)arg1;
- (BOOL)tempSwitchPause;
- (void)setTempSwitchPause:(BOOL)arg1;
- (BOOL)joinTeamBusy;
- (void)setJoinTeamBusy:(BOOL)arg1;
- (id)fansGroupOperationPanel;
- (void)setFansGroupOperationPanel:(id)arg1;
- (BOOL)miniGamePking;
- (void)setMiniGamePking:(BOOL)arg1;
- (unsigned long long)videoFrameCount;
- (void)setVideoFrameCount:(unsigned long long)arg1;
- (double)videoFrameStatStartTime;
- (void)setVideoFrameStatStartTime:(double)arg1;
- (void).cxx_destruct;
@end
