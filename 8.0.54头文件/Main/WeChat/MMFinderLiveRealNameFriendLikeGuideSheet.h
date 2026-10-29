@interface MMFinderLiveRealNameFriendLikeGuideSheet : MMPageSheetBaseView
{
    UIButton * _actionButton; // +0x8
    MMUIButton * _cancelRecommendButton; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _subTitleLabel; // +0x20
    UIView * _previewContainerView; // +0x28
    UIImageView * _previewImageView; // +0x30
    UIView * _fakeCellContainerView; // +0x38
    UIImageView * _fakeCellLogoImageView; // +0x40
    UILabel * _fakeCellTitleLabel; // +0x48
    MMHeadImageView * _fakeCellHeaderImageView; // +0x50
    UIView * _fakeCellHeaderReddotView; // +0x58
    UILabel * _fakeCellNickNameLabel; // +0x60
    UIImageView * _fakeCellLikeImageView; // +0x68
    UIImageView * _fakeCellArrowView; // +0x70
    id /* block */ _cancelRecommendBlock; // +0x78
    id /* block */ _confirmBlock; // +0x80
    id /* block */ _disAppearAction; // +0x88
}
- (id)initWithTaskId:(id)arg1 cancelRecommendBlock:(id /* block */)arg2 confirmBlock:(id /* block */)arg3 disAppearAction:(id /* block */)arg4;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutPreview;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)cancelRecommendButton;
- (void)setCancelRecommendButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)previewContainerView;
- (void)setPreviewContainerView:(id)arg1;
- (id)previewImageView;
- (void)setPreviewImageView:(id)arg1;
- (id)fakeCellContainerView;
- (void)setFakeCellContainerView:(id)arg1;
- (id)fakeCellLogoImageView;
- (void)setFakeCellLogoImageView:(id)arg1;
- (id)fakeCellTitleLabel;
- (void)setFakeCellTitleLabel:(id)arg1;
- (id)fakeCellHeaderImageView;
- (void)setFakeCellHeaderImageView:(id)arg1;
- (id)fakeCellHeaderReddotView;
- (void)setFakeCellHeaderReddotView:(id)arg1;
- (id)fakeCellNickNameLabel;
- (void)setFakeCellNickNameLabel:(id)arg1;
- (id)fakeCellLikeImageView;
- (void)setFakeCellLikeImageView:(id)arg1;
- (id)fakeCellArrowView;
- (void)setFakeCellArrowView:(id)arg1;
- (id /* block */)cancelRecommendBlock;
- (void)setCancelRecommendBlock:(id /* block */)arg1;
- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg1;
- (id /* block */)disAppearAction;
- (void)setDisAppearAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

