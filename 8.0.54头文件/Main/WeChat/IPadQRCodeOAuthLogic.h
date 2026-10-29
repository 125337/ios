@interface IPadQRCodeOAuthLogic : MMObject
{
    BOOL _hasStartQuery; // +0x8
    unsigned int _refreshQRcodeRetryCount; // +0xc
    unsigned int _svrErrRetryCount; // +0x10
    unsigned int _networkErrRetryCount; // +0x14
    unsigned int _lastQueryErrCode; // +0x18
    unsigned int _queryTimeout; // +0x1c
    id <IPadQRCodeOAuthLogicDelegate> _delegate; // +0x20
    OpenSDKOAuthRequest * _reqInfo; // +0x28
    QRCodeOAuthData * _authData; // +0x30
    MMTimer * _timer; // +0x38
    unsigned long long _queryStartTimeInMs; // +0x40
    unsigned long long _queryIntervalInMs; // +0x48
}
- (void)dealloc;
- (void)startLogicWithReqInfo:(id)arg1;
- (void)restartLogic;
- (void)sendCancelOperationToSvr;
- (void)resetState;
- (void)requestAuthData;
- (void)handleReqAuthResp:(id)arg1 error:(id)arg2;
- (void)startQueryQRCodeScanState;
- (void)checkStartQueryQRCodeScanState;
- (void)handleQueryState:(id)arg1 error:(id)arg2;
- (void)onOccurError:(id)arg1 errCode:(int)arg2 errType:(unsigned int)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reqInfo;
- (void)setReqInfo:(id)arg1;
- (id)authData;
- (void)setAuthData:(id)arg1;
- (BOOL)hasStartQuery;
- (void)setHasStartQuery:(BOOL)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (unsigned int)refreshQRcodeRetryCount;
- (void)setRefreshQRcodeRetryCount:(unsigned int)arg1;
- (unsigned int)svrErrRetryCount;
- (void)setSvrErrRetryCount:(unsigned int)arg1;
- (unsigned int)networkErrRetryCount;
- (void)setNetworkErrRetryCount:(unsigned int)arg1;
- (unsigned int)lastQueryErrCode;
- (void)setLastQueryErrCode:(unsigned int)arg1;
- (unsigned long long)queryStartTimeInMs;
- (void)setQueryStartTimeInMs:(unsigned long long)arg1;
- (unsigned int)queryTimeout;
- (void)setQueryTimeout:(unsigned int)arg1;
- (unsigned long long)queryIntervalInMs;
- (void)setQueryIntervalInMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

