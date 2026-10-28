@interface TXChorusExternalMusicParams : NSObject
{
    NSString * _musicId; // +0x8
    NSString * _musicUrl; // +0x10
    NSString * _accompanyUrl; // +0x18
    long long _isEncrypted; // +0x20
    long long _encryptBlockLength; // +0x28
}
- (id)musicId;
- (void)setMusicId:(id)arg1;
- (id)musicUrl;
- (void)setMusicUrl:(id)arg1;
- (id)accompanyUrl;
- (void)setAccompanyUrl:(id)arg1;
- (long long)isEncrypted;
- (void)setIsEncrypted:(long long)arg1;
- (long long)encryptBlockLength;
- (void)setEncryptBlockLength:(long long)arg1;
- (void).cxx_destruct;
@end
