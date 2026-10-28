@interface EmoticonDownloadWrap : MMObject
{
    NSString * _md5; // +0x8
    NSString * _aesKey; // +0x10
    NSString * _cdnUrl; // +0x18
    NSString * _encryptUrl; // +0x20
    NSString * _externMd5; // +0x28
    NSString * _externUrl; // +0x30
    NSString * _tpUrl; // +0x38
    NSString * _authKey; // +0x40
}
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)cdnUrl;
- (void)setCdnUrl:(id)arg1;
- (id)encryptUrl;
- (void)setEncryptUrl:(id)arg1;
- (id)externMd5;
- (void)setExternMd5:(id)arg1;
- (id)externUrl;
- (void)setExternUrl:(id)arg1;
- (id)tpUrl;
- (void)setTpUrl:(id)arg1;
- (id)authKey;
- (void)setAuthKey:(id)arg1;
- (void).cxx_destruct;
@end
