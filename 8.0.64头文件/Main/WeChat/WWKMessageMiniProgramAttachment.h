@interface WWKMessageMiniProgramAttachment : WWKMessageAttachment
{
    NSString * _userName; // +0x8
    NSString * _path; // +0x10
    NSData * _hdImageData; // +0x18
    NSString * _iconUrl; // +0x20
    NSString * _name; // +0x28
    NSString * _title; // +0x30
    unsigned long long _miniProgramType; // +0x38
}
- (id)initWithDict:(id)arg1;
- (id)writeToDict:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)hdImageData;
- (void)setHdImageData:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned long long)miniProgramType;
- (void)setMiniProgramType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
