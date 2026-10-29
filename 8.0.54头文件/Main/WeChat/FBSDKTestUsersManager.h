@interface FBSDKTestUsersManager : NSObject
{
    NSString * _appID; // +0x8
    NSString * _appSecret; // +0x10
    NSMutableDictionary * _accounts; // +0x18
}
+ (id)sharedInstanceForAppID:(id)arg1 appSecret:(id)arg2;
- (id)initWithAppID:(id)arg1 appSecret:(id)arg2;
- (void)requestTestAccountTokensWithArraysOfPermissions:(id)arg1 createIfNotFound:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)addTestAccountWithPermissions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)makeFriendsWithFirst:(id)arg1 second:(id)arg2 callback:(id /* block */)arg3;
- (void)removeTestAccount:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)tokenDataForTokenString:(id)arg1 permissions:(id)arg2 userId:(id)arg3;
- (id)userIdAndTokenOfExistingAccountWithPermissions:(id)arg1 skip:(id)arg2;
- (id)appAccessToken;
- (void)fetchExistingTestAccountsWithAfterCursor:(id)arg1 handler:(id /* block */)arg2;
- (void).cxx_destruct;
@end

