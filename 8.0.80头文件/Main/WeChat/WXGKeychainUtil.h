@interface WXGKeychainUtil : NSObject
+ (id)createKeychainQueryWithAccount:(id)arg1 service:(id)arg2;
+ (BOOL)savePassword:(id)arg1 forAccount:(id)arg2 service:(id)arg3;
+ (id)findPasswordForAccount:(id)arg1 service:(id)arg2;
+ (BOOL)updatePassword:(id)arg1 forAccount:(id)arg2 service:(id)arg3;
+ (BOOL)deletePasswordForAccount:(id)arg1 service:(id)arg2;
@end
