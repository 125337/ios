@interface MMFacebookMgr : MMUserService <MMServiceProtocol, IFacebookAuthExt, PBMessageObserverDelegate>
{
    FacebookAuth * m_facebookAuth; // +0x8
}
- (void)dealloc;
- (BOOL)hasInitSDK;
- (id)m_facebookAuth;
- (id)getFacebookName;
- (BOOL)isFacebookBounded;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)tryBindFacebook;
- (void)tryConnectFacebook;
- (BOOL)tryExtendToken;
- (void)tryUnBindFacebook;
- (void)setFacebookUsageType:(long long)arg1;
- (BOOL)needSetFacebookUsageType;
- (void)updateTokenToSvr;
- (void)fbDidLogin;
- (void)fbDidNotLogin:(BOOL)arg1;
- (void)onExtendTokenFinish:(BOOL)arg1;
- (void)clearFacebookToken;
- (void)verifyAccessTokenValid:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)setM_facebookAuth:(id)arg1;
- (void).cxx_destruct;
@end

