@interface TXCRSA : NSObject
+ (id)stripPublicKeyHeader:(id)arg1;
+ (id)decodePublicKey:(id)arg1;
+ (__SecKey *)addPublicKey:(id)arg1;
+ (__SecKey *)createPublicSeckeyWithNSString:(id)arg1;
+ (id)decryptData:(id)arg1 withKeyRef:(__SecKey *)arg2;
+ (id)decryptData:(id)arg1 publicKey:(id)arg2;
@end
