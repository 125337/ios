@interface MMResDecryptUrlInfo : MMObject
{
    NSString * _resUrl; // +0x8
    NSString * _version; // +0x10
    NSString * _aesKey; // +0x18
    NSString * _md5; // +0x20
    NSString * _originalMd5; // +0x28
    NSString * _originalSha1; // +0x30
}
- (id)resUrl;
- (void)setResUrl:(id)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)aesKey;
- (void)setAesKey:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)originalMd5;
- (void)setOriginalMd5:(id)arg1;
- (id)originalSha1;
- (void)setOriginalSha1:(id)arg1;
- (void).cxx_destruct;
@end

