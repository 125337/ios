@interface QTextStyle : NSObject
{
    int _priority; // +0x8
    UIColor * _textColor; // +0x10
    UIColor * _strokeColor; // +0x18
    double _fontSize; // +0x20
}
- (id)init;
- (void)setPriority:(int)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (double)fontSize;
- (void)setFontSize:(double)arg1;
- (int)priority;
- (void).cxx_destruct;
@end

