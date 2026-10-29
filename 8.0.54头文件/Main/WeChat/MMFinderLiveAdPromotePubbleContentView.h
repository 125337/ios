@interface MMFinderLiveAdPromotePubbleContentView : MMFinderLivePromotePubbleContentView
{
    MMLiveGradientLayerView * _titleImgContainerView; // +0x8
    MMWebImageView * _titleImgView; // +0x10
    MMUILabel * _titleTagLabel; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _descLabel; // +0x28
    FinderLiveShopWindowAdItem * _adItem; // +0x30
}
- (BOOL)shouldBeAccessibilityElement;
- (id)accessibilityLabelString;
- (void)convertPromoteMsgInfo:(id)arg1;
- (BOOL)isCurrentPromoteItem:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatepromoteBuffer:(id)arg1;
- (id)getCurrentPromoteBuffer;
- (void)layoutUI;
- (void)refreshData;
- (void)handleSingleTapGesture:(id)arg1;
- (void)onTapAction;
- (void)onClosed;
- (void)onShowed;
- (void)layoutTitleImgView;
- (void)layoutTitleTagLabel;
- (void)layoutTitleLabel;
- (void)layoutDescLabel;
- (void)updateLabelsOriginY;
- (void)onAdAction;
- (id)onPromoteBubbleActionExtraInfo;
- (id)titleImgContainerView;
- (void)setTitleImgContainerView:(id)arg1;
- (id)titleImgView;
- (void)setTitleImgView:(id)arg1;
- (id)titleTagLabel;
- (void)setTitleTagLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)adItem;
- (void)setAdItem:(id)arg1;
- (void).cxx_destruct;
@end

