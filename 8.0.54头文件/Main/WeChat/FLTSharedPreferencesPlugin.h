@interface FLTSharedPreferencesPlugin : NSObject <UserDefaultsApi, FlutterPlugin>
+ (void)registerWithRegistrar:(id)arg1;
- (id)getAllWithError:(id *)arg1;
- (void)clearWithError:(id *)arg1;
- (void)removeKey:(id)arg1 error:(id *)arg2;
- (void)setBoolKey:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (void)setDoubleKey:(id)arg1 value:(id)arg2 error:(id *)arg3;
- (void)setValueKey:(id)arg1 value:(id)arg2 error:(id *)arg3;
@end

