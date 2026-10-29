@interface UserLoginObserver : MMRootService <MMServiceProtocol, MMKernelExt>
{
    atomic<int> _loginStatus; // +0x8
    UserManagerCallback * _callback; // +0x10
}
+ (id)shareInstance;
- (int)loginStatus;
- (void)onAuthOK;
- (void)onManulLoginOK;
- (void)onLoginOK;
- (void)onKickQuit;
- (void)onPreQuit;
- (void)onPostQuit;
- (void)onManulLogOut;
- (void)notifyLoginStatusChange:(int)arg1 authType:(int)arg2 errorCode:(int)arg3;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (BOOL)returnAsRawService;
- (id)callback;
- (void)setCallback:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
