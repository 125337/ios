@interface MTGlyphPart : NSObject
{
    BOOL _isExtender; // +0x8
    unsigned short _glyph; // +0xa
    double _fullAdvance; // +0x10
    double _startConnectorLength; // +0x18
    double _endConnectorLength; // +0x20
}
- (unsigned short)glyph;
- (void)setGlyph:(unsigned short)arg1;
- (double)fullAdvance;
- (void)setFullAdvance:(double)arg1;
- (double)startConnectorLength;
- (void)setStartConnectorLength:(double)arg1;
- (double)endConnectorLength;
- (void)setEndConnectorLength:(double)arg1;
- (BOOL)isExtender;
- (void)setIsExtender:(BOOL)arg1;
@end
