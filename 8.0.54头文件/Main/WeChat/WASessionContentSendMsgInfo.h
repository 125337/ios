@interface WASessionContentSendMsgInfo : NSObject
{
    unsigned int _appVersion; // +0x8
    unsigned int _appType; // +0xc
    NSString * _title; // +0x10
    NSString * _path; // +0x18
    NSString * _imageURL; // +0x20
    NSData * _imageData; // +0x28
    NSString * _appID; // +0x30
    NSString * _userName; // +0x38
}
- (id)description;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)imageURL;
- (void)setImageURL:(id)arg1;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (unsigned int)appType;
- (void)setAppType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

