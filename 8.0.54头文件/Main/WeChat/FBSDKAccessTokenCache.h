@interface FBSDKAccessTokenCache : NSObject <FBSDKAccessTokenCaching>
{
    FBSDKKeychainStore * _keychainStore; // +0x8
}
- (id)init;
- (id)accessToken;
- (void)setAccessToken:(id)arg1;
- (void)clearCache;
- (void).cxx_destruct;
@end

