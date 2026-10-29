@interface MMTCPHandle : NSObject
{
    OpaqueJSContext * _jscontext; // +0x8
    MBTcpScriptState * _tcpScriptState; // +0x10
    void * _tcpMgr; // +0x18
    MMTCPNativeTask * tcpTask; // +0x20
    BOOL _jitMode; // +0x28
    NSString * _appid; // +0x30
}
- (id)initWithJSContext:(OpaqueJSContext *)arg1 parent:(OpaqueJSValue *)arg2;
- (id)initOnJitModeWithAppId:(id)arg1;
- (void)setLogDelegate:(id)arg1;
- (void)releaseContext;
- (void)dealloc;
- (void).cxx_destruct;
@end
