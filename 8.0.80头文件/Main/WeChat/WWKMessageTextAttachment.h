@interface WWKMessageTextAttachment : WWKMessageAttachment
{
    NSString * _text; // +0x8
    NSString * _msgInfoID; // +0x10
}
- (id)initWithDict:(id)arg1;
- (id)writeToDict:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)msgInfoID;
- (void)setMsgInfoID:(id)arg1;
- (void).cxx_destruct;
@end
