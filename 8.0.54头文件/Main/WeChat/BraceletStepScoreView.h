@interface BraceletStepScoreView : UIView
{
    BOOL _isLike; // +0x8
    BOOL _isSelf; // +0x9
    unsigned int _score; // +0xc
    unsigned int _likeCount; // +0x10
    id <BraceletStepScoreDelegate> _delegate; // +0x18
    SportRecord * _record; // +0x20
    BraceletRankNewLikeButton * _likeButton; // +0x28
}
+ (double)calculateHeight:(id)arg1;
+ (id)getDisplayRecord:(id)arg1;
- (id)initWithScore:(unsigned int)arg1 likeCount:(unsigned int)arg2 isLike:(BOOL)arg3 isSelf:(BOOL)arg4 arrRecords:(id)arg5 width:(double)arg6;
- (void)initView;
- (void)onClickLikeButton:(id)arg1;
- (void)clickLikeAnimate:(BOOL)arg1;
- (void)clickUnlikeAnimate:(BOOL)arg1;
- (void)onClickRecordButton;
- (id)removeAllNumberAndComma:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)score;
- (void)setScore:(unsigned int)arg1;
- (unsigned int)likeCount;
- (void)setLikeCount:(unsigned int)arg1;
- (BOOL)isLike;
- (void)setIsLike:(BOOL)arg1;
- (BOOL)isSelf;
- (void)setIsSelf:(BOOL)arg1;
- (id)record;
- (void)setRecord:(id)arg1;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (void).cxx_destruct;
@end

