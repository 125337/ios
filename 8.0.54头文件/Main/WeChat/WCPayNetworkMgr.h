@interface WCPayNetworkMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    NSMutableDictionary * _startedTimeDic; // +0x8
    NSMutableDictionary * _callbacks; // +0x10
}
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (unsigned int)commonQueryCmdID:(unsigned int)arg1 bizParams:(id)arg2 wxParams:(id)arg3 completion:(id /* block */)arg4;
- (unsigned int)commonQueryCmdID:(unsigned int)arg1 bizParams:(id)arg2 wxParams:(id)arg3 routeInfo:(unsigned char)arg4 completion:(id /* block */)arg5;
- (unsigned int)commonQueryCmdIDWithTimeout:(unsigned int)arg1 bizParams:(id)arg2 wxParams:(id)arg3 timeout:(double)arg4 routeInfo:(unsigned char)arg5 completion:(id /* block */)arg6;
- (unsigned int)getIAPOrderDetailWithOrderID:(id)arg1 completion:(id /* block */)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (unsigned int)sendRequest:(id)arg1 cgi:(unsigned int)arg2 completion:(id /* block */)arg3;
- (unsigned int)sendRequestWithTimeout:(id)arg1 cgi:(unsigned int)arg2 timeout:(double)arg3 routeInfo:(unsigned char)arg4 completion:(id /* block */)arg5;
- (void)handleCommonErrorAndCleanForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)handleErrorAndClean:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)cleanForKey:(id)arg1;
- (void)debugPrintResponseWithCGIWrap:(id)arg1;
- (void)debugPrintRequestWithCGIWrap:(id)arg1;
- (id)callbacks;
- (void)setCallbacks:(id)arg1;
- (void).cxx_destruct;
@end

