@interface TXChorusCopyrightedMusicParams : NSObject
{
    NSString * _musicId; // +0x8
    NSString * _playToken; // +0x10
    NSString * _copyrightedLicenseKey; // +0x18
    NSString * _copyrightedLicenseUrl; // +0x20
}
- (id)musicId;
- (void)setMusicId:(id)arg1;
- (id)playToken;
- (void)setPlayToken:(id)arg1;
- (id)copyrightedLicenseKey;
- (void)setCopyrightedLicenseKey:(id)arg1;
- (id)copyrightedLicenseUrl;
- (void)setCopyrightedLicenseUrl:(id)arg1;
- (void).cxx_destruct;
@end
