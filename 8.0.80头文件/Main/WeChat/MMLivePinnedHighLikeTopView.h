@interface MMLivePinnedHighLikeTopView : UIView <PAGViewListener>
{
    id /* block */ _likeActionBlock; // +0x8
    id /* block */ _likeCountProvider; // +0x10
    MMLiveCommentPubbleCell * _pubbleCell; // +0x18
    MMUIButton * _likeButton; // +0x20
    PAGView * _likeAnimationView; // +0x28
    MMLiveCommentDataItem * _commentItem; // +0x30
}
- (void)configureWithPubbleCellFrame:(id)arg1 commentItem:(id)arg2;
- (void)reloadLikeInfo;
- (void)layoutSubviews;
- (void)setupLikeButtonIfNeeded;
- (void)updateLikeButtonAppearance;
- (void)onLikeButtonClick:(id)arg1;
- (void)playLikeAnimation;
- (id)createLikeAnimationView;
- (void)removeLikeAnimation;
- (void)onAnimationStart:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)dealloc;
- (id /* block */)likeActionBlock;
- (void)setLikeActionBlock:(id /* block */)arg1;
- (id /* block */)likeCountProvider;
- (void)setLikeCountProvider:(id /* block */)arg1;
- (id)pubbleCell;
- (void)setPubbleCell:(id)arg1;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (id)likeAnimationView;
- (void)setLikeAnimationView:(id)arg1;
- (id)commentItem;
- (void)setCommentItem:(id)arg1;
- (void).cxx_destruct;
@end
