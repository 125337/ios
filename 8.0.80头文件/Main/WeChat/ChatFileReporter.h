@interface ChatFileReporter : NSObject
{
    NSMutableDictionary * _downloadTasks; // +0x8
    MemoryMappedKV * _mmkv; // +0x10
}
+ (id)commRecordViewParams:(id)arg1;
+ (id)commMsgViewParams:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)downloadTasks;
- (void)onStartDownload:(unsigned long long)arg1 task:(id)arg2;
- (void)onStartDownload:(unsigned long long)arg1 svrId:(id)arg2;
- (void)onFinishDownload:(id)arg1;
- (void)onMessageTransferComplete:(id)arg1 error:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onGetSvrIdWithUploadMsg:(id)arg1 SvrId:(unsigned long long)arg2;
- (void)OnMsgSendSuccess:(id)arg1;
- (void)_onMessageEventStep:(unsigned long long)arg1 msgWrap:(id)arg2;
- (id)_fileIdForMsgWrap:(id)arg1;
- (unsigned long long)previousFileSourceForMsgWrap:(id)arg1;
- (void)_onFileMsgSent:(id)arg1 fileSource:(unsigned long long)arg2 isLocal:(BOOL)arg3;
- (void)onFileMsgSentLocal:(id)arg1 uiScene:(int)arg2;
- (void)onFileMsgSentServer:(id)arg1;
- (void)setDownloadTasks:(id)arg1;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (void).cxx_destruct;
@end
