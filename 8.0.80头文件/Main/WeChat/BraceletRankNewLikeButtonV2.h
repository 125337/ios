@interface BraceletRankNewLikeButtonV2 : BraceletRankNewLikeButton
{
    BOOL _hasLike; // +0x8
}
- (id)initWithLikeCount:(unsigned int)arg1 hasLike:(BOOL)arg2 isSelf:(BOOL)arg3;
- (void)initView;
- (void)animatChangeToLikeState:(BOOL)arg1;
- (BOOL)hasLike;
- (void)setHasLike:(BOOL)arg1;
@end
