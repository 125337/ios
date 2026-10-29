@interface ChatFileBaseViewController : MMUIViewController <FileTransferTaskWrapDelegate, IMsgRevokeExt, MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate>
{
    FileTransferLogic * _logic; // +0x70
    NSString * _chatContactUsername; // +0x78
    FileTransferTaskWrap * _taskWrap; // +0x80
    MMScrollActionSheet * _scrollActionSheet; // +0x88
}
- (id)initWithTask:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupUI;
- (void)layoutUI;
- (void)refreshUI;
- (void)onTaskProgress:(int)arg1;
- (void)onTaskCompleted;
- (void)openTaskFile:(BOOL)arg1 fromUserClick:(BOOL)arg2;
- (BOOL)canOpMore;
- (void)opMore;
- (void)onForwardToContact:(id)arg1;
- (void)reportMenuOp:(unsigned long long)arg1;
- (void)reportMenuOp:(unsigned long long)arg1 fileName:(id)arg2 fileSize:(unsigned long long)arg3 fileType:(id)arg4;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)task;
- (void)startTask;
- (void)stopTask;
- (void)fileTransferTaskUpdated:(id)arg1;
- (void)fileTransferTask:(id)arg1 onProgress:(int)arg2;
- (void)fileTransferTaskCompleted:(id)arg1;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (id)logic;
- (void)setLogic:(id)arg1;
- (id)chatContactUsername;
- (void)setChatContactUsername:(id)arg1;
- (id)taskWrap;
- (void)setTaskWrap:(id)arg1;
- (id)scrollActionSheet;
- (void)setScrollActionSheet:(id)arg1;
- (void).cxx_destruct;
@end
