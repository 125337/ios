@interface WCFinderCommentLikeView : MMUIButton
{
    BOOL _isLiked; // +0x8
    UIImageView * _likeImageView; // +0x10
    UILabel * _likeNumbLabel; // +0x18
}
- (id)init;
- (void)setUpUI;
- (void)updateCommenLikeStaus:(BOOL)arg1 isCommentClose:(BOOL)arg2 likeNumber:(unsigned long long)arg3;
- (id)likeImageView;
- (void)setLikeImageView:(id)arg1;
- (id)likeNumbLabel;
- (void)setLikeNumbLabel:(id)arg1;
- (BOOL)isLiked;
- (void)setIsLiked:(BOOL)arg1;
- (void).cxx_destruct;
@end

