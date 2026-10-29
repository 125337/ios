@interface WCFinderStreamProfileHeaderViewMeasure : NSObject
{
    double _elementPadding; // +0x8
    double _cornerMaskRadius; // +0x10
    UIColor * _followBtnThemeColor; // +0x18
    UIEdgeInsets _insets; // +0x20
    UIEdgeInsets _infoEdgeInsets; // +0x40
}
- (id)init;
- (UIEdgeInsets)insets;
- (void)setInsets:(UIEdgeInsets)arg1;
- (UIEdgeInsets)infoEdgeInsets;
- (void)setInfoEdgeInsets:(UIEdgeInsets)arg1;
- (double)elementPadding;
- (void)setElementPadding:(double)arg1;
- (double)cornerMaskRadius;
- (void)setCornerMaskRadius:(double)arg1;
- (id)followBtnThemeColor;
- (void)setFollowBtnThemeColor:(id)arg1;
- (void).cxx_destruct;
@end

