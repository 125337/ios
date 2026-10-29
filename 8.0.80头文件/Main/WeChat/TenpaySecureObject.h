@interface TenpaySecureObject : NSObject
+ (id)SignWith3Des:(id)arg1;
+ (id)EncryptWith3Des:(id)arg1;
+ (id)EncryptWithAESCBC:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)DecryptWithAESCBC:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)getSHA256Hex:(id)arg1;
+ (id)ErrorWithCode:(int)arg1 Description:(id)arg2;
+ (id)EncryptWithRSA2048:(id)arg1 Exponent:(id)arg2 Modulus:(id)arg3 error:(id *)arg4;
+ (id)EncryptWithRSA1024:(id)arg1 Exponent:(id)arg2 Modulus:(id)arg3 error:(id *)arg4;
@end
