@interface MPCommentMsg : MMObject
{
    BOOL _isLike; // +0x8
    BOOL _isFromFriend; // +0x9
    BOOL _isFromMe; // +0xa
    BOOL _isTop; // +0xb
    BOOL _isSelected; // +0xc
    unsigned int _userCommentId; // +0x10
    unsigned int _personalCommentId; // +0x14
    unsigned int _createTime; // +0x18
    unsigned int _likeCount; // +0x1c
    unsigned int _likeId; // +0x20
    NSString * _url; // +0x28
    unsigned long long _commentTopicId; // +0x30
    NSString * _openId; // +0x38
    NSString * _nickName; // +0x40
    NSString * _headImageUrl; // +0x48
    NSString * _content; // +0x50
    MPCommentReply * _reply; // +0x58
    NSMutableArray * _replyList; // +0x60
}
- (id)description;
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned long long)commentTopicId;
- (void)setCommentTopicId:(unsigned long long)arg1;
- (unsigned int)userCommentId;
- (void)setUserCommentId:(unsigned int)arg1;
- (unsigned int)personalCommentId;
- (void)setPersonalCommentId:(unsigned int)arg1;
- (id)openId;
- (void)setOpenId:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)likeCount;
- (void)setLikeCount:(unsigned int)arg1;
- (BOOL)isLike;
- (void)setIsLike:(BOOL)arg1;
- (BOOL)isFromFriend;
- (void)setIsFromFriend:(BOOL)arg1;
- (BOOL)isFromMe;
- (void)setIsFromMe:(BOOL)arg1;
- (BOOL)isTop;
- (void)setIsTop:(BOOL)arg1;
- (unsigned int)likeId;
- (void)setLikeId:(unsigned int)arg1;
- (id)reply;
- (void)setReply:(id)arg1;
- (id)replyList;
- (void)setReplyList:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end

