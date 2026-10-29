@interface GCShareLinkLayoutInfo : GCDynamicLayoutProvider
{
    double _imageSize; // +0x8
    UIFont * _titleFont; // +0x10
    UIFont * _descFont; // +0x18
    double _titleHeight; // +0x20
    double _descHeight; // +0x28
    double _titleLeftMargin; // +0x30
    double _titleRightMargin; // +0x38
    double _labelSpace; // +0x40
    double _labelContentWidth; // +0x48
}
- (id)init;
- (double)imageSize;
- (void)setImageSize:(double)arg1;
- (id)titleFont;
- (void)setTitleFont:(id)arg1;
- (id)descFont;
- (void)setDescFont:(id)arg1;
- (double)titleHeight;
- (void)setTitleHeight:(double)arg1;
- (double)descHeight;
- (void)setDescHeight:(double)arg1;
- (double)titleLeftMargin;
- (void)setTitleLeftMargin:(double)arg1;
- (double)titleRightMargin;
- (void)setTitleRightMargin:(double)arg1;
- (double)labelSpace;
- (void)setLabelSpace:(double)arg1;
- (double)labelContentWidth;
- (void)setLabelContentWidth:(double)arg1;
- (void).cxx_destruct;
@end
