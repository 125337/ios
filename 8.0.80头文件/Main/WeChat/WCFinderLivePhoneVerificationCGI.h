@interface WCFinderLivePhoneVerificationCGI : WCFinderLiveBaseCgi
{
    int _opType; // +0x8
    unsigned int _businessId; // +0xc
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    NSString * _finderUsername; // +0x20
    NSString * _phoneNumber; // +0x28
    NSString * _smsCode; // +0x30
    NSString * _sessionID; // +0x38
    NSString * _mobileTicket; // +0x40
}
- (id)initWithFinderUsername:(id)arg1 opType:(int)arg2 phoneNumber:(id)arg3 smsCode:(id)arg4 sessionID:(id)arg5 mobileTicket:(id)arg6 businessId:(unsigned int)arg7 success:(id /* block */)arg8 fail:(id /* block */)arg9;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (int)opType;
- (void)setOpType:(int)arg1;
- (id)phoneNumber;
- (void)setPhoneNumber:(id)arg1;
- (id)smsCode;
- (void)setSmsCode:(id)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id)mobileTicket;
- (void)setMobileTicket:(id)arg1;
- (unsigned int)businessId;
- (void)setBusinessId:(unsigned int)arg1;
- (void).cxx_destruct;
@end
