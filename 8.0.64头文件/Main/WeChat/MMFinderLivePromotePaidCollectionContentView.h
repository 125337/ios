@interface MMFinderLivePromotePaidCollectionContentView : MMFinderLivePromotePubbleContentView
{
    MMWebImageView * _titleImgView; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _descLabel; // +0x18
    MMUIButton * _actionButton; // +0x20
    FinderPaidCollectionInfo * _paidCollectionInfo; // +0x28
}
- (void)convertPromoteMsgInfo:(id)arg1;
- (BOOL)isCurrentPromoteItem:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatepromoteBuffer:(id)arg1;
- (id)getCurrentPromoteBuffer;
- (void)layoutUI;
- (void)refreshData;
- (BOOL)shouldBeAccessibilityElement;
- (id)accessibilityLabelString;
- (void)handleSingleTapGesture:(id)arg1;
- (void)actionButtonClicked;
- (void)onPromoteButtonClicked:(BOOL)arg1;
- (void)onTapAction:(BOOL)arg1;
- (void)onClosed;
- (void)onShowed;
- (void)onDismissed;
- (id)onPromoteBubbleActionExtraInfo;
- (long long)getReportActionType;
- (void)layoutTitleImgView;
- (void)layoutActionButton;
- (void)layoutTitleLabel;
- (void)layoutDescLabel;
- (void)updateLabelsOriginY;
- (id)titleImgView;
- (void)setTitleImgView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)paidCollectionInfo;
- (void)setPaidCollectionInfo:(id)arg1;
- (void).cxx_destruct;
@end
