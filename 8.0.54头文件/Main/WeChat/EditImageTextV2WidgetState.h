@interface EditImageTextV2WidgetState : EditImageWidgetState
{
    NSString * _textContent; // +0x8
    UIColor * _textColor; // +0x10
    double _textLineWidth; // +0x18
    double _textViewScale; // +0x20
    unsigned long long _textStyle; // +0x28
    CGRect _editViewFrame; // +0x30
}
+ (id)restoryFromFinderCoverWordInfo:(id)arg1;
+ (id)styleDict;
+ (unsigned int)wordStyleWithTextStyle:(unsigned long long)arg1;
+ (unsigned long long)textStyleWithWordStyle:(unsigned int)arg1;
+ (id)kXpercentKey;
+ (id)kYpercentKey;
- (id)genFinderCoverInfo;
- (void)setXPercent:(double)arg1;
- (double)XPercent;
- (void)setYPercent:(double)arg1;
- (double)YPercent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (CGRect)editViewFrame;
- (void)setEditViewFrame:(CGRect)arg1;
- (id)textContent;
- (void)setTextContent:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (double)textLineWidth;
- (void)setTextLineWidth:(double)arg1;
- (double)textViewScale;
- (void)setTextViewScale:(double)arg1;
- (unsigned long long)textStyle;
- (void)setTextStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

