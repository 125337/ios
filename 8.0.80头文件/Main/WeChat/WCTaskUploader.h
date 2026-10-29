@interface WCTaskUploader : MMObject <WCSightVideoCompositeTaskDelegate, WCMediaUploaderDelegate, WCDataUploaderDelegate, IFavoritesExt>
{
    WCUploadTask * _uploadTask; // +0x8
    WCUploader * _uploader; // +0x10
    NSMutableSet * _runnedSubTask; // +0x18
    int _runningState; // +0x20
    id <WCTaskUploaderDelegate> _delegate; // +0x28
}
- (void)_handlePostRequestStart;
- (void)_handlePostRequestSuccess;
- (void)_handlePostRequestError;
- (void)_handlePostRequestCancel;
- (void)_handleUploadMediaStart;
- (void)_detectVideoEncodeTypeIfNeeded;
- (void)_handleUploadMediaSuccess;
- (void)_handleUploadMediaError;
- (void)_handleUploadMediaCancel;
- (void)prepareUploadMedias;
- (void)tryStartNextTask;
- (id)initWithTask:(id)arg1 withDelegate:(id)arg2;
- (void)run;
- (BOOL)canInterrupt;
- (void)cancelWithBlock:(id /* block */)arg1;
- (void)setSightVideoProgressBlock:(id /* block */)arg1 compositeTask:(id)arg2;
- (void)sightVideoCompositeTask:(id)arg1 didFinish:(BOOL)arg2 withSightDraft:(id)arg3;
- (void)dealloc;
- (void)onMediaUploadStarted:(id)arg1;
- (void)onMediaUploadFinished:(id)arg1 uploadResult:(long long)arg2 uploadErrType:(long long)arg3 cdnErrCode:(int)arg4;
- (void)handleMediaProcessCompletion:(id)arg1 result:(long long)arg2 errType:(long long)arg3 errMsg:(id)arg4;
- (void)onDataUploadStarted:(id)arg1;
- (void)onDataUploadFinished:(id)arg1 uploadResult:(id)arg2;
- (void)OnUploadFavoritesItemFinish:(id)arg1 ErrCode:(int)arg2;
- (void)OnDelFavoritesItems:(id)arg1;
- (void).cxx_destruct;
@end
