@interface BraceletRankNewLikeButton : MMUIButton
{
    BOOL _isSelf; // +0x8
    BOOL _hasLike; // +0x9
    unsigned int _likeCount; // +0xc
}
- (id)initWithLikeCount:(unsigned int)arg1 hasLike:(BOOL)arg2 isSelf:(BOOL)arg3;
- (void)initView;
- (void)animatChangeToLikeState:(BOOL)arg1;
- (BOOL)isSelf;
- (void)setIsSelf:(BOOL)arg1;
- (unsigned int)likeCount;
- (void)setLikeCount:(unsigned int)arg1;
- (BOOL)hasLike;
- (void)setHasLike:(BOOL)arg1;
@end
