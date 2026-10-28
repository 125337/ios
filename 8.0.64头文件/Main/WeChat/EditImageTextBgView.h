@interface EditImageTextBgView : UIView
{
    NSMutableArray * _backgroundRects; // +0x8
    UIColor * _textBgColor; // +0x10
    double _scale; // +0x18
    double _cornerRadius; // +0x20
}
+ (double)maxWOfRects:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)drawRect:(CGRect)arg1;
- (id)backgroundRects;
- (void)setBackgroundRects:(id)arg1;
- (id)textBgColor;
- (void)setTextBgColor:(id)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (void).cxx_destruct;
@end
