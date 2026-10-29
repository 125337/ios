@interface GCLabelDynamicLayout : NSObject
{
    double _labelFontSize; // +0x8
    double _labelHeight; // +0x10
    double _oriLabelheight; // +0x18
    double _isBold; // +0x20
    double _horizonalMargin; // +0x28
}
- (id)initWithBasicFontSize:(double)arg1 lineHeight:(double)arg2;
- (void)configLabel:(id)arg1;
- (void)configLabel:(id)arg1 isBold:(BOOL)arg2;
- (void)configBtn:(id)arg1;
- (double)diffWithOriLineHeight;
- (id)labelFont;
- (id)fontWithIsBold:(BOOL)arg1;
- (double)labelFontSize;
- (void)setLabelFontSize:(double)arg1;
- (double)labelHeight;
- (void)setLabelHeight:(double)arg1;
- (double)oriLabelheight;
- (void)setOriLabelheight:(double)arg1;
- (double)isBold;
- (void)setIsBold:(double)arg1;
- (double)horizonalMargin;
- (void)setHorizonalMargin:(double)arg1;
@end

