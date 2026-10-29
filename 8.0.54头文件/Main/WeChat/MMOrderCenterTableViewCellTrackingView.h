@interface MMOrderCenterTableViewCellTrackingView : UIView <MMOrderCenterTableViewCellComponent>
{
    id <MMOrderCenterTableViewCellComponentAggregatedDelegate> _delegate; // +0x8
    UILabel * _statusView; // +0x10
    UILabel * _descriptionView; // +0x18
    UIImageView * _rightChevronView; // +0x20
}
+ (BOOL)shouldUseComponentForOrder:(id)arg1;
+ (double)heightForOrder:(id)arg1 inWidth:(double)arg2 estimate:(BOOL)arg3;
+ (id)statusForOrder:(id)arg1;
+ (id)descriptionForOrder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithOrder:(id)arg1;
- (void)onTapped;
- (void)layoutSubviews;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)statusView;
- (void)setStatusView:(id)arg1;
- (id)descriptionView;
- (void)setDescriptionView:(id)arg1;
- (id)rightChevronView;
- (void)setRightChevronView:(id)arg1;
- (void).cxx_destruct;
@end

