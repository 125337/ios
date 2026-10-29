@interface WCPhotoMutipleImageBottomView : UIView
{
    BOOL _enablesHotAreaOptimization; // +0x8
    WCDataItem * _dataItem; // +0x10
    WCLikeButton * _likeButton; // +0x18
    id /* block */ _likeOpBlock; // +0x20
    MMUIButton * _commentButton; // +0x28
    id /* block */ _commentBlock; // +0x30
    MMUIButton * _detailButton; // +0x38
    id /* block */ _detailBlock; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 likeOpBlock:(id /* block */)arg3 commentBlock:(id /* block */)arg4 detailBlock:(id /* block */)arg5;
- (void)initView;
- (void)initLikeButton;
- (void)initCommentButton;
- (void)initDetailButton;
- (void)updateWithDataItem:(id)arg1;
- (void)layoutSubviews;
- (void)updateHotArea;
- (void)onCommentButtonClicked:(id)arg1;
- (void)onDetailButtonClicked:(id)arg1;
- (CGSize)buttonSize:(id)arg1 minTitleWidth:(double)arg2 maxButtonWith:(double)arg3;
- (id)suitableFontSizeForLikeButton:(id)arg1 commentButton:(id)arg2 detailButton:(id)arg3;
- (BOOL)canEnableInteractionButtons;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (id /* block */)likeOpBlock;
- (void)setLikeOpBlock:(id /* block */)arg1;
- (id)commentButton;
- (void)setCommentButton:(id)arg1;
- (id /* block */)commentBlock;
- (void)setCommentBlock:(id /* block */)arg1;
- (id)detailButton;
- (void)setDetailButton:(id)arg1;
- (id /* block */)detailBlock;
- (void)setDetailBlock:(id /* block */)arg1;
- (BOOL)enablesHotAreaOptimization;
- (void)setEnablesHotAreaOptimization:(BOOL)arg1;
- (void).cxx_destruct;
@end

