@interface WCPaySecureEnclaveHelper : MMObject
+ (id)createQueryDict:(id)arg1;
+ (id)createQueryDict:(id)arg1 context:(id)arg2;
+ (BOOL)getPrivateAndPublicKey:(id)arg1 privateKey:(__SecKey * *)arg2 publicKey:(__SecKey * *)arg3;
+ (id)exportECPublicKeyToPEM:(id)arg1;
+ (BOOL)querySEKey:(id)arg1 context:(id)arg2 privateKey:(__SecKey * *)arg3;
+ (long long)createSEKey:(id)arg1;
+ (long long)deleteSEKey:(id)arg1;
+ (id)signatureData:(id)arg1 srcData:(id)arg2 context:(id)arg3 error:(id *)arg4;
+ (id)keyToData:(id)arg1;
@end
