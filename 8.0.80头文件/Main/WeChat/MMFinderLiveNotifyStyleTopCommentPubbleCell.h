@interface MMFinderLiveNotifyStyleTopCommentPubbleCell : MMFinderLiveNotifyStyleCommentPubbleCell
{
    UIScrollView * _commentScrollView; // +0x8
    id /* block */ _likeActionBlock; // +0x10
    id /* block */ _menuActionBlock; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    MMLiveHeadImageView * _headImageView; // +0x28
    id /* block */ _likeCountProvider; // +0x30
    MMFinderLiveNotifyStyleTopCommentPubbleSignLabelContainer * _labelContainer; // +0x38
    UIView * _scrollViewContainerView; // +0x40
    UIView * _bottomBarView; // +0x48
    UILabel * _bottomLabel; // +0x50
    MMUIButton * _likeButton; // +0x58
    UILabel * _likeCountLabel; // +0x60
}
- (id)initWithCellFrame:(id)arg1;
- (void)layoutSubviews;
- (void)layoutHeadImageView;
- (void)layoutScrollViewAndCommentLabel;
- (double)getFirstLineBottom;
- (void)updateCommentLabelOrigin;
- (void)layoutNickLabel;
- (void)updateNickLabelOrigin;
- (void)layoutLabelContainer;
- (void)setupBottomBar;
- (void)layoutBottomBar;
- (void)updateLikeInfo;
- (void)onLikeButtonClicked:(id)arg1;
- (void)onTopCommentTapped:(id)arg1;
- (void)showMenuForSelf;
- (void)showMenuForAnchorOrAssistant;
- (void)showMenuForAudience;
- (id)buildLikeMenuItem;
- (id)buildReplyMenuItem;
- (id)buildCopyMenuItem;
- (void)presentMenu:(id)arg1 firstRow:(id)arg2 secondRow:(id)arg3;
- (void)setupFinderMenuHeader:(id)arg1;
- (void)onMenuActionLike:(id)arg1;
- (void)onMenuActionUnLike:(id)arg1;
- (void)onMenuActionReply:(id)arg1;
- (void)onMenuActionCopy:(id)arg1;
- (void)onMenuActionBanComment:(id)arg1;
- (void)onMenuActionKickOut:(id)arg1;
- (void)onMenuActionProfile:(id)arg1;
- (id)createGradientLayer;
- (BOOL)isLiveAnchorNotice;
- (id)bottomLabelText;
- (id)commentScrollView;
- (void)setCommentScrollView:(id)arg1;
- (id /* block */)likeActionBlock;
- (void)setLikeActionBlock:(id /* block */)arg1;
- (id /* block */)menuActionBlock;
- (void)setMenuActionBlock:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id /* block */)likeCountProvider;
- (void)setLikeCountProvider:(id /* block */)arg1;
- (id)labelContainer;
- (void)setLabelContainer:(id)arg1;
- (id)scrollViewContainerView;
- (void)setScrollViewContainerView:(id)arg1;
- (id)bottomBarView;
- (void)setBottomBarView:(id)arg1;
- (id)bottomLabel;
- (void)setBottomLabel:(id)arg1;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (id)likeCountLabel;
- (void)setLikeCountLabel:(id)arg1;
- (void).cxx_destruct;
@end
