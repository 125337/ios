@interface WCFinderMemberShipPaymentGuideTableViewCell : MMTableViewCell <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderMemberShipPreviewListViewModelDelegate>
{
    id <WCFinderMemberShipPaymentGuideTableViewCellDelegate> _delegate; // +0x8
    WCFinderContact * _contact; // +0x10
    WCFinderHeadImageView * _headImageView; // +0x18
    MMUILabel * _nameLabel; // +0x20
    MMUILabel * _tipsLabel; // +0x28
    WCFinderFeedFlowView * _feedFlowView; // +0x30
    WCFinderMemberShipPreviewListViewModel * _viewModel; // +0x38
    UIButton * _confirmButton; // +0x40
    UIImageView * _priceCoinIcon; // +0x48
    UILabel * _priceLabel; // +0x50
    UILabel * _cycleLabel; // +0x58
    UILabel * _moreLabel; // +0x60
    WCFinderAuthInfoIconView * _authIconView; // +0x68
}
+ (double)cellHeightWithIsSubScene:(BOOL)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupSubviews;
- (void)layoutHeadImageView;
- (void)layoutNameLabel;
- (void)layoutAuthIconView;
- (void)layoutTipsLabel;
- (void)layoutConfirmButton;
- (void)layoutPriceCoinIcon;
- (void)layoutPriceLabel;
- (void)layoutCycleLabel;
- (void)layoutMoreLabel;
- (void)layoutFeedFlowView;
- (void)setLineSpace:(double)arg1 withText:(id)arg2 inLabel:(id)arg3;
- (void)updateContact:(id)arg1 memberPrice:(unsigned long long)arg2 otherVideoNum:(unsigned long long)arg3 otherLiveNum:(unsigned long long)arg4 viewModel:(id)arg5;
- (void)onConfirm;
- (void)layoutSubviews;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderMemberShipPreviewListViewNoMoreData;
- (void)finderMemberShipPreviewListViewFetchListSuc;
- (void)finderMemberShipPreviewListViewFetchListFail;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)priceCoinIcon;
- (void)setPriceCoinIcon:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)cycleLabel;
- (void)setCycleLabel:(id)arg1;
- (id)moreLabel;
- (void)setMoreLabel:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (void).cxx_destruct;
@end
