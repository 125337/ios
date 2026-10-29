@interface WCCanvasRadarChartInfo : MMObject <NSCoding>
{
    NSString * _coverColor; // +0x8
    NSString * _borderImg; // +0x10
    NSString * _maskImg; // +0x18
    NSArray * _itemList; // +0x20
    NSString * _labelFontColor; // +0x28
    NSString * _scoreFontColor; // +0x30
    double _labelFontSize; // +0x38
    double _scoreFontSize; // +0x40
    double _borderImgWidth; // +0x48
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)coverColor;
- (void)setCoverColor:(id)arg1;
- (id)borderImg;
- (void)setBorderImg:(id)arg1;
- (id)maskImg;
- (void)setMaskImg:(id)arg1;
- (id)itemList;
- (void)setItemList:(id)arg1;
- (id)labelFontColor;
- (void)setLabelFontColor:(id)arg1;
- (id)scoreFontColor;
- (void)setScoreFontColor:(id)arg1;
- (double)labelFontSize;
- (void)setLabelFontSize:(double)arg1;
- (double)scoreFontSize;
- (void)setScoreFontSize:(double)arg1;
- (double)borderImgWidth;
- (void)setBorderImgWidth:(double)arg1;
- (void).cxx_destruct;
@end

