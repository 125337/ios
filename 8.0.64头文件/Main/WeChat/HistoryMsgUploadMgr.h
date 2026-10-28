@interface HistoryMsgUploadMgr : NSObject <HistoryMsgUploadTaskDelegate>
{
    BOOL _uploadMediaWithoutMsgList; // +0x8
    BOOL _uploadNoteMediaOnly; // +0x9
    id <HistoryMsgUploadMgrDelegate> _delegate; // +0x10
    NSString * _taskId; // +0x18
    NSString * _taskID; // +0x20
    NSString * _roomID; // +0x28
    NSArray * _msgList; // +0x30
    NSMutableArray * _arrReadyAddMsg; // +0x38
    NSMutableArray * _arrUploadTask; // +0x40
}
- (id)initWithMsgList:(id)arg1 roomID:(id)arg2;
- (id)initWithMsgList:(id)arg1 roomID:(id)arg2 onlyNoteMedia:(BOOL)arg3;
- (void)generateUploadTask;
- (void)startUpload;
- (void)stopUpload;
- (void)onAllTaskFinish;
- (void)uploadHistoryMsgList:(id)arg1;
- (void)onUploadTaskSuccessWithMsg:(id)arg1 uploadTask:(id)arg2;
- (void)onUploadTaskFailWithMsg:(id)arg1 uploadTask:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)uploadMediaWithoutMsgList;
- (void)setUploadMediaWithoutMsgList:(BOOL)arg1;
- (BOOL)uploadNoteMediaOnly;
- (void)setUploadNoteMediaOnly:(BOOL)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)roomID;
- (void)setRoomID:(id)arg1;
- (id)msgList;
- (void)setMsgList:(id)arg1;
- (id)arrReadyAddMsg;
- (void)setArrReadyAddMsg:(id)arg1;
- (id)arrUploadTask;
- (void)setArrUploadTask:(id)arg1;
- (void).cxx_destruct;
@end
