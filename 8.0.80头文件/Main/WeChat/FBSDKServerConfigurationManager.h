@interface FBSDKServerConfigurationManager : NSObject
+ (void)initialize;
+ (void)clearCache;
+ (id)cachedServerConfiguration;
+ (void)loadServerConfigurationWithCompletionBlock:(id /* block */)arg1;
+ (void)processLoadRequestResponse:(id)arg1 error:(id)arg2 appID:(id)arg3;
+ (id)requestToLoadServerConfiguration:(id)arg1;
+ (id)_defaultServerConfigurationForAppID:(id)arg1;
+ (void)_didProcessConfigurationFromNetwork:(id)arg1 appID:(id)arg2 error:(id)arg3;
+ (id)_parseDialogConfigurations:(id)arg1;
+ (BOOL)_serverConfigurationTimestampIsValid:(id)arg1;
+ (id /* block */)_wrapperBlockForLoadBlock:(id /* block */)arg1;
- (id)init;
@end
