@interface MMFinderLiveCouponCell : MMMultiMenuTableViewCell
{
    MMFinderLiveMultiCouponView * _couponView; // +0x40
    long long _style; // +0x48
    UIEdgeInsets _padding; // +0x50
}
+ (id)identifier;
+ (double)getCellHeightWithCoupon:(id)arg1 style:(long long)arg2 padding:(UIEdgeInsets)arg3 width:(double)arg4;
+ (Class)contentClassWithStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)layoutSubviews;
- (void)fillWithViewModel:(id)arg1;
- (id)couponView;
- (void)setCouponView:(id)arg1;
- (UIEdgeInsets)padding;
- (void)setPadding:(UIEdgeInsets)arg1;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (void).cxx_destruct;
@end

