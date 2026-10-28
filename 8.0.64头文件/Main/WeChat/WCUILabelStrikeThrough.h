@interface WCUILabelStrikeThrough : UILabel
{
    int xOffset; // +0x8
    int yOffset; // +0xc
    int widthOffset; // +0x10
    int stroke; // +0x14
    UIColor * strokeColor; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 xOffset:(int)arg2 yOffset:(int)arg3 widthOffset:(int)arg4 stroke:(int)arg5 strokeColor:(id)arg6;
- (void)drawTextInRect:(CGRect)arg1;
- (void)drawRect:(CGRect)arg1;
- (int)xOffset;
- (void)setXOffset:(int)arg1;
- (int)yOffset;
- (void)setYOffset:(int)arg1;
- (int)widthOffset;
- (void)setWidthOffset:(int)arg1;
- (int)stroke;
- (void)setStroke:(int)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (void).cxx_destruct;
@end
