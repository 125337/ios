@interface CBTRichTextTaskCenterCallbackXmlModel : NSObject
{
    long long _ifTaskCenterCallback; // +0x8
    long long _taskCenterCallbackBizType; // +0x10
    long long _taskType; // +0x18
    long long _taskActionType; // +0x20
    NSString * _taskToolName; // +0x28
    NSString * _operation; // +0x30
    long long _recurrenceType; // +0x38
}
- (long long)ifTaskCenterCallback;
- (void)setIfTaskCenterCallback:(long long)arg1;
- (long long)taskCenterCallbackBizType;
- (void)setTaskCenterCallbackBizType:(long long)arg1;
- (long long)taskType;
- (void)setTaskType:(long long)arg1;
- (long long)taskActionType;
- (void)setTaskActionType:(long long)arg1;
- (id)taskToolName;
- (void)setTaskToolName:(id)arg1;
- (id)operation;
- (void)setOperation:(id)arg1;
- (long long)recurrenceType;
- (void)setRecurrenceType:(long long)arg1;
- (void).cxx_destruct;
@end
