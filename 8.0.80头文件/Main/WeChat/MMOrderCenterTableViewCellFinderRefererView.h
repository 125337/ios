@interface MMOrderCenterTableViewCellFinderRefererView : UIView <MMOrderCenterTableViewCellComponent>
{
    id <MMOrderCenterTableViewCellComponentAggregatedDelegate> _delegate; // +0x8
    UIView * _separatorBarView; // +0x10
    UIImageView * _finderLogoView; // +0x18
    UILabel * _refererNameView; // +0x20
    UIImageView * _rightChevronView; // +0x28
}
+ (BOOL)shouldUseComponentForOrder:(id)arg1;
+ (double)heightForOrder:(id)arg1 inWidth:(double)arg2 estimate:(BOOL)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithOrder:(id)arg1;
- (void)onTapped;
- (id)accessibilityElements;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)separatorBarView;
- (void)setSeparatorBarView:(id)arg1;
- (id)finderLogoView;
- (void)setFinderLogoView:(id)arg1;
- (id)refererNameView;
- (void)setRefererNameView:(id)arg1;
- (id)rightChevronView;
- (void)setRightChevronView:(id)arg1;
- (void).cxx_destruct;
@end
