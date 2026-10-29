@interface LiteAppJsApiStartDownloadChatFile : LiteAppJsApi <MessageTransferMgrExt>
{
    MessageTransferTask * _task; // +0x20
}
- (void)dealloc;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)onMessageTransferCreated:(id)arg1;
- (void)onMessageTransferStart:(id)arg1;
- (void)onMessageTransferStop:(id)arg1;
- (void)onMessageTransfer:(id)arg1 progressChanged:(int)arg2;
- (void)onMessageTransferComplete:(id)arg1 error:(id)arg2;
- (id)task;
- (void)setTask:(id)arg1;
- (void).cxx_destruct;
@end
