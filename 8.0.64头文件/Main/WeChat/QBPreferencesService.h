@interface QBPreferencesService : QBWupService
+ (id)service;
+ (void)savePreferences:(id)arg1;
- (void)getPreferences:(id /* block */)arg1;
- (id)getPreferencesWithRequest:(id)arg1 completionBlock:(id /* block */)arg2;
@end
