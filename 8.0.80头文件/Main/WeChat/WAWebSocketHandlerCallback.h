@interface WAWebSocketHandlerCallback : NSObject
{
    unsigned int _workerId; // +0x8
    id /* block */ _openhandler; // +0x10
    id /* block */ _closehandler; // +0x18
    id /* block */ _errorhandler; // +0x20
    id /* block */ _msghandler; // +0x28
    NSString * _taskId; // +0x30
}
- (id /* block */)openhandler;
- (void)setOpenhandler:(id /* block */)arg1;
- (id /* block */)closehandler;
- (void)setClosehandler:(id /* block */)arg1;
- (id /* block */)errorhandler;
- (void)setErrorhandler:(id /* block */)arg1;
- (id /* block */)msghandler;
- (void)setMsghandler:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned int)workerId;
- (void)setWorkerId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
