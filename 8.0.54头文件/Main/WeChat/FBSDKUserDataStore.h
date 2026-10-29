@interface FBSDKUserDataStore : NSObject
+ (void)initialize;
+ (void)setAndHashUserEmail:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 phone:(id)arg4 dateOfBirth:(id)arg5 gender:(id)arg6 city:(id)arg7 state:(id)arg8 zip:(id)arg9 country:(id)arg10;
+ (void)setAndHashData:(id)arg1 forType:(id)arg2;
+ (void)setHashData:(id)arg1 forType:(id)arg2;
+ (void)clearDataForType:(id)arg1;
+ (id)getHashedData;
+ (id)stringByHashedData:(id)arg1;
+ (id)encryptData:(id)arg1 type:(id)arg2;
+ (id)normalizeData:(id)arg1 type:(id)arg2;
+ (BOOL)maybeSHA256Hashed:(id)arg1;
@end

