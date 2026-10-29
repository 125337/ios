@interface _TtC11MidasPayKit11MidasPayAPI : NSObject
{
     currentEnvrionment; // +0x8
     currentLocale; // +0x10
     currentUniversalLink; // +0x18
}
+ (id)sharedInstance;
+ (void)setRuntimeDelegateWithDelegate:(id)arg1;
+ (void)setTrackerInfoWithDomain:(id)arg1 path:(id)arg2;
+ (void)setCustomLoadingWithLoading:(id)arg1;
+ (void)clearMemory;
+ (BOOL)handleOpenURLWithUrl:(id)arg1 sourceApplication:(id)arg2;
+ (BOOL)handleOpenUniversalLinkWithUserActivity:(id)arg1;
- (id)init;
- (long long)currentEnvrionment;
- (void)setCurrentEnvrionment:(long long)arg1;
- (long long)currentLocale;
- (void)setCurrentLocale:(long long)arg1;
- (id)currentUniversalLink;
- (void)setCurrentUniversalLink:(id)arg1;
- (void)payWithContent:(id)arg1 forUser:(id)arg2 completion:(id /* block */)arg3;
- (void)signWithContent:(id)arg1 forUser:(id)arg2 completion:(id /* block */)arg3;
- (void).cxx_destruct;
@end
