@interface MPCommentReply : MMObject
{
    BOOL _isLike; // +0x8
    BOOL _isDelete; // +0x9
    BOOL _isReplySelected; // +0xa
    BOOL _isFromAuthor; // +0xb
    unsigned int _createTime; // +0xc
    unsigned int _replyId; // +0x10
    unsigned int _likeCount; // +0x14
    NSString * _content; // +0x18
}
- (id)description;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)replyId;
- (void)setReplyId:(unsigned int)arg1;
- (unsigned int)likeCount;
- (void)setLikeCount:(unsigned int)arg1;
- (BOOL)isLike;
- (void)setIsLike:(BOOL)arg1;
- (BOOL)isDelete;
- (void)setIsDelete:(BOOL)arg1;
- (BOOL)isReplySelected;
- (void)setIsReplySelected:(BOOL)arg1;
- (BOOL)isFromAuthor;
- (void)setIsFromAuthor:(BOOL)arg1;
- (void).cxx_destruct;
@end
