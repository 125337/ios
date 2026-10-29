@interface WCFinderRealNameVerifyParams : NSObject
{
    BOOL _hasSetFinderUsername; // +0x8
    int _opType; // +0xc
    NSString * _finderUsername; // +0x10
    NSString * _authToken; // +0x18
    NSString * _code; // +0x20
    NSString * _phoneCode; // +0x28
    NetworkIdentityAuthInfo * _networkIdentityAuthInfo; // +0x30
}
+ (id)paramsWithOpType:(int)arg1;
- (void)setFinderUsername:(id)arg1;
- (int)opType;
- (void)setOpType:(int)arg1;
- (id)finderUsername;
- (id)authToken;
- (void)setAuthToken:(id)arg1;
- (id)code;
- (void)setCode:(id)arg1;
- (id)phoneCode;
- (void)setPhoneCode:(id)arg1;
- (id)networkIdentityAuthInfo;
- (void)setNetworkIdentityAuthInfo:(id)arg1;
- (BOOL)hasSetFinderUsername;
- (void)setHasSetFinderUsername:(BOOL)arg1;
- (void).cxx_destruct;
@end
