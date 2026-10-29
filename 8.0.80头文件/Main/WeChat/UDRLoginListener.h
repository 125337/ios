@interface UDRLoginListener : MMUserService <MMServiceProtocol>
{
    NSObject<OS_dispatch_queue> * _queue; // +0x8
    NSObject<OS_dispatch_queue> * _callbackQueue; // +0x10
    BOOL _initialized; // +0x18
    NSMutableArray * _pendingCallbacks; // +0x20
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)checkUDRUpdate;
- (void)dealLogout;
- (void)dealAccountIn;
- (void)waitForInitialization:(id /* block */)arg1;
- (void)repeatCheckUDRUpdate;
- (void).cxx_destruct;
@end
