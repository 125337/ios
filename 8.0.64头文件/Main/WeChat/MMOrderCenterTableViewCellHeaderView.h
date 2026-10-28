@interface MMOrderCenterTableViewCellHeaderView : UIView <MMOrderCenterTableViewCellComponent>
{
    id <MMOrderCenterTableViewCellComponentAggregatedDelegate> _delegate; // +0x8
    MMWebImageView * _outletAvatarView; // +0x10
    UILabel * _outletNameView; // +0x18
    UIImageView * _rightChevronView; // +0x20
    UILabel * _storeNameView; // +0x28
    NSArray * _outletNameTagViews; // +0x30
    UILabel * _statusView; // +0x38
}
+ (BOOL)shouldUseComponentForOrder:(id)arg1;
+ (double)heightForOrder:(id)arg1 inWidth:(double)arg2 estimate:(BOOL)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithOrder:(id)arg1;
- (void)setOutletNameTagViews:(id)arg1;
- (void)updateOutletNameTagViewsWithOrder:(id)arg1;
- (void)layoutSubviews;
- (void)onTapped;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)updateStatusViewWithOrder:(id)arg1;
- (id)accessibilityElements;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)outletAvatarView;
- (void)setOutletAvatarView:(id)arg1;
- (id)outletNameView;
- (void)setOutletNameView:(id)arg1;
- (id)rightChevronView;
- (void)setRightChevronView:(id)arg1;
- (id)storeNameView;
- (void)setStoreNameView:(id)arg1;
- (id)outletNameTagViews;
- (id)statusView;
- (void)setStatusView:(id)arg1;
- (void).cxx_destruct;
@end
