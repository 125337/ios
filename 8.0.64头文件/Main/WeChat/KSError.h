@interface KSError : NSObject
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (BOOL)fillError:(id *)arg1 withDomain:(id)arg2 code:(long long)arg3 description:(id)arg4;
+ (BOOL)clearError:(id *)arg1;
@end
