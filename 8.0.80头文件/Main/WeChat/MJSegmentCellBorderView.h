@interface MJSegmentCellBorderView : UIView
{
    BOOL _isBorderVisible; // +0x8
    BOOL _shouldShowSeparatorLine; // +0x9
    MJDualBorderLayer * _borderLayer; // +0x10
    MJDualBorderLayer * _separatorLineLayer; // +0x18
    UIColor * _separatorLineColor; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)showBorderAnimated:(BOOL)arg1;
- (void)hideBorderAnimated:(BOOL)arg1;
- (void)setShouldShowSeparatorLine:(BOOL)arg1;
- (void)setSeparatorLineColor:(id)arg1;
- (id)borderLayer;
- (id)separatorLineLayer;
- (BOOL)shouldShowSeparatorLine;
- (id)separatorLineColor;
- (void).cxx_destruct;
@end
