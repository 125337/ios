@interface MMMusicLiveBaseMsg : NSObject
{
    BOOL _bLike; // +0x8
    BOOL _isMyPost; // +0x9
    unsigned int _createTime; // +0xc
    unsigned int _likeCount; // +0x10
    NSString * _fromUsername; // +0x18
    unsigned long long _msgId; // +0x20
    NSString * _headImgUrl; // +0x28
    NSString * _nickName; // +0x30
    NSString * _content; // +0x38
    NSString * _mvPostNickname; // +0x40
    unsigned long long _mvId; // +0x48
    NSString * _nonceId; // +0x50
}
- (id)fromUsername;
- (void)setFromUsername:(id)arg1;
- (unsigned long long)msgId;
- (void)setMsgId:(unsigned long long)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (BOOL)bLike;
- (void)setBLike:(BOOL)arg1;
- (unsigned int)likeCount;
- (void)setLikeCount:(unsigned int)arg1;
- (BOOL)isMyPost;
- (void)setIsMyPost:(BOOL)arg1;
- (id)mvPostNickname;
- (void)setMvPostNickname:(id)arg1;
- (unsigned long long)mvId;
- (void)setMvId:(unsigned long long)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (void).cxx_destruct;
@end
