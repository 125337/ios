@interface HuiYanCustomViewSpec : NSObject
{
    BOOL _bold; // +0x8
    NSString * _type; // +0x10
    NSString * _text; // +0x18
    double _textSize; // +0x20
    NSString * _textColor; // +0x28
    NSString * _bgColor; // +0x30
    double _paddingLeft; // +0x38
    double _paddingTop; // +0x40
    double _paddingRight; // +0x48
    double _paddingBottom; // +0x50
    long long _width; // +0x58
    long long _height; // +0x60
    double _marginLeft; // +0x68
    double _marginTop; // +0x70
    double _marginRight; // +0x78
    double _marginBottom; // +0x80
    NSString * _anchorId; // +0x88
    NSString * _alignRule; // +0x90
    NSString * _viewName; // +0x98
}
+ (id)specFromDictionary:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (double)textSize;
- (void)setTextSize:(double)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (BOOL)bold;
- (void)setBold:(BOOL)arg1;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (double)paddingLeft;
- (void)setPaddingLeft:(double)arg1;
- (double)paddingTop;
- (void)setPaddingTop:(double)arg1;
- (double)paddingRight;
- (void)setPaddingRight:(double)arg1;
- (double)paddingBottom;
- (void)setPaddingBottom:(double)arg1;
- (long long)width;
- (void)setWidth:(long long)arg1;
- (long long)height;
- (void)setHeight:(long long)arg1;
- (double)marginLeft;
- (void)setMarginLeft:(double)arg1;
- (double)marginTop;
- (void)setMarginTop:(double)arg1;
- (double)marginRight;
- (void)setMarginRight:(double)arg1;
- (double)marginBottom;
- (void)setMarginBottom:(double)arg1;
- (id)anchorId;
- (void)setAnchorId:(id)arg1;
- (id)alignRule;
- (void)setAlignRule:(id)arg1;
- (id)viewName;
- (void)setViewName:(id)arg1;
- (void).cxx_destruct;
@end
