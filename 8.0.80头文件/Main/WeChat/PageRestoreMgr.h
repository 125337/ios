@interface PageRestoreMgr : MMUserService <MMServiceProtocol>
{
    MemoryMappedKV * _mmkv; // +0x8
    NSDictionary * _handlers; // +0x10
    long long _recoverTime; // +0x18
    long long _displayTime; // +0x20
}
+ (id)shared;
- (id)setupHandlers;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (BOOL)isEnabled;
- (void)checkPageAfterLaunch:(id)arg1;
- (void)showSnackBar:(id)arg1 message:(id)arg2 actionHandler:(id /* block */)arg3 willAppearHandler:(id /* block */)arg4;
- (void)pushPage:(id)arg1;
- (void)popPage:(int)arg1;
- (id)lastPage;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (id)handlers;
- (void)setHandlers:(id)arg1;
- (long long)recoverTime;
- (void)setRecoverTime:(long long)arg1;
- (long long)displayTime;
- (void)setDisplayTime:(long long)arg1;
- (void).cxx_destruct;
@end
