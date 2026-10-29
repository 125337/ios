@interface MsgBrowserMgr : MMUserService <MMServiceProtocol>
{
    MsgBrowserReporter * _reporter; // +0x8
}
+ (id)shared;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (id)reporter;
- (void).cxx_destruct;
@end
