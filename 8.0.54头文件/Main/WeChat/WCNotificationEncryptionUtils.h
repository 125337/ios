@interface WCNotificationEncryptionUtils : NSObject
+ (void)reportDecryptErrorInfo:(id)arg1;
+ (void)reportDecryptError:(id)arg1 withPayload:(id)arg2 isFromAPNS:(BOOL)arg3;
+ (void)reportGenInfoError:(id)arg1 envInfo:(id)arg2;
+ (void)reportCacheDecryptErrorInfoWhenAppLaunching;
+ (BOOL)isUsingCustomCache;
+ (id)cacheInfoQueue;
+ (double)createTime;
+ (BOOL)saveInfoQueue:(id)arg1 envInfo:(id)arg2;
+ (id)infoForIdentifier:(unsigned int)arg1;
+ (void)clearCacheInfoQueue;
+ (id)activeInfo;
+ (BOOL)hasEncryptionWithPayload:(id)arg1;
+ (id)decryptPayload:(id)arg1 isFromAPNS:(BOOL)arg2;
@end

