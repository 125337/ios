@interface FBSDKDynamicFrameworkLoader : NSObject
+ (__SecRandom *)loadkSecRandomDefault;
+ (void *)loadkSecAttrAccessible;
+ (void *)loadkSecAttrAccessibleAfterFirstUnlockThisDeviceOnly;
+ (void *)loadkSecAttrAccount;
+ (void *)loadkSecAttrService;
+ (void *)loadkSecAttrGeneric;
+ (void *)loadkSecValueData;
+ (void *)loadkSecClassGenericPassword;
+ (void *)loadkSecAttrAccessGroup;
+ (void *)loadkSecMatchLimitOne;
+ (void *)loadkSecMatchLimit;
+ (void *)loadkSecReturnData;
+ (void *)loadkSecClass;
@end

