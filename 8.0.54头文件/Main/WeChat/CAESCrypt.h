@interface CAESCrypt : NSObject
{
    _CCCryptor * m_cryptorRef; // +0x8
}
+ (id)fastAESEncryptWithKey:(id)arg1 Data:(id)arg2;
+ (id)fastAESDecryptWithKey:(id)arg1 Data:(id)arg2;
+ (id)fastAESECBEncryptWithKey:(id)arg1 Data:(id)arg2 Final:(BOOL)arg3;
+ (id)fastAESECBDecryptWithKey:(id)arg1 Data:(id)arg2 Final:(BOOL)arg3;
+ (id)AESEncryptWithKey:(id)arg1 Data:(id)arg2;
+ (id)AESDecryptWithKey:(id)arg1 Data:(id)arg2;
+ (id)AESECBEncryptWithKey:(id)arg1 Data:(id)arg2 Final:(BOOL)arg3;
+ (id)AESECBDecryptWithKey:(id)arg1 Data:(id)arg2 Final:(BOOL)arg3;
+ (id)AESGCMDecryptWithKey:(id)arg1 Data:(id)arg2;
- (void)dealloc;
- (id)initCBCEncryptWithKey:(id)arg1;
- (id)initCBCDecryptWithKey:(id)arg1;
- (id)initECBEncryptWithKey:(id)arg1;
- (id)initECBDecryptWithKey:(id)arg1;
- (void)makeCryptWithOP:(unsigned int)arg1 withMode:(unsigned int)arg2 withKey:(id)arg3;
- (id)cryptUpdateWithData:(id)arg1 Final:(BOOL)arg2;
- (id)encryptCBCWithData:(id)arg1 Final:(BOOL)arg2;
- (id)decryptCBCWithData:(id)arg1 Final:(BOOL)arg2;
- (id)encryptECBWithData:(id)arg1 Final:(BOOL)arg2;
- (id)decryptECBWithData:(id)arg1 Final:(BOOL)arg2;
@end

