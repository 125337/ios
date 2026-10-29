@interface JSCDebuggerWrapper : NSObject
{
    JSCRemoteConnectionToTarget * _connection; // +0x8
    JSCTarget * _targetInternal; // +0x10
    id /* block */ _disconnectBlock; // +0x18
}
- (void)dealloc;
- (JSCRemoteConnectionToTarget *)connection;
- (void)setConnection:(JSCRemoteConnectionToTarget *)arg1;
- (id)targetInternal;
- (void)setTargetInternal:(id)arg1;
- (id /* block */)disconnectBlock;
- (void)setDisconnectBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

