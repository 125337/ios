@interface MPPageCommentParam : MMObject
{
    BOOL _isSubReply; // +0x8
    unsigned int _personalCommentId; // +0xc
    NSString * _title; // +0x10
    unsigned long long _commentTopicId; // +0x18
    NSString * _replyContent; // +0x20
}
- (id)title;
- (void)setTitle:(id)arg1;
- (unsigned long long)commentTopicId;
- (void)setCommentTopicId:(unsigned long long)arg1;
- (BOOL)isSubReply;
- (void)setIsSubReply:(BOOL)arg1;
- (unsigned int)personalCommentId;
- (void)setPersonalCommentId:(unsigned int)arg1;
- (id)replyContent;
- (void)setReplyContent:(id)arg1;
- (void).cxx_destruct;
@end
