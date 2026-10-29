@interface MMKeychain : NSObject
+ (id)getKeychainQuery:(id)arg1 accessGroup:(id)arg2 migratable:(BOOL)arg3;
+ (BOOL)save:(id)arg1 data:(id)arg2 accessGroup:(id)arg3 migratable:(BOOL)arg4;
+ (BOOL)save:(id)arg1 data:(id)arg2 accessGroup:(id)arg3 migratable:(BOOL)arg4 error:(int *)arg5;
+ (id)load:(id)arg1 accessGroup:(id)arg2 migratable:(BOOL)arg3;
+ (id)load:(id)arg1 accessGroup:(id)arg2 migratable:(BOOL)arg3 error:(int *)arg4;
+ (BOOL)deleteWithService:(id)arg1 accessGroup:(id)arg2 migratable:(BOOL)arg3;
+ (BOOL)deleteWithService:(id)arg1 accessGroup:(id)arg2 migratable:(BOOL)arg3 error:(int *)arg4;
+ (id)bundleSeedID;
+ (id)accessGroup;
@end
