@interface MMGroupLiveTask : MMLiveTask
{
    unsigned int _anchorScene; // +0x8
    unsigned int _audienceScene; // +0xc
    MMLiveTaskId * _taskId; // +0x10
    MMGroupLiveInfoItem * _liveInfoItem; // +0x18
}
+ (id)createTaskWithReplaySysMsg:(id)arg1 linkUrl:(id)arg2;
+ (id)createTaskWithShareLiveMsg:(id)arg1;
+ (id)createTaskWithGroupLiveInfoItem:(id)arg1;
- (id)roomId;
- (id)initWithRoleType:(long long)arg1 liveId:(unsigned long long)arg2 roomId:(id)arg3 andAnchorId:(id)arg4;
- (void)updateLiveInfo:(id)arg1;
- (id)createNewTaskId;
- (id)createNewCommentFetchEngine;
- (id)groupCommentFetchEngine;
- (BOOL)isSameToTask:(id)arg1;
- (BOOL)isLiveClosed;
- (unsigned int)liveStartTime;
- (id)anchorIdentityId;
- (BOOL)isOnlineStateButtonDisabled;
- (BOOL)resolveConflictsWithLiveTask:(id)arg1 navigationController:(id)arg2 maximizeLiveBlock:(id /* block */)arg3 switchLiveBlock:(id /* block */)arg4;
- (BOOL)resolveExternalConflicts;
- (id)conflictWording;
- (void)updateMainRemoteViewFillMode;
- (BOOL)isOverDisplaySize;
- (BOOL)canChangeAudioQuality;
- (void)initFrontCameraMirrorMode;
- (long long)getBeautySceneType;
- (void)initFaceBeautyParam;
- (void)initBeautyLogicWithBeautyPackage:(id)arg1;
- (id)lastCameraModeCachedKey;
- (id)micMutedCachedKey;
- (id)pauseStatusCachedKey;
- (id)pauseTimeCachedKey;
- (void)handleRemoteSdkUserMediaDataAvailableChanged;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)liveInfoItem;
- (void)setLiveInfoItem:(id)arg1;
- (unsigned int)anchorScene;
- (void)setAnchorScene:(unsigned int)arg1;
- (unsigned int)audienceScene;
- (void)setAudienceScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

