@interface MMFinderLiveCouponCardView : UICollectionViewCell
{
    id <MMFinderLiveCouponCardViewDelegate> _delegate; // +0x8
    MMFinderLiveCouponCardViewModel * _viewModel; // +0x10
    UIButton * _button; // +0x18
    UILabel * _anchorDescriptionLabel; // +0x20
    MMFinderLiveCouponItem * _coupon; // +0x28
    PAGView * _pagBackgroundView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)updateWithViewModel:(id)arg1;
- (void)updateWithViewModel:(id)arg1 setPAG:(BOOL)arg2;
- (void)onButtonClicked;
- (void)onReceived;
- (void)onSatisfied;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (id)anchorDescriptionLabel;
- (void)setAnchorDescriptionLabel:(id)arg1;
- (id)coupon;
- (void)setCoupon:(id)arg1;
- (id)pagBackgroundView;
- (void)setPagBackgroundView:(id)arg1;
- (void).cxx_destruct;
@end

