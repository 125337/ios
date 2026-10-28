@interface MMFinderLiveFansGroupIntroViewColorConfig : NSObject
{
    BOOL _highlightWecoin; // +0x8
    UIColor * _bgImgHighlightColor; // +0x10
    UIColor * _textHighlightGradientColorFrom; // +0x18
    UIColor * _textHighlightGradientColorTo; // +0x20
    UIColor * _borderHighlightGradientColorFrom; // +0x28
    UIColor * _borderHighlightGradientColorTo; // +0x30
    UIColor * _backgroundHighlightGradientColorFrom; // +0x38
    UIColor * _backgroundHighlightGradientColorTo; // +0x40
}
- (id)bgImgHighlightColor;
- (void)setBgImgHighlightColor:(id)arg1;
- (id)textHighlightGradientColorFrom;
- (void)setTextHighlightGradientColorFrom:(id)arg1;
- (id)textHighlightGradientColorTo;
- (void)setTextHighlightGradientColorTo:(id)arg1;
- (id)borderHighlightGradientColorFrom;
- (void)setBorderHighlightGradientColorFrom:(id)arg1;
- (id)borderHighlightGradientColorTo;
- (void)setBorderHighlightGradientColorTo:(id)arg1;
- (id)backgroundHighlightGradientColorFrom;
- (void)setBackgroundHighlightGradientColorFrom:(id)arg1;
- (id)backgroundHighlightGradientColorTo;
- (void)setBackgroundHighlightGradientColorTo:(id)arg1;
- (BOOL)highlightWecoin;
- (void)setHighlightWecoin:(BOOL)arg1;
- (void).cxx_destruct;
@end
