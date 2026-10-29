@interface WCFinderVideoUploadMgr : MMUserService <MMServiceProtocol, ICdnComMgrExt>
{
    NSMutableDictionary * _uploadDict; // +0x8
    NSMutableArray * _uploadWaitingArray; // +0x10
}
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)startUploadvideoPath:(id)arg1 thumbPath:(id)arg2 requestHeader:(id)arg3 progressBlock:(id /* block */)arg4 complecteBlock:(id /* block */)arg5;
- (void)startUploadAudioPath:(id)arg1 requestHeader:(id)arg2 progressBlock:(id /* block */)arg3 complecteBlock:(id /* block */)arg4;
- (BOOL)startUploadTingAudioRecordPath:(id)arg1 requestHeader:(id)arg2 progressBlock:(id /* block */)arg3 complecteBlock:(id /* block */)arg4;
- (void)cancelUploadvideoPath:(id)arg1;
- (void)checkQueue;
- (void)realUploadVideoWithMeta:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnCdnUpload:(id)arg1;
- (id)uploadDict;
- (void)setUploadDict:(id)arg1;
- (id)uploadWaitingArray;
- (void)setUploadWaitingArray:(id)arg1;
- (void).cxx_destruct;
@end

