@interface MMCgiTransferMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    unsigned int _tokenExpiredtime; // +0x8
    NSString * _h5AuthToken; // +0x10
    NSString * _pubKeyToken; // +0x18
    NSMutableArray * _waitingAuthQueue; // +0x20
    NSDictionary * _cgiRouteMap; // +0x28
}
+ (BOOL)isCgiInfoValid:(id)arg1;
+ (BOOL)isCgiInfoInWhiteList:(id)arg1;
- (unsigned int)cgiIdFromParams:(id)arg1;
- (id)generateCGIWrapWithReqParam:(id)arg1;
- (void)updateCgiInfoArr:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)startExtTransferReq:(id)arg1;
- (void)startWebTransferReq:(id)arg1;
- (void)startAppBrandExtTransferReq:(id)arg1;
- (void)startAppBrandWebTransferReq:(id)arg1;
- (void)startLiteAppExtTransferReq:(id)arg1;
- (void)startLiteAppWebTransferReq:(id)arg1;
- (void)sendReqWithParams:(id)arg1;
- (void)doCgiTransferReqWithParams:(id)arg1;
- (void)sendH5AuthReq:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleH5AuthResponse:(id)arg1;
- (void)handleTransferResp:(id)arg1;
- (void)handleErrorWithResp:(int)arg1 param:(id)arg2 resp:(id)arg3;
- (id)h5AuthToken;
- (void)setH5AuthToken:(id)arg1;
- (id)pubKeyToken;
- (void)setPubKeyToken:(id)arg1;
- (id)waitingAuthQueue;
- (void)setWaitingAuthQueue:(id)arg1;
- (unsigned int)tokenExpiredtime;
- (void)setTokenExpiredtime:(unsigned int)arg1;
- (id)cgiRouteMap;
- (void)setCgiRouteMap:(id)arg1;
- (void).cxx_destruct;
@end

