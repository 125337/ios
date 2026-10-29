@interface TextStateWeAppBuffer : NSObject
{
    unsigned int _version; // +0x8
    unsigned int _versionType; // +0xc
    NSString * _appId; // +0x10
    NSString * _username; // +0x18
    NSString * _path; // +0x20
    NSString * _headImageURL; // +0x28
    NSDictionary * _extraData; // +0x30
}
- (id)initWithJumpInfo:(id)arg1;
- (id)weAppJumpInfo;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)versionType;
- (void)setVersionType:(unsigned int)arg1;
- (id)headImageURL;
- (void)setHeadImageURL:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (void).cxx_destruct;
@end

