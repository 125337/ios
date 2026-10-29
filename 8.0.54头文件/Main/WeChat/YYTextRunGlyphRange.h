@interface YYTextRunGlyphRange : NSObject
{
    unsigned long long _drawMode; // +0x8
    _NSRange _glyphRangeInRun; // +0x10
}
+ (id)rangeWithRange:(_NSRange)arg1 drawMode:(unsigned long long)arg2;
- (_NSRange)glyphRangeInRun;
- (void)setGlyphRangeInRun:(_NSRange)arg1;
- (unsigned long long)drawMode;
- (void)setDrawMode:(unsigned long long)arg1;
@end

