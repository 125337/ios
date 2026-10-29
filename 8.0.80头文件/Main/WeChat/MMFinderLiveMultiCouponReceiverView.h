@interface MMFinderLiveMultiCouponReceiverView : MMFinderLiveMultiCouponView <MMFinderLiveCouponItemObserver>
{
    UIButton * _actionButton; // +0x8
    UILabel * _validityPeriodLabel; // +0x10
    UILabel * _restrictLabel; // +0x18
    UIImageView * _restrictIcon; // +0x20
}
+ (double)preferHeightForCoupon:(id)arg1 width:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)onActionButtonClicked;
- (void)fillWithCouponItem:(id)arg1;
- (void)onCouponDidUpdate:(id)arg1;
- (void)setActionButtonHidden:(BOOL)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)validityPeriodLabel;
- (void)setValidityPeriodLabel:(id)arg1;
- (id)restrictLabel;
- (void)setRestrictLabel:(id)arg1;
- (id)restrictIcon;
- (void)setRestrictIcon:(id)arg1;
- (void).cxx_destruct;
@end
