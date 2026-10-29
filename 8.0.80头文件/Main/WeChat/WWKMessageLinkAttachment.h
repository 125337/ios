@interface WWKMessageLinkAttachment : WWKMessageAttachment
{
    NSString * _title; // +0x8
    NSString * _summary; // +0x10
    NSString * _url; // +0x18
    NSString * _iconurl; // +0x20
    NSData * _icon; // +0x28
}
- (id)initWithDict:(id)arg1;
- (id)writeToDict:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)summary;
- (void)setSummary:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)iconurl;
- (void)setIconurl:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (void).cxx_destruct;
@end
