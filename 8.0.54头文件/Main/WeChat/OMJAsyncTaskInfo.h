@interface OMJAsyncTaskInfo : NSObject
{
    NSError * _error; // +0x8
    long long _executionID; // +0x10
    NSString * _taskTag; // +0x18
    XMJAsyncTaskInfo _backingTaskInfo; // +0x20
}
- (id)initWithBackingTaskInfo:(XMJAsyncTaskInfo)arg1;
- (id)description;
- (id)error;
- (long long)executionID;
- (id)taskTag;
- (XMJAsyncTaskInfo)backingTaskInfo;
- (void)setBackingTaskInfo:(XMJAsyncTaskInfo)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

