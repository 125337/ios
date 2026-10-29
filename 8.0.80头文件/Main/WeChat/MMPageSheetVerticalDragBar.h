@interface MMPageSheetVerticalDragBar : UIView
{
    UIView * _barView; // +0x8
    UIImageView * _arrowImageView; // +0x10
}
+ (double)recommendedContainerWidth;
+ (double)recommendedContainerHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)onPageSheetDragToDismissOffset:(double)arg1 animated:(BOOL)arg2;
- (void)updateBarColor:(id)arg1;
- (void)updateArrowColor:(id)arg1;
- (void)layoutSubviews;
- (id)barView;
- (void)setBarView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end
