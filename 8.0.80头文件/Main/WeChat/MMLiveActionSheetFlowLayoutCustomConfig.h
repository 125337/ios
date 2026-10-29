@interface MMLiveActionSheetFlowLayoutCustomConfig : NSObject
{
    BOOL _isHeightUnconstrained; // +0x8
    BOOL _hideFirstLineTitle; // +0x9
    UIColor * _headerColor; // +0x10
    double _sectionVerticalSpacing; // +0x18
    double _headerInnerPadding; // +0x20
    double _sectionHeaderHeight; // +0x28
}
- (BOOL)isHeightUnconstrained;
- (void)setIsHeightUnconstrained:(BOOL)arg1;
- (BOOL)hideFirstLineTitle;
- (void)setHideFirstLineTitle:(BOOL)arg1;
- (id)headerColor;
- (void)setHeaderColor:(id)arg1;
- (double)sectionVerticalSpacing;
- (void)setSectionVerticalSpacing:(double)arg1;
- (double)headerInnerPadding;
- (void)setHeaderInnerPadding:(double)arg1;
- (double)sectionHeaderHeight;
- (void)setSectionHeaderHeight:(double)arg1;
- (void).cxx_destruct;
@end
