@interface MMOrderCenterTableViewCellTimeReviewView : UIView <MMOrderCenterTableViewCellComponent>
{
    id <MMOrderCenterTableViewCellComponentAggregatedDelegate> _delegate; // +0x8
    MMUIButton * _rateButton; // +0x10
    MMCustomerOrderInfo * _order; // +0x18
}
+ (double)heightForOrder:(id)arg1 inWidth:(double)arg2 estimate:(BOOL)arg3;
+ (BOOL)shouldUseComponentForOrder:(id)arg1;
+ (id)timeStringForOrder:(id)arg1;
+ (id)rateButtonLabelForOrder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithOrder:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onCellWillDisplay;
- (void)onReviewButtonTapped;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)rateButton;
- (void)setRateButton:(id)arg1;
- (id)order;
- (void)setOrder:(id)arg1;
- (void).cxx_destruct;
@end

