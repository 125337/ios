@interface ColorConfig : NSObject
{
    unsigned int _startSecond; // +0x8
    unsigned int _endSecond; // +0xc
    _GLKVector4 _color1; // +0x10
    _GLKVector4 _color2; // +0x20
    _GLKVector4 _color3; // +0x30
    _GLKVector4 _bgColor1; // +0x40
    _GLKVector4 _bgColor2; // +0x50
    _GLKVector4 _color1InDarkMode; // +0x60
    _GLKVector4 _color2InDarkMode; // +0x70
    _GLKVector4 _color3InDarkMode; // +0x80
    _GLKVector4 _bgColor1InDarkMode; // +0x90
    _GLKVector4 _bgColor2InDarkMode; // +0xa0
}
- (_GLKVector4)color1;
- (void)setColor1:(_GLKVector4)arg1;
- (_GLKVector4)color2;
- (void)setColor2:(_GLKVector4)arg1;
- (_GLKVector4)color3;
- (void)setColor3:(_GLKVector4)arg1;
- (_GLKVector4)bgColor1;
- (void)setBgColor1:(_GLKVector4)arg1;
- (_GLKVector4)bgColor2;
- (void)setBgColor2:(_GLKVector4)arg1;
- (_GLKVector4)color1InDarkMode;
- (void)setColor1InDarkMode:(_GLKVector4)arg1;
- (_GLKVector4)color2InDarkMode;
- (void)setColor2InDarkMode:(_GLKVector4)arg1;
- (_GLKVector4)color3InDarkMode;
- (void)setColor3InDarkMode:(_GLKVector4)arg1;
- (_GLKVector4)bgColor1InDarkMode;
- (void)setBgColor1InDarkMode:(_GLKVector4)arg1;
- (_GLKVector4)bgColor2InDarkMode;
- (void)setBgColor2InDarkMode:(_GLKVector4)arg1;
- (unsigned int)startSecond;
- (void)setStartSecond:(unsigned int)arg1;
- (unsigned int)endSecond;
- (void)setEndSecond:(unsigned int)arg1;
@end
