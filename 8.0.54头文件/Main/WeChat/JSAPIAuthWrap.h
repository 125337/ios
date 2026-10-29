@interface JSAPIAuthWrap : NSObject
{
    NSString * _url; // +0x8
    NSString * _apiName; // +0x10
    NSString * _appId; // +0x18
    NSString * _timeStamp; // +0x20
    NSString * _nouce; // +0x28
    NSString * _scope; // +0x30
    NSString * _ticket; // +0x38
    NSString * _signature; // +0x40
    NSData * _apiArgs; // +0x48
    NSString * _signatureMethod; // +0x50
    long long _signatureType; // +0x58
    JSAPIAuthInfo * _authInfo; // +0x60
    JSScopeAuthInfo * _scopeAuthInfo; // +0x68
}
- (id)url;
- (void)setUrl:(id)arg1;
- (id)apiName;
- (void)setApiName:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)timeStamp;
- (void)setTimeStamp:(id)arg1;
- (id)nouce;
- (void)setNouce:(id)arg1;
- (id)scope;
- (void)setScope:(id)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)apiArgs;
- (void)setApiArgs:(id)arg1;
- (id)signatureMethod;
- (void)setSignatureMethod:(id)arg1;
- (long long)signatureType;
- (void)setSignatureType:(long long)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (id)scopeAuthInfo;
- (void)setScopeAuthInfo:(id)arg1;
- (void).cxx_destruct;
@end

