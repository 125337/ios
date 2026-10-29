@interface FileTransferTaskWrap : NSObject
{
    id <FileTransferTaskWrapDelegate> _delegate; // +0x8
    FileTransferTask * _task; // +0x10
}
- (id)initWithTask:(id)arg1;
- (void)dealloc;
- (void)refreshUI;
- (void)onTaskProgress:(int)arg1;
- (void)onTaskCompleted;
- (void)onMessageTransferCreated:(id)arg1;
- (void)onMessageTransferStart:(id)arg1;
- (void)onMessageTransferStop:(id)arg1;
- (void)onMessageTransfer:(id)arg1 progressChanged:(int)arg2;
- (void)onMessageTransferComplete:(id)arg1 error:(id)arg2;
- (void)_onMessageTransferComplete:(id)arg1 error:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (void).cxx_destruct;
@end
