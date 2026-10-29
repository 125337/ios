@interface FinderUniCommentTask : NSObject
{
    id /* block */ _completion; // +0x8
    WCFinderComment * _finderComment; // +0x10
    NSString * _localDirectory; // +0x18
    NSMutableArray * _pendingSteps; // +0x20
    FinderUniCommentRequest * _resultRequest; // +0x28
    unsigned long long _processFinishCount; // +0x30
    unsigned long long _uploadFinishCount; // +0x38
}
- (id)initWithComment:(id)arg1 localDirectory:(id)arg2;
- (BOOL)shouldContinueWithError:(id)arg1;
- (void)execute;
- (id /* block */)handlerForStep:(unsigned long long)arg1;
- (id)currentTaskDirectory;
- (void)copyMediaFileWithCompletion:(id /* block */)arg1;
- (void)copyAndExportVideoWithVideoInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)copyMediaWithImageInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)onFinishCopyMediaWithCompletion:(id /* block */)arg1;
- (id)resizeImage:(id)arg1 toMaxWidth:(int)arg2 andMaxHeight:(int)arg3;
- (void)uploadMediaHandlerWithCompletion:(id /* block */)arg1;
- (void)onFinishUploadMediaWithCompletion:(id /* block */)arg1;
- (void)compressMediaHandlerWithCompletion:(id /* block */)arg1;
- (id)buidSendCommentReqeustWithComment:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)finderComment;
- (void)setFinderComment:(id)arg1;
- (id)localDirectory;
- (void)setLocalDirectory:(id)arg1;
- (id)pendingSteps;
- (void)setPendingSteps:(id)arg1;
- (id)resultRequest;
- (void)setResultRequest:(id)arg1;
- (unsigned long long)processFinishCount;
- (void)setProcessFinishCount:(unsigned long long)arg1;
- (unsigned long long)uploadFinishCount;
- (void)setUploadFinishCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
