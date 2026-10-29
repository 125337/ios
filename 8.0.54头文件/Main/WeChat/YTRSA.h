@interface YTRSA : NSObject
+ (id)stripPublicKeyHeader:(id)arg1;
+ (id)stripPrivateKeyHeader:(id)arg1;
+ (__SecKey *)addPublicKey:(id)arg1;
+ (__SecKey *)addPrivateKey:(id)arg1;
+ (id)encryptData:(id)arg1 withKeyRef:(__SecKey *)arg2;
+ (id)encryptString:(id)arg1 privateKey:(id)arg2;
+ (id)encryptData:(id)arg1 privateKey:(id)arg2;
+ (id)decryptData:(id)arg1 withKeyRef:(__SecKey *)arg2;
+ (id)decryptString:(id)arg1 privateKey:(id)arg2;
+ (id)decryptData:(id)arg1 privateKey:(id)arg2;
+ (id)encryptString:(id)arg1 publicKey:(id)arg2;
+ (id)encryptData:(id)arg1 publicKey:(id)arg2;
+ (id)decryptString:(id)arg1 publicKey:(id)arg2;
+ (id)decryptData:(id)arg1 publicKey:(id)arg2;
@end

