@interface ChatFileReporter : NSObject
{
    NSMutableDictionary * _downloadTasks; // +0x8
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
- (void)OnMsgSendSuccess:(id)arg1;
- (void)setDownloadTasks:(id)arg1;
- (void).cxx_destruct;
@end
