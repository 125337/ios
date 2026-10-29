@interface AppFileMessageCellContentView : AppFileMessageView <FileTransferTaskWrapDelegate>
{
    BOOL _enableStatusUI; // +0x8
    BOOL _isSendingMsg; // +0x9
    FileTransferTaskWrap * _taskWrap; // +0x10
}
- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setIsSendingMsg:(BOOL)arg1;
- (id)task;
- (void)updateDisplay:(id)arg1;
- (void)refreshState;
- (void)fileTransferTaskUpdated:(id)arg1;
- (void)fileTransferTask:(id)arg1 onProgress:(int)arg2;
- (void)fileTransferTaskCompleted:(id)arg1;
- (id)taskWrap;
- (void)setTaskWrap:(id)arg1;
- (BOOL)enableStatusUI;
- (void)setEnableStatusUI:(BOOL)arg1;
- (BOOL)isSendingMsg;
- (void).cxx_destruct;
@end
