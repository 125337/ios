@interface WCFinderLiveEndNavRequestCGI : WCFinderLiveBaseCgi
{
    float _longitude; // +0x8
    float _latitude; // +0xc
    unsigned long long _objectId; // +0x10
    NSString * _objectNonceId; // +0x18
    NSString * _sessionBuffer; // +0x20
    NSData * _liveCookies; // +0x28
    NSData * _lastBuffer; // +0x30
    FinderClientStatus * _status; // +0x38
    FinderLiveClientStatus * _liveStatus; // +0x40
    FinderLiveReportBaseInfo * _liveReportBaseInfo; // +0x48
    id /* block */ _successBlock; // +0x50
    id /* block */ _failureBlock; // +0x58
}
- (id)initWithTaskId:(id)arg1 objectId:(unsigned long long)arg2 objectNonceId:(id)arg3 longitude:(float)arg4 latitude:(float)arg5 sessionBuffer:(id)arg6 liveCookies:(id)arg7 status:(id)arg8 liveStatus:(id)arg9 liveReportBaseInfo:(id)arg10 lastBuffer:(id)arg11 successBlock:(id /* block */)arg12 failureBlock:(id /* block */)arg13;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)objectNonceId;
- (void)setObjectNonceId:(id)arg1;
- (float)longitude;
- (void)setLongitude:(float)arg1;
- (float)latitude;
- (void)setLatitude:(float)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)status;
- (void)setStatus:(id)arg1;
- (id)liveStatus;
- (void)setLiveStatus:(id)arg1;
- (id)liveReportBaseInfo;
- (void)setLiveReportBaseInfo:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

