@interface MagicAgentRuntimeTcpUdpRegistry : NSObject
{
    NSMutableDictionary * _tcpHandles; // +0x8
    NSMutableDictionary * _udpHandles; // +0x10
    NSObject<OS_dispatch_queue> * _serialQueue; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)registerForAppId:(id)arg1;
- (void)unregisterForAppId:(id)arg1;
- (void)unregisterAll;
- (void)_unregisterAllLocked;
- (id)tcpHandles;
- (void)setTcpHandles:(id)arg1;
- (id)udpHandles;
- (void)setUdpHandles:(id)arg1;
- (id)serialQueue;
- (void)setSerialQueue:(id)arg1;
- (void).cxx_destruct;
@end
