@interface FBSDKBasicUtility : NSObject
+ (id)JSONStringForObject:(id)arg1 error:(id *)arg2 invalidObjectHandler:(id /* block */)arg3;
+ (BOOL)dictionary:(id)arg1 setJSONStringForObject:(id)arg2 forKey:(id)arg3 error:(id *)arg4;
+ (id)_convertObjectToJSONObject:(id)arg1 invalidObjectHandler:(id /* block */)arg2 stop:(BOOL *)arg3;
+ (void)dictionary:(id)arg1 setObject:(id)arg2 forKey:(id)arg3;
+ (void)array:(id)arg1 addObject:(id)arg2;
@end

