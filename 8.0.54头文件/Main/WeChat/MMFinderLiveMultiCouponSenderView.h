@interface MMFinderLiveMultiCouponSenderView : MMFinderLiveMultiCouponView
{
    UIButton * _actionButton; // +0x8
    UILabel * _countLabel; // +0x10
    UILabel * _platformLabel; // +0x18
}
+ (id)countWordingFont;
+ (double)preferHeightForCoupon:(id)arg1 width:(double)arg2;
+ (id)countWordingForCoupon:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)onActionButtonClicked;
- (void)fillWithCouponItem:(id)arg1;
- (void)setActionButtonWithStatus:(int)arg1;
- (void)setContainerColor;
- (void)setActionButtonHidden:(BOOL)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)countLabel;
- (void)setCountLabel:(id)arg1;
- (id)platformLabel;
- (void)setPlatformLabel:(id)arg1;
- (void).cxx_destruct;
@end

