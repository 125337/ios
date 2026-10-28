@interface MMFinderLiveMultiCouponView : UIView <MMWebImageViewDelegate, MMFinderLiveCouponViewProtocol>
{
    BOOL _actionButtonHidden; // +0x8
    UILabel * _valueLabel; // +0x10
    UILabel * _nameLabel; // +0x18
    UILabel * _limitLabel; // +0x20
    id <MMFinderLiveCouponViewDelegate> _delegate; // +0x28
    MMFinderLiveCouponItem * _couponItem; // +0x30
    MMFinderLiveCouponContainerView * _backgroundView; // +0x38
    MMWebImageView * _tailBackgroundImageView; // +0x40
}
+ (double)preferHeightForCoupon:(id)arg1 width:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)normalFillColor;
- (id)normalStrokeColor;
- (void)setContainerColor;
- (void)layoutSubviews;
- (void)layoutHead;
- (void)layoutMain;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)fillWithCouponItem:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (id)valueLabel;
- (void)setValueLabel:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)limitLabel;
- (void)setLimitLabel:(id)arg1;
- (BOOL)actionButtonHidden;
- (void)setActionButtonHidden:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)couponItem;
- (void)setCouponItem:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)tailBackgroundImageView;
- (void)setTailBackgroundImageView:(id)arg1;
- (void).cxx_destruct;
@end
