@interface WCFinderLivePersonalCenterWechatMentionCell : UITableViewCell <WCFinderHeadImageViewDelegate, WCFinderContactExt, WCFinderLivePersonalCenterWechatMentionCellVMDelegate, WCFinderLivePersonalCenterMentionTitleViewDelegate>
{
    BOOL _needUpdateCellSize; // +0x8
    id <WCFinderLivePersonalCenterWechatMentionCellDelegate> _delegate; // +0x10
    UIView * _lineView; // +0x18
    WCFinderHeadImageView * _headImageView; // +0x20
    MMWebImageView * _thumbImageView; // +0x28
    WCFinderLivePersonalCenterMentionTitleView * _titleView; // +0x30
    WCFinderRichTextView * _contentTextView; // +0x38
    WCFinderLivePersonalCenterWechatMentionCellVM * _viewModel; // +0x40
}
+ (double)calucateCellHeightWithViewModel:(id)arg1 width:(double)arg2;
+ (double)cellBottomMargin;
+ (double)mentionInteractionBtnHeight;
+ (CGSize)mentionInteractionIconSize;
+ (double)titleMarginWithVM:(id)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)setNeedsUpdateCellSize;
- (void)updateNofiyCenterCellWithViewModel:(id)arg1 width:(double)arg2;
- (void)layoutUIWithViewModel:(id)arg1 width:(double)arg2;
- (void)setUpUI;
- (void)setUpViewLayout;
- (void)updateSeperatorFull:(BOOL)arg1;
- (void)onMentionTitleViewClickFollowButton:(id)arg1;
- (void)onMentionTitleViewClickNickName:(id)arg1;
- (void)onMentionTitleViewClickUserRelationshipTag:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onWechatMentionCellViewModelCellHeightChanged:(id)arg1;
- (void)finderHeadImageViewDidClick:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)needUpdateCellSize;
- (void)setNeedUpdateCellSize:(BOOL)arg1;
- (void).cxx_destruct;
@end
