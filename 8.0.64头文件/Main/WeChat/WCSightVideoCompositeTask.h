@interface WCSightVideoCompositeTask : NSObject <MMAssetCompositeTaskProtocol>
{
    BOOL _isTaskCompleted; // +0x8
    BOOL _isTaskRunning; // +0x9
    BOOL _enablesCrashProtect; // +0xa
    MMAssetForPHAssetFramework * _srcPHAsset; // +0x10
    MMAssetForPHAssetFramework * _exportedPHAsset; // +0x18
    EditVideoAttr * _editVideoAttr; // +0x20
    VideoCompositionAttr * _compositionAttr; // +0x28
    SightDraft * _completedSightDraft; // +0x30
    NSError * _error; // +0x38
    long long _taskFailedCount; // +0x40
    id <WCSightVideoCompositeTaskDelegate> _delegate; // +0x48
    long long _assetCompositionSource; // +0x50
    WCMomentsPostReportSession * _postReportSession; // +0x58
    NSString * _mjMetaInfoStr; // +0x60
    VideoEncodeTask * _videoEncodeTask; // +0x68
    NSString * _sightDraftVideoPath; // +0x70
    id /* block */ _compositeProgressCb; // +0x78
    NSString * _taskId; // +0x80
    NSString * _savedAssetFileShortName; // +0x88
    NSURL * _cachedEditedAssetFileURL; // +0x90
    double _taskPendingTime; // +0x98
    double _taskStartTime; // +0xa0
    double _taskFinishTime; // +0xa8
    double _taskStopTime; // +0xb0
    double _taskInterruptTime; // +0xb8
    double _taskDetachTime; // +0xc0
}
- (id)getThumbImageForEditVideoFromPath:(id)arg1;
- (void)reportCompositionFailed;
- (void)setupSightDraft:(id)arg1;
- (id)initWithTaskId:(id)arg1 srcPHAsset:(id)arg2 editVideoAttr:(id)arg3 compositionAttr:(id)arg4;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)clearTaskData;
- (void)willAddIntoTrash;
- (id)getPreparedAssetFileURL;
- (void)prepareTaskWithBlock:(id /* block */)arg1;
- (BOOL)removeLocalCache;
- (double)videoCompressDuration;
- (double)videoDuration;
- (id)generatePreviewImage;
- (id)generateWidgetCanvasView;
- (void)_saveBackupAssetToDiskIfNeeded:(id /* block */)arg1;
- (void)_prepareEditAttrWithResultBlock:(id /* block */)arg1;
- (CGSize)_getEditedAssetSize;
- (id)_getEditedAssetCacheFileURL;
- (id)taskId;
- (long long)taskType;
- (BOOL)isValid;
- (BOOL)isSafe;
- (BOOL)shouldSaveExportVideoToLibrary;
- (void)onTaskPending;
- (void)onTaskReady;
- (void)onTaskStarted;
- (void)onTaskStoppedWithResult:(id)arg1 session:(id)arg2;
- (void)onTaskInterrupted;
- (void)onTaskDetached;
- (void)_onTaskFinished;
- (void)_handleCompositionTaskCompletedWithSession:(id)arg1;
- (void)_handleCompositionTaskFailedWithSession:(id)arg1;
- (void)setCompositeProgressCb:(id /* block */)arg1;
- (double)currentCompositeProgress;
- (void)_retainSelfForBlock;
- (id)srcPHAsset;
- (void)setSrcPHAsset:(id)arg1;
- (id)exportedPHAsset;
- (void)setExportedPHAsset:(id)arg1;
- (id)editVideoAttr;
- (void)setEditVideoAttr:(id)arg1;
- (id)compositionAttr;
- (void)setCompositionAttr:(id)arg1;
- (BOOL)isTaskCompleted;
- (void)setIsTaskCompleted:(BOOL)arg1;
- (BOOL)isTaskRunning;
- (id)completedSightDraft;
- (void)setCompletedSightDraft:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (long long)taskFailedCount;
- (void)setTaskFailedCount:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)assetCompositionSource;
- (void)setAssetCompositionSource:(long long)arg1;
- (id)postReportSession;
- (void)setPostReportSession:(id)arg1;
- (id)mjMetaInfoStr;
- (void)setMjMetaInfoStr:(id)arg1;
- (id)videoEncodeTask;
- (void)setVideoEncodeTask:(id)arg1;
- (BOOL)enablesCrashProtect;
- (void)setEnablesCrashProtect:(BOOL)arg1;
- (id)sightDraftVideoPath;
- (void)setSightDraftVideoPath:(id)arg1;
- (id /* block */)compositeProgressCb;
- (void)setTaskId:(id)arg1;
- (id)savedAssetFileShortName;
- (void)setSavedAssetFileShortName:(id)arg1;
- (id)cachedEditedAssetFileURL;
- (void)setCachedEditedAssetFileURL:(id)arg1;
- (double)taskPendingTime;
- (void)setTaskPendingTime:(double)arg1;
- (double)taskStartTime;
- (void)setTaskStartTime:(double)arg1;
- (double)taskFinishTime;
- (void)setTaskFinishTime:(double)arg1;
- (double)taskStopTime;
- (void)setTaskStopTime:(double)arg1;
- (double)taskInterruptTime;
- (void)setTaskInterruptTime:(double)arg1;
- (double)taskDetachTime;
- (void)setTaskDetachTime:(double)arg1;
- (void).cxx_destruct;
@end
