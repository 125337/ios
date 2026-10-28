@interface WWKMessageAttachmentWrapper : NSObject
{
    NSString * _name; // +0x8
    NSDate * _date; // +0x10
    NSString * _avatarUrl; // +0x18
    NSData * _avatarData; // +0x20
    WWKMessageAttachment * _attachment; // +0x28
}
- (id)initWithDict:(id)arg1;
- (id)writeToDict:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)date;
- (void)setDate:(id)arg1;
- (id)avatarUrl;
- (void)setAvatarUrl:(id)arg1;
- (id)avatarData;
- (void)setAvatarData:(id)arg1;
- (id)attachment;
- (void)setAttachment:(id)arg1;
- (void).cxx_destruct;
@end
