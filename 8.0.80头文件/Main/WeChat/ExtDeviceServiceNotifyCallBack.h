@interface ExtDeviceServiceNotifyCallBack : NSObject
{
    unsigned int _event_id; // +0x8
    unsigned long long _task_id; // +0x10
    id /* block */ _callBack; // +0x18
}
- (unsigned long long)task_id;
- (void)setTask_id:(unsigned long long)arg1;
- (unsigned int)event_id;
- (void)setEvent_id:(unsigned int)arg1;
- (id /* block */)callBack;
- (void)setCallBack:(id /* block */)arg1;
- (void).cxx_destruct;
@end
