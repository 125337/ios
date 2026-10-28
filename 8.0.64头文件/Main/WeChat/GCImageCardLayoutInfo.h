@interface GCImageCardLayoutInfo : GCDynamicLayoutProvider
{
    double _innerContentWidth; // +0x8
    UIFont * _titleFont; // +0x10
    double _titleHeight; // +0x18
    double _titleTopOffset; // +0x20
    double _contentMarginWidth; // +0x28
    double _playBtnSize; // +0x30
}
- (id)init;
- (double)innerContentWidth;
- (void)setInnerContentWidth:(double)arg1;
- (id)titleFont;
- (void)setTitleFont:(id)arg1;
- (double)titleHeight;
- (void)setTitleHeight:(double)arg1;
- (double)titleTopOffset;
- (void)setTitleTopOffset:(double)arg1;
- (double)contentMarginWidth;
- (void)setContentMarginWidth:(double)arg1;
- (double)playBtnSize;
- (void)setPlayBtnSize:(double)arg1;
- (void).cxx_destruct;
@end
