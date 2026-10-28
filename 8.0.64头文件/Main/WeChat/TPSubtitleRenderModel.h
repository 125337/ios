@interface TPSubtitleRenderModel : NSObject
{
    int _canvasWidth; // +0x8
    int _canvasHeight; // +0xc
    float _fontSize; // +0x10
    float _fontScale; // +0x14
    unsigned int _fontColor; // +0x18
    float _outlineWidth; // +0x1c
    unsigned int _outlineColor; // +0x20
    unsigned int _fontStyleOptions; // +0x24
    float _lineSpace; // +0x28
    float _startMargin; // +0x2c
    float _endMargin; // +0x30
    float _verticalMargin; // +0x34
    unsigned long long _paramFlags; // +0x38
    unsigned long long _paramPriorityFlags; // +0x40
    NSString * _familyName; // +0x48
}
- (int)canvasWidth;
- (void)setCanvasWidth:(int)arg1;
- (int)canvasHeight;
- (void)setCanvasHeight:(int)arg1;
- (unsigned long long)paramFlags;
- (void)setParamFlags:(unsigned long long)arg1;
- (unsigned long long)paramPriorityFlags;
- (void)setParamPriorityFlags:(unsigned long long)arg1;
- (id)familyName;
- (void)setFamilyName:(id)arg1;
- (float)fontSize;
- (void)setFontSize:(float)arg1;
- (float)fontScale;
- (void)setFontScale:(float)arg1;
- (unsigned int)fontColor;
- (void)setFontColor:(unsigned int)arg1;
- (float)outlineWidth;
- (void)setOutlineWidth:(float)arg1;
- (unsigned int)outlineColor;
- (void)setOutlineColor:(unsigned int)arg1;
- (unsigned int)fontStyleOptions;
- (void)setFontStyleOptions:(unsigned int)arg1;
- (float)lineSpace;
- (void)setLineSpace:(float)arg1;
- (float)startMargin;
- (void)setStartMargin:(float)arg1;
- (float)endMargin;
- (void)setEndMargin:(float)arg1;
- (float)verticalMargin;
- (void)setVerticalMargin:(float)arg1;
- (void).cxx_destruct;
@end
