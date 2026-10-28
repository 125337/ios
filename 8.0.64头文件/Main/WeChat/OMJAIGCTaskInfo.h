@interface OMJAIGCTaskInfo : NSObject
{
    NSString * _taskID; // +0x8
    NSData * _contextData; // +0x10
}
- (id)initWithTaskID:(id)arg1 contextData:(id)arg2;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)contextData;
- (void)setContextData:(id)arg1;
- (void).cxx_destruct;
@end
