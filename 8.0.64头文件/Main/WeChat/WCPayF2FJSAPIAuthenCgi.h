@interface WCPayF2FJSAPIAuthenCgi : WCPayBaseTenPayCgi
{
    NSString * _appId; // +0x8
    NSString * _package; // +0x10
    NSString * _sign; // +0x18
    NSString * _noncestr; // +0x20
    NSString * _timeStamp; // +0x28
    id <WCPayF2FJSAPIAuthCgiDelegate> _cgiDelegate; // +0x30
}
- (id)initWithDelegate:(id)arg1;
- (void)startSendRequest;
- (void)didGetTenPayResponse:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)callDelegateWithRespRetcode:(int)arg1 retmsg:(id)arg2;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)package;
- (void)setPackage:(id)arg1;
- (id)sign;
- (void)setSign:(id)arg1;
- (id)noncestr;
- (void)setNoncestr:(id)arg1;
- (id)timeStamp;
- (void)setTimeStamp:(id)arg1;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end
