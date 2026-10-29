@interface WCFinderPoiGroupBuyView : UIView
{
    id <WCFinderPoiGroupBuyViewDelegate> _delegate; // +0x8
    unsigned long long _viewStyle; // +0x10
    FinderPoiGroupBuyResponse_PoiGroupBuyCoupon * _groupBuyCoupon; // +0x18
    UIButton * _actionButton; // +0x20
    UIImageView * _imageView; // +0x28
    WCFinderFullScrollTextView * _titleContainerView; // +0x30
    UILabel * _typeLabel; // +0x38
    UIView * _tagContainer; // +0x40
    NSMutableArray * _tagLabelArray; // +0x48
    UILabel * _discountPriceLabel; // +0x50
    UILabel * _fullPriceLabel; // +0x58
    UILabel * _discountLabel; // +0x60
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)setFrame:(CGRect)arg1;
- (void)updateWithCoupon:(id)arg1;
- (void)updateLayout;
- (double)wordingLeft;
- (void)setViewStyle:(unsigned long long)arg1;
- (void)onActionButtonClicked:(id)arg1;
- (id)imageView;
- (id)titleContainerView;
- (id)typeLabel;
- (id)tagContainer;
- (id)tagLabelArray;
- (id)genTagLabelWithText:(id)arg1;
- (id)discountPriceLabel;
- (id)fullPriceLabel;
- (id)discountLabel;
- (id)actionButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)viewStyle;
- (id)groupBuyCoupon;
- (void)setGroupBuyCoupon:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setTitleContainerView:(id)arg1;
- (void)setTypeLabel:(id)arg1;
- (void)setTagContainer:(id)arg1;
- (void)setTagLabelArray:(id)arg1;
- (void)setDiscountPriceLabel:(id)arg1;
- (void)setFullPriceLabel:(id)arg1;
- (void)setDiscountLabel:(id)arg1;
- (void).cxx_destruct;
@end
