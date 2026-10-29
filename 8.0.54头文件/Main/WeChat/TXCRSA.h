@interface TXCRSA : NSObject
+ (id)stripPrivateKeyHeader:(id)arg1;
+ (id)stripPublicKeyHeader:(id)arg1;
+ (__SecKey *)addPrivateKey:(id)arg1;
+ (__SecKey *)addPublicKey:(id)arg1;
+ (id)decryptData:(id)arg1 withKeyRef:(__SecKey *)arg2;
+ (id)decryptData:(id)arg1 privateKey:(id)arg2;
@end

