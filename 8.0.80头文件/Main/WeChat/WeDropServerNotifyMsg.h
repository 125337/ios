@interface WeDropServerNotifyMsg : MMObject
{
    NSString * _taskId; // +0x8
    NSString * _notifyMsgBase64; // +0x10
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)notifyMsgBase64;
- (void)setNotifyMsgBase64:(id)arg1;
- (void).cxx_destruct;
@end
