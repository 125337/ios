@interface WWKMessageGroupAttachment : WWKMessageAttachment
{
    NSArray * _contents; // +0x8
    NSString * _title; // +0x10
    unsigned long long _forwardType; // +0x18
    WWKWeChatAttachment * _dataBuff; // +0x20
}
- (id)initWithDict:(id)arg1;
- (id)writeToDict:(id)arg1;
- (id)contents;
- (void)setContents:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned long long)forwardType;
- (void)setForwardType:(unsigned long long)arg1;
- (id)dataBuff;
- (void)setDataBuff:(id)arg1;
- (void).cxx_destruct;
@end
