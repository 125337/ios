@interface MMFinderLiveGoodsAuctionBidRecordsView : MMUIView
{
    id /* block */ _onClickableItemClicked; // +0x8
    MMWebImageView * _imageView; // +0x10
    UILabel * _label; // +0x18
    UIImageView * _arrowImageView; // +0x20
    FinderWindowProductInfo_AuctionBidRecordsInfo * _currentInfo; // +0x28
}
+ (BOOL)shouldShowAuctionBidRecordsView:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithInfo:(id)arg1;
- (void)handleTap:(id)arg1;
- (id /* block */)onClickableItemClicked;
- (void)setOnClickableItemClicked:(id /* block */)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)currentInfo;
- (void)setCurrentInfo:(id)arg1;
- (void).cxx_destruct;
@end
