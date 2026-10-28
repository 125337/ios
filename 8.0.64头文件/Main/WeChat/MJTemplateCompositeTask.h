@interface MJTemplateCompositeTask : WCSightVideoCompositeTask
{
    MJTemplateAsyncExportInfo * _asyncExportInfo; // +0x8
    NSString * _exportFilePath; // +0x10
    id /* block */ _resultBlock; // +0x18
    OMJMaasCore * _maasCore; // +0x20
    OMJTemplateInfo * _templateInfo; // +0x28
    OMJMusicInfo * _musicInfo; // +0x30
    UIImage * _coverImage; // +0x38
    double _templateCompositeProgress; // +0x40
}
- (id)initWithTaskId:(id)arg1 maasCore:(id)arg2 asyncExportInfo:(id)arg3 templateInfo:(id)arg4 musicInfo:(id)arg5 exportFilePath:(id)arg6;
- (BOOL)isValid;
- (void)willAddIntoTrash;
- (void)didGenerateNewAsyncTaskID:(id)arg1;
- (void)prepareTaskWithBlock:(id /* block */)arg1;
- (BOOL)removeLocalCache;
- (id)getPreparedAssetFileURL;
- (double)videoDuration;
- (id)generateWidgetCanvasView;
- (id)generatePreviewImage;
- (id)getThumbImageForEditVideoFromPath:(id)arg1;
- (void)setupSightDraft:(id)arg1;
- (long long)taskType;
- (BOOL)shouldSaveExportVideoToLibrary;
- (void)onTaskStarted;
- (void)onTaskReady;
- (void)onTaskStoppedWithResult:(id)arg1 session:(id)arg2;
- (void)onTaskInterrupted;
- (void)onTaskDetached;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)templateCoreManager:(id)arg1 exportTaskDidFinishWithTaskID:(id)arg2 outputFilePath:(id)arg3;
- (void)templateCoreManager:(id)arg1 exportTaskDidFailWithTaskID:(id)arg2 error:(id)arg3;
- (void)templateCoreManager:(id)arg1 exportTaskDidCancelWithTaskID:(id)arg2;
- (void)templateCoreManager:(id)arg1 exportProgressDidChange:(float)arg2 taskID:(id)arg3;
- (double)currentCompositeProgress;
- (void)templateCoreManager:(id)arg1 videoFrameDidUpdate:(id)arg2 taskID:(id)arg3;
- (id)asyncExportInfo;
- (void)setAsyncExportInfo:(id)arg1;
- (id)exportFilePath;
- (void)setExportFilePath:(id)arg1;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;
- (id)maasCore;
- (void)setMaasCore:(id)arg1;
- (id)templateInfo;
- (void)setTemplateInfo:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)coverImage;
- (void)setCoverImage:(id)arg1;
- (double)templateCompositeProgress;
- (void)setTemplateCompositeProgress:(double)arg1;
- (void).cxx_destruct;
@end
