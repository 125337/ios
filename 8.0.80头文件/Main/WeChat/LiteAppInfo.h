@interface LiteAppInfo : NSObject <NSCoding>
{
    NSString * _appId; // +0x8
    NSString * _groupId; // +0x10
    NSString * _url; // +0x18
    NSString * _md5; // +0x20
    NSString * _signatureKey; // +0x28
    NSString * _path; // +0x30
    NSString * _type; // +0x38
    NSString * _patchId; // +0x40
    unsigned long long _updateTime; // +0x48
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
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
