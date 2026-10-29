@interface WCTuringMgr : MMUserService <MMServiceProtocol, MMKernelExt>
{
    NSObject<OS_dispatch_queue> * _queue; // +0x8
    BOOL _bEnable; // +0x10
}
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)start:(unsigned long long)arg1 action:(int)arg2 duration:(float)arg3;
- (void)keyboardWillAppear:(id)arg1 withContext:(id)arg2;
- (void)keyboardWillDisappear:(id)arg1 withContext:(id)arg2 isFinishInput:(BOOL)arg3;
- (void)onAuthOK;
- (void)reportHumenRecord;
- (void)reportOwnerRecord;
- (void).cxx_destruct;
@end
