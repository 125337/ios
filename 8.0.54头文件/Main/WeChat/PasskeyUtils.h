@interface PasskeyUtils : NSObject
+ (id)getPasskeyUrl;
+ (BOOL)isPasskeyIOSEnabled;
+ (BOOL)isPasskeyEnabled;
+ (BOOL)isPasskeySupportedBundle;
+ (BOOL)checkUnavailableWithShowTips:(BOOL)arg1;
+ (BOOL)canAutoShowPasskeyLogin;
+ (void)markHasAutoShowPasskeyLogin;
@end

