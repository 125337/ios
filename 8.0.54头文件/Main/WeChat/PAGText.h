@interface PAGText : NSObject
{
    BOOL applyFill; // +0x8
    BOOL applyStroke; // +0x9
    BOOL boxText; // +0xa
    BOOL fauxBold; // +0xb
    BOOL fauxItalic; // +0xc
    BOOL strokeOverFill; // +0xd
    unsigned char justification; // +0xe
    float baselineShift; // +0x10
    float fontSize; // +0x14
    float strokeWidth; // +0x18
    float leading; // +0x1c
    float tracking; // +0x20
    int backgroundAlpha; // +0x24
    float _firstBaseLine; // +0x28
    UIColor * fillColor; // +0x30
    NSString * fontFamily; // +0x38
    NSString * fontStyle; // +0x40
    UIColor * strokeColor; // +0x48
    NSString * text; // +0x50
    UIColor * backgroundColor; // +0x58
    CGRect boxTextRect; // +0x60
}
- (void)dealloc;
- (BOOL)applyFill;
- (void)setApplyFill:(BOOL)arg1;
- (BOOL)applyStroke;
- (void)setApplyStroke:(BOOL)arg1;
- (float)baselineShift;
- (void)setBaselineShift:(float)arg1;
- (BOOL)boxText;
- (void)setBoxText:(BOOL)arg1;
- (CGRect)boxTextRect;
- (void)setBoxTextRect:(CGRect)arg1;
- (BOOL)fauxBold;
- (void)setFauxBold:(BOOL)arg1;
- (BOOL)fauxItalic;
- (void)setFauxItalic:(BOOL)arg1;
- (id)fillColor;
- (void)setFillColor:(id)arg1;
- (id)fontFamily;
- (void)setFontFamily:(id)arg1;
- (id)fontStyle;
- (void)setFontStyle:(id)arg1;
- (float)fontSize;
- (void)setFontSize:(float)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (BOOL)strokeOverFill;
- (void)setStrokeOverFill:(BOOL)arg1;
- (float)strokeWidth;
- (void)setStrokeWidth:(float)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (unsigned char)justification;
- (void)setJustification:(unsigned char)arg1;
- (float)leading;
- (void)setLeading:(float)arg1;
- (float)tracking;
- (void)setTracking:(float)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (int)backgroundAlpha;
- (void)setBackgroundAlpha:(int)arg1;
- (float)firstBaseLine;
- (void)setFirstBaseLine:(float)arg1;
@end

