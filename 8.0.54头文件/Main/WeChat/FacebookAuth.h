@interface FacebookAuth : MMObject
{
    long long m_uiFacebookUsageType; // +0x8
    FBSDKLoginManager * m_fbLogin; // +0x10
}
+ (void)tryInitSDK;
+ (void)asyncGetMeInfoWithSize:(CGSize)arg1 completionBlock:(id /* block */)arg2;
- (id)init;
- (void)fbDidLogin;
- (void)fbDidNotLogin:(BOOL)arg1;
- (void)fbDidExtendToken;
- (id)getAccessToken;
- (void)tryAuth;
- (void)requestNewPermission;
- (void)reAuth;
- (long long)m_uiFacebookUsageType;
- (void)setM_uiFacebookUsageType:(long long)arg1;
- (void).cxx_destruct;
@end

