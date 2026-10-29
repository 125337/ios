@interface FBSDKCrypto : NSObject
{
    NSData * _encryptionKeyData; // +0x8
    NSData * _macKeyData; // +0x10
}
+ (id)makeMasterKey;
+ (id)randomBytes:(unsigned long long)arg1;
+ (id)randomString:(unsigned long long)arg1;
- (id)initWithMasterKey:(id)arg1;
- (id)initWithEncryptionKey:(id)arg1 macKey:(id)arg2;
- (void)dealloc;
- (id)encrypt:(id)arg1 additionalDataToSign:(id)arg2;
- (id)decrypt:(id)arg1 additionalSignedData:(id)arg2;
- (id)_macForIV:(id)arg1 cipherData:(id)arg2 additionalDataToSign:(id)arg3;
- (void).cxx_destruct;
@end

