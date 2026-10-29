@interface WCNotificationEncryptionInfo : NSObject
{
    NSNumber * _identifier; // +0x8
    NSData * _publicKey; // +0x10
    NSData * _privateKey; // +0x18
}
+ (id)defaultEncryptionInfo;
+ (id)encryptionInfoWithInfos:(id)arg1 error:(id *)arg2;
+ (id)infoFromDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3;
- (id)dictionary;
- (id)description;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)publicKey;
- (void)setPublicKey:(id)arg1;
- (id)privateKey;
- (void)setPrivateKey:(id)arg1;
- (void).cxx_destruct;
@end

