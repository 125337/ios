@interface TRTCPayloadPrivateEncryptionConfig : NSObject <NSCopying>
{
    unsigned long long _encryptionAlgorithm; // +0x8
    NSString * _encryptionKey; // +0x10
    NSData * _encryptionSalt; // +0x18
}
- (PayloadPrivateEncryptionConfig)convertToCppConfig:(BOOL)arg1;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)encryptionAlgorithm;
- (void)setEncryptionAlgorithm:(unsigned long long)arg1;
- (id)encryptionKey;
- (void)setEncryptionKey:(id)arg1;
- (id)encryptionSalt;
- (void)setEncryptionSalt:(id)arg1;
- (void).cxx_destruct;
@end
