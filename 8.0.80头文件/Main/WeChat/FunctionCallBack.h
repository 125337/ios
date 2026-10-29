@interface FunctionCallBack : NSObject
{
    unsigned long long _taskId; // +0x8
    FunctionItem * _delegate; // +0x10
}
- (id)initWithTaskId:(unsigned long long)arg1 andDelegateItem:(id)arg2;
- (void)notifyTaskFinish:(id)arg1;
- (unsigned long long)taskId;
- (void)setTaskId:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
