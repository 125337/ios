@interface GCTextLayoutCommonInfo : GCDynamicLayoutProvider
{
    UIFont * _sysTitleFont; // +0x8
    double _sysTitleHeight; // +0x10
    double _sysTitleTopOffset; // +0x18
    double _sysTitleMarginWidth; // +0x20
    double _sysTitleToContentMargin; // +0x28
}
- (id)init;
- (id)sysTitleFont;
- (void)setSysTitleFont:(id)arg1;
- (double)sysTitleHeight;
- (void)setSysTitleHeight:(double)arg1;
- (double)sysTitleTopOffset;
- (void)setSysTitleTopOffset:(double)arg1;
- (double)sysTitleMarginWidth;
- (void)setSysTitleMarginWidth:(double)arg1;
- (double)sysTitleToContentMargin;
- (void)setSysTitleToContentMargin:(double)arg1;
- (void).cxx_destruct;
@end
