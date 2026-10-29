@interface QMCPOITagItem : NSObject
{
    NSString * _text; // +0x8
    UIColor * _textColor; // +0x10
    UIColor * _fillColor; // +0x18
    UIColor * _strokeColor; // +0x20
    double _strokeWidth; // +0x28
    double _cornerRadius; // +0x30
    double _fontSize; // +0x38
    NSString * _leftImgUrl; // +0x40
    double _leftImgWidth; // +0x48
    double _leftImgHeight; // +0x50
}
+ (id)itemWithText:(id)arg1 textColor:(id)arg2 fillColor:(id)arg3 strokeColor:(id)arg4 strokeWidth:(double)arg5 cornerRadius:(double)arg6;
+ (id)itemWithText:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)fillColor;
- (void)setFillColor:(id)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (double)strokeWidth;
- (void)setStrokeWidth:(double)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (double)fontSize;
- (void)setFontSize:(double)arg1;
- (id)leftImgUrl;
- (void)setLeftImgUrl:(id)arg1;
- (double)leftImgWidth;
- (void)setLeftImgWidth:(double)arg1;
- (double)leftImgHeight;
- (void)setLeftImgHeight:(double)arg1;
- (void).cxx_destruct;
@end
