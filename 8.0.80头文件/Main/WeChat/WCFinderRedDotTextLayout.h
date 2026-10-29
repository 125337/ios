@interface WCFinderRedDotTextLayout : NSObject <RichTextLayoutDelegate>
{
    unsigned long long _lineNumber; // +0x8
    NSString * _content; // +0x10
    double _contentSingleLineWidth; // +0x18
    double _remainWidth; // +0x20
    double _maxLineWidth; // +0x28
    double _balancedFirstLineWidth; // +0x30
}
+ (double)balancedFirstLineWidthForContent:(id)arg1 font:(id)arg2 lineNumber:(unsigned long long)arg3 singleLineTotalWidth:(double)arg4 maxWidth:(double)arg5;
- (void)setContent:(id)arg1 font:(id)arg2 lineNumber:(unsigned long long)arg3;
- (double)lineWidthAtY:(double)arg1 lineIndex:(long long)arg2 richTextView:(id)arg3;
- (unsigned long long)lineNumber;
- (void)setLineNumber:(unsigned long long)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (double)contentSingleLineWidth;
- (void)setContentSingleLineWidth:(double)arg1;
- (double)remainWidth;
- (void)setRemainWidth:(double)arg1;
- (double)maxLineWidth;
- (void)setMaxLineWidth:(double)arg1;
- (double)balancedFirstLineWidth;
- (void)setBalancedFirstLineWidth:(double)arg1;
- (void).cxx_destruct;
@end
