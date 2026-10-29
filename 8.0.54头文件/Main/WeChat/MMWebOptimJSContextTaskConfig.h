@interface MMWebOptimJSContextTaskConfig : MMObject
{
    unsigned int _bizScene; // +0x8
    unsigned int _subBizScene; // +0xc
    NSString * _domain; // +0x10
    NSString * _path; // +0x18
    NSString * _manifestUrl; // +0x20
    NSString * _appId; // +0x28
    NSString * _userName; // +0x30
    NSData * _businessData; // +0x38
    NSData * _jsapiControlBytesData; // +0x40
}
- (BOOL)isValid;
- (id)taskId;
- (id)description;
- (id)domain;
- (void)setDomain:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)manifestUrl;
- (void)setManifestUrl:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)bizScene;
- (void)setBizScene:(unsigned int)arg1;
- (unsigned int)subBizScene;
- (void)setSubBizScene:(unsigned int)arg1;
- (id)businessData;
- (void)setBusinessData:(id)arg1;
- (id)jsapiControlBytesData;
- (void)setJsapiControlBytesData:(id)arg1;
- (void).cxx_destruct;
@end

