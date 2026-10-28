@interface MMFinderLiveRealNameFriendLikeGuideSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    UILabel * _titleLabel; // +0x8
    UILabel * _subTitleLabel; // +0x10
    UILabel * _wechatRoleLabel; // +0x18
    UILabel * _nickNameLabel; // +0x20
    MMHeadImageView * _headerImageView; // +0x28
    id /* block */ _cancelRecommendBlock; // +0x30
    id /* block */ _confirmBlock; // +0x38
    id /* block */ _disAppearAction; // +0x40
}
- (id)initWithTaskId:(id)arg1 cancelRecommendBlock:(id /* block */)arg2 confirmBlock:(id /* block */)arg3 disAppearAction:(id /* block */)arg4;
- (void)initViews;
- (void)layoutSubviews;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)colorForPageSheetCancelButtonTitle;
- (long long)styleForPageSheetCancelButton;
- (id)colorForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)wechatRoleLabel;
- (void)setWechatRoleLabel:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)headerImageView;
- (void)setHeaderImageView:(id)arg1;
- (id /* block */)cancelRecommendBlock;
- (void)setCancelRecommendBlock:(id /* block */)arg1;
- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg1;
- (id /* block */)disAppearAction;
- (void)setDisAppearAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
