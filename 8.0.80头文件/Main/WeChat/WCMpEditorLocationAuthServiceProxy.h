@interface WCMpEditorLocationAuthServiceProxy : NSObject <IMpLocationAuthService>
+ (long long)currentAuthState;
+ (void)requestAuthWithCompletion:(id /* block */)arg1;
+ (void)fetchOnceLocationWithCompletion:(id /* block */)arg1;
@end
