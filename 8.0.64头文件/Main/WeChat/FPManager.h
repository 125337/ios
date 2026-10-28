@interface FPManager : MMRootService <PBMessageObserverDelegate, MMKernelExt, MMServiceProtocol>
{
    basic_string<char, std::char_traits<char>, std::allocator<char>> devToken; // +0x8
    unsigned int fpcgi_count; // +0x20
    BOOL isRefreshWaiting; // +0x24
}
- (id)init;
- (void)dealloc;
- (void)onServiceEnterForeground;
- (void)onServiceClearData;
- (void)onAuthOK;
- (void)onMainControllStart;
- (void)_checkRefresh;
- (void)delayRefresh;
- (void)checkRefresh;
- (void)checkRefreshRetry;
- (void)checkRefreshForce;
- (BOOL)isReqTooMuch;
- (void)doFPFresh;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)setFreshTime;
- (void)updateResponse:(id)arg1 Event:(unsigned int)arg2;
- (id)getDevTokenSKBuf;
- (basic_string<char, std::char_traits<char>, std::allocator<char>>)getDevToken;
- (void)handleFpExtids:(id)arg1;
- (id)getWAID;
- (id)getLKID;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
