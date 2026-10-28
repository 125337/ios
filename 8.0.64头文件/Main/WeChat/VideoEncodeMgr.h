@interface VideoEncodeMgr : MMUserService <MMServiceProtocol>
{
    VideoEncodeTask * _currentTask; // +0x8
    NSMutableArray * _normalTaskQueue; // +0x10
    NSMutableArray * _highPriorityTaskQueue; // +0x18
    NSObject * _queueLockObject; // +0x20
}
- (void)onServiceInit;
- (id)getParamsForChatAlbumVideo:(id)arg1;
- (id)getParamsForChatAlbumVideo:(id)arg1 withDuration:(double)arg2;
- (id)getParamsForChatVideo:(id)arg1 encodeScene:(unsigned long long)arg2 encodeJson:(id)arg3;
- (id)getParamsForChatVideo:(id)arg1 withDuration:(double)arg2 encodeScene:(unsigned long long)arg3 encodeJson:(id)arg4;
- (id)getParamsForCompressChatAlbumVideo:(id)arg1;
- (id)getParamsForMomentAlbumVideo:(id)arg1;
- (id)getParamsForMomentAlbumVideo:(id)arg1 withDuration:(double)arg2;
- (id)getParamsForMomentAlbumVideo:(id)arg1 withEncodeScene:(unsigned long long)arg2;
- (id)getParamsForMomentAlbumVideo:(id)arg1 withDuration:(double)arg2 encodeScene:(unsigned long long)arg3;
- (BOOL)isEnableHEVCEncodeWithSightScene:(unsigned long long)arg1 duration:(double)arg2;
- (id)getParamsForMomentAlbumWithEncodeScene:(unsigned long long)arg1 videoSize:(CGSize)arg2 duration:(double)arg3 fps:(float)arg4 videoBitrate:(float)arg5 audioSampleRate:(float)arg6 audioChannel:(unsigned int)arg7 audioBitrate:(float)arg8;
- (id)getParamsForFinderAlbumVideo:(id)arg1;
- (id)getParamsForFinderAlbumMegaVideo:(id)arg1 renderSize:(CGSize)arg2;
- (id)getParamsForFinderAlbumVideo:(id)arg1 renderSize:(CGSize)arg2;
- (id)getParamsForFinderAlbumVideo:(id)arg1 renderSize:(CGSize)arg2 encodeScene:(unsigned long long)arg3;
- (id)getParamsForFinderAlbumVideo:(id)arg1 withDuration:(double)arg2 encodeScene:(unsigned long long)arg3;
- (id)getParamsForFinderAlbumVideoSize:(CGSize)arg1 duration:(double)arg2 fps:(float)arg3 videoBitrate:(float)arg4 audioSampleRate:(float)arg5 audioChannel:(unsigned int)arg6 audioBitrate:(float)arg7 encodeScene:(unsigned long long)arg8;
- (id)getParamsForFinderMiaojianPublisher;
- (id)getParamsForChatAlbumVideoSize:(CGSize)arg1 duration:(double)arg2 fps:(float)arg3 videoBitrate:(float)arg4 audioSampleRate:(float)arg5 audioChannel:(unsigned int)arg6 audioBitrate:(float)arg7 encodeScene:(unsigned long long)arg8 encodeJson:(id)arg9;
- (id)getParamsForChatVideoRecord;
- (id)getParamsForMomentVideoRecord;
- (id)getParamsForMomentsWithMiaoJianTemplate;
- (id)getParamsForMomentsWithMiaoJianApp;
- (id)getParamsForStoryAlbumVideo:(id)arg1;
- (id)getParamsForStoryAlbumVideo:(id)arg1 withDuration:(double)arg2;
- (id)getParamsForStoryVideoRecord;
- (id)getParamsForTextStateVideo:(id)arg1;
- (id)getParamsForHighQulity:(id)arg1;
- (id)getParamsForGameVideo:(id)arg1;
- (id)getParamsForFinderVideoRecord:(BOOL)arg1;
- (void)setDefaultStepConfigs:(id)arg1;
- (long long)getTimeMinuteCountFrom:(id)arg1;
- (id)getVideoEncodeJson:(unsigned long long)arg1;
- (id)getVideoConfigForScene:(unsigned long long)arg1;
- (id)getVideoConfigForScene:(unsigned long long)arg1 encodeJson:(id)arg2;
- (id)startNewTaskForAsset:(id)arg1 inputPath:(id)arg2 outputPath:(id)arg3 params:(id)arg4 videoEncodeTaskParams:(id)arg5 completionBlock:(id /* block */)arg6;
- (id)startMMAssetExportSessionTaskWithInputPath:(id)arg1 outputPath:(id)arg2 params:(id)arg3 videoEncodeTaskParams:(id)arg4 completionBlock:(id /* block */)arg5;
- (id)startNewTaskForAsset:(id)arg1 inputPath:(id)arg2 outputPath:(id)arg3 params:(id)arg4 videoEncodeTaskParams:(id)arg5 configVideoComposition:(id)arg6 completionBlock:(id /* block */)arg7;
- (id)startNewTaskForAsset:(id)arg1 inputPath:(id)arg2 outputPath:(id)arg3 params:(id)arg4 videoEncodeTaskParams:(id)arg5 configVideoComposition:(id)arg6 videoProgressCallback:(id /* block */)arg7 completionBlock:(id /* block */)arg8;
- (id)startMAVExportSessionTaskWithMAVVideoComposition:(id)arg1 config:(id)arg2 inputPath:(id)arg3 outputPath:(id)arg4 params:(id)arg5 videoEncodeTaskParams:(id)arg6 completionBlock:(id /* block */)arg7;
- (id)startMAVExportSessionTaskWithMAVVideoComposition:(id)arg1 config:(id)arg2 inputPath:(id)arg3 outputPath:(id)arg4 params:(id)arg5 videoEncodeTaskParams:(id)arg6 progressCallback:(id /* block */)arg7 completionBlock:(id /* block */)arg8;
- (BOOL)isTaskInQueue:(id)arg1;
- (void)removeTask:(id)arg1;
- (void)removeAllTasks;
- (BOOL)makeTaskHighPriority:(id)arg1;
- (BOOL)makeTaskLowPriority:(id)arg1;
- (id)getTaskWithVideoAsset:(id)arg1 inputPath:(id)arg2 outputPath:(id)arg3 includingReplicableTask:(BOOL)arg4;
- (void)addHighPriorityTask:(id)arg1;
- (void)addLowPriorityTask:(id)arg1;
- (void)checkQueue;
- (unsigned int)getFullScreenAlrightHeightWith:(unsigned int)arg1;
- (id)getParamsForNearbyAlbumVideo:(id)arg1 withDuration:(double)arg2;
- (id)getParamsForNearbyAlbumVideo:(id)arg1;
- (id)getParamsForNearbyVideoRecord;
- (id)getParamsForNearbyAlbumVideoSize:(CGSize)arg1 duration:(double)arg2 fps:(float)arg3 videoBitrate:(float)arg4 audioSampleRate:(float)arg5 audioChannel:(unsigned int)arg6 audioBitrate:(float)arg7;
- (id)currentTask;
- (id)normalTaskQueue;
- (void)setNormalTaskQueue:(id)arg1;
- (id)highPriorityTaskQueue;
- (void)setHighPriorityTaskQueue:(id)arg1;
- (id)queueLockObject;
- (void)setQueueLockObject:(id)arg1;
- (void).cxx_destruct;
@end
