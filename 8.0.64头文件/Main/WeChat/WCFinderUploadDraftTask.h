@interface WCFinderUploadDraftTask : NSObject
{
    BOOL _running; // +0x8
    BOOL _finished; // +0x9
    NSString * _taskId; // +0x10
    SEL _action; // +0x18
    SEL _resultHandler; // +0x20
    SEL _failedHandler; // +0x28
    id _obj; // +0x30
    NSMutableArray * _subTasks; // +0x38
    NSMutableArray * _doneSubTasks; // +0x40
}
+ (id)taskWithTaskId:(id)arg1 action:(SEL)arg2 obj:(id)arg3;
- (void)addSubTask:(id)arg1;
- (id)currentTask;
- (BOOL)turnNextSubTask;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (SEL)resultHandler;
- (void)setResultHandler:(SEL)arg1;
- (SEL)failedHandler;
- (void)setFailedHandler:(SEL)arg1;
- (BOOL)running;
- (void)setRunning:(BOOL)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (id)obj;
- (void)setObj:(id)arg1;
- (id)subTasks;
- (void)setSubTasks:(id)arg1;
- (id)doneSubTasks;
- (void)setDoneSubTasks:(id)arg1;
- (void).cxx_destruct;
@end
