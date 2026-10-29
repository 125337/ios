@interface MJPublisherMovieCompositionTask : WCFinderPreviewEditVideoCompositionTask
{
    id /* block */ _resultBlock; // +0x8
    MJMovieComposingAsyncExportInfo * _asyncExportInfo; // +0x10
    NSString * _exportFilePath; // +0x18
    UIImage * _coverImage; // +0x20
}
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskID:(id)arg1 srcPHAsset:(id)arg2 asyncExportInfo:(id)arg3 previewThumbImageSize:(CGSize)arg4;
- (id)generatePreviewImage;
- (void)generatePreviewImageAtStartTime:(double)arg1 completion:(id /* block */)arg2;
- (id)coverImagePath;
- (void)didGenerateNewAsyncTaskID:(id)arg1;
- (id)getPreparedAssetFileURL;
- (void)prepareTaskWithBlock:(id /* block */)arg1;
- (BOOL)removeLocalCache;
- (id)taskId;
- (long long)taskType;
- (BOOL)isValid;
- (BOOL)shouldSaveExportVideoToLibrary;
- (void)onTaskPending;
- (void)onTaskReady;
- (void)onTaskStarted;
- (void)onTaskStoppedWithResult:(id)arg1 session:(id)arg2;
- (void)onTaskInterrupted;
- (void)onTaskDetached;
- (void)willAddIntoTrash;
- (void)templateCoreManager:(id)arg1 exportTaskDidFinishWithTaskID:(id)arg2 outputFilePath:(id)arg3;
- (void)templateCoreManager:(id)arg1 exportTaskDidFailWithTaskID:(id)arg2 error:(id)arg3;
- (void)templateCoreManager:(id)arg1 exportTaskDidCancelWithTaskID:(id)arg2;
- (void)templateCoreManager:(id)arg1 exportProgressDidChange:(float)arg2 taskID:(id)arg3;
- (void)templateCoreManager:(id)arg1 videoFrameDidUpdate:(id)arg2 taskID:(id)arg3;
- (double)exportVideoDuration;
- (void)reportEventWithName:(id)arg1 taskID:(id)arg2 error:(id)arg3;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;
- (id)asyncExportInfo;
- (void)setAsyncExportInfo:(id)arg1;
- (id)exportFilePath;
- (void)setExportFilePath:(id)arg1;
- (id)coverImage;
- (void)setCoverImage:(id)arg1;
- (void).cxx_destruct;
@end
