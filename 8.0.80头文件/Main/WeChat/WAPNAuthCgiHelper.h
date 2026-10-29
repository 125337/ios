@interface WAPNAuthCgiHelper : NSObject
{
    BOOL _isRealtime; // +0x8
    unsigned int _source; // +0xc
    unsigned int _subSource; // +0x10
    NSString * _appid; // +0x18
}
- (id)initWithAppid:(id)arg1;
- (id)buildExtInfo;
- (unsigned int)sendCgiWithRequest:(id)arg1 cgi:(unsigned int)arg2 respClassString:(id)arg3 completion:(id /* block */)arg4;
- (void)sendCgiWithRequest:(id)arg1 cgi:(unsigned int)arg2 respClass:(Class)arg3 defaultErrMsg:(id)arg4 onResult:(id /* block */)arg5;
- (void)getUserAllPhoneWithCompletion:(id /* block */)arg1;
- (id)sheetInfoFromResponse:(id)arg1;
- (void)sendVerifyCodeToMobile:(id)arg1 mobileType:(long long)arg2 requestId:(id)arg3 scene:(long long)arg4 completion:(id /* block */)arg5;
- (void)checkVerifyCodeForMobile:(id)arg1 code:(id)arg2 mobileType:(long long)arg3 requestId:(id)arg4 scene:(long long)arg5 completion:(id /* block */)arg6;
- (void)updateUserPhone:(id)arg1 type:(unsigned long long)arg2 requestId:(id)arg3 completion:(id /* block */)arg4;
- (void)getGatewayUrlListWithCompletion:(id /* block */)arg1;
- (void)getGatewayPhoneNumberWithMessageId:(id)arg1 tokenList:(id)arg2 completion:(id /* block */)arg3;
- (void)getMobileUserCount:(id)arg1 mobileType:(long long)arg2 completion:(id /* block */)arg3;
- (void)removeMobileUser:(id)arg1 mobileType:(long long)arg2 completion:(id /* block */)arg3;
- (void)setLastUseMobile:(id)arg1 completion:(id /* block */)arg2;
- (id)appid;
- (void)setAppid:(id)arg1;
- (BOOL)isRealtime;
- (void)setIsRealtime:(BOOL)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (unsigned int)subSource;
- (void)setSubSource:(unsigned int)arg1;
- (void).cxx_destruct;
@end
