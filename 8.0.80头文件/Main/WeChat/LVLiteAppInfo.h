@interface LVLiteAppInfo : NSObject
{
    int _iLinkVersion; // +0x8
    NSString * _appId; // +0x10
    NSString * _groupId; // +0x18
    NSString * _url; // +0x20
    NSString * _md5; // +0x28
    NSString * _signatureKey; // +0x30
    NSString * _path; // +0x38
    NSString * _type; // +0x40
    NSString * _patchId; // +0x48
    NSString * _version; // +0x50
    NSString * _minliteappversion; // +0x58
    NSString * _minlvcppversion; // +0x60
    NSString * _maxliteappversion; // +0x68
    long long _updateTime; // +0x70
    long long _lastUseTime; // +0x78
    NSData * _extra; // +0x80
    NSString * _openOption; // +0x88
}
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
- (id)version;
- (void)setVersion:(id)arg1;
- (int)iLinkVersion;
- (void)setILinkVersion:(int)arg1;
- (id)minliteappversion;
- (void)setMinliteappversion:(id)arg1;
- (id)minlvcppversion;
- (void)setMinlvcppversion:(id)arg1;
- (id)maxliteappversion;
- (void)setMaxliteappversion:(id)arg1;
- (long long)updateTime;
- (void)setUpdateTime:(long long)arg1;
- (long long)lastUseTime;
- (void)setLastUseTime:(long long)arg1;
- (id)extra;
- (void)setExtra:(id)arg1;
- (id)openOption;
- (void)setOpenOption:(id)arg1;
- (void).cxx_destruct;
@end
