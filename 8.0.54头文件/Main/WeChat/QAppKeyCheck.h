@interface QAppKeyCheck : NSObject
{
    NSString * _miniProgramID; // +0x8
    NSString * _businessKey; // +0x10
}
- (void)startAppKeyCheck:(id /* block */)arg1;
- (id)createAuthenticationErrorWithCode:(long long)arg1 errorMsg:(id)arg2;
- (void)onURLFinishLoading:(id)arg1 callback:(id /* block */)arg2;
- (void)authFailedRequest:(id)arg1 authError:(id)arg2;
- (id)appendParameterString;
- (id)initWithMiniProgramID:(id)arg1 businessKey:(id)arg2;
- (id)miniProgramID;
- (void)setMiniProgramID:(id)arg1;
- (id)businessKey;
- (void)setBusinessKey:(id)arg1;
- (void).cxx_destruct;
@end

