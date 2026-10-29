@interface LVLiteAppBaselibInfo : NSObject
{
    int _iLinkVersion; // +0x8
    NSString * _majorVersion; // +0x10
    NSString * _url; // +0x18
    NSString * _md5; // +0x20
    NSString * _signatureKey; // +0x28
    NSString * _path; // +0x30
    NSString * _type; // +0x38
    NSString * _patchId; // +0x40
    NSString * _version; // +0x48
    long long _updateTime; // +0x50
    long long _lastUseTime; // +0x58
}
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
- (id)version;
- (void)setVersion:(id)arg1;
- (int)iLinkVersion;
- (void)setILinkVersion:(int)arg1;
- (long long)updateTime;
- (void)setUpdateTime:(long long)arg1;
- (long long)lastUseTime;
- (void)setLastUseTime:(long long)arg1;
- (void).cxx_destruct;
@end
