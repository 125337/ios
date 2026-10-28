@interface LiteAppBaseLibInfo : NSObject <NSCoding>
{
    NSString * _majorVersion; // +0x8
    NSString * _url; // +0x10
    NSString * _md5; // +0x18
    NSString * _signatureKey; // +0x20
    NSString * _path; // +0x28
    NSString * _type; // +0x30
    NSString * _patchId; // +0x38
    unsigned long long _updateTime; // +0x40
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)majorVersion;
- (void)setMajorVersion:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)signatureKey;
- (void)setSignatureKey:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)patchId;
- (void)setPatchId:(id)arg1;
- (unsigned long long)updateTime;
- (void)setUpdateTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
