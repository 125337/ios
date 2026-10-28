@interface RawVideoUploadTask : VideoUploadTask
{
    BOOL _bStop; // +0x8
    NSString * _downloadFileKey; // +0x10
}
- (id)initWithMsgWrap:(id)arg1;
- (void)startTask;
- (void)stopTask;
- (void)processAssetTask;
- (void)exportRawVideo;
- (void)exportSlowMotionWithCompletionHandler:(id /* block */)arg1;
- (void)exportNormalVideoWithCompletionHandler:(id /* block */)arg1;
- (id)generateDownloadArgsWrap;
- (void)downloadRawVideo;
- (void)tryUploadRawData;
- (void)uploadVideoDataToCdn;
- (void)onCheckExistOnlyFail;
- (void)onUploadFail:(id)arg1;
- (void)onUploadSuccess:(id)arg1;
- (void)tryOverwriteMsgContent:(id)arg1;
- (void)onDownloadTaskSuccess;
- (BOOL)bStop;
- (void)setBStop:(BOOL)arg1;
- (id)downloadFileKey;
- (void)setDownloadFileKey:(id)arg1;
- (void).cxx_destruct;
@end
