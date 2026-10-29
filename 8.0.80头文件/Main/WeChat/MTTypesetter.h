@interface MTTypesetter : NSObject
{
    MTFont * _font; // +0x8
    NSMutableArray * _displayAtoms; // +0x10
    CGPoint _currentPosition; // +0x18
    NSMutableAttributedString * _currentLine; // +0x28
    NSMutableArray * _currentAtoms; // +0x30
    _NSRange _currentLineIndexRange; // +0x38
    unsigned int _style; // +0x48
    MTFont * _styleFont; // +0x50
    BOOL _cramped; // +0x58
    BOOL _spaced; // +0x59
}
+ (id)createLineForMathList:(id)arg1 font:(id)arg2 style:(unsigned int)arg3;
+ (id)createLineForMathList:(id)arg1 font:(id)arg2 style:(unsigned int)arg3 cramped:(BOOL)arg4;
+ (id)createLineForMathList:(id)arg1 font:(id)arg2 style:(unsigned int)arg3 cramped:(BOOL)arg4 spaced:(BOOL)arg5;
+ (id)placeholderColor;
+ (id)preprocessMathList:(id)arg1;
+ (double)getStyleSize:(unsigned int)arg1 font:(id)arg2;
- (id)initWithFont:(id)arg1 style:(unsigned int)arg2 cramped:(BOOL)arg3 spaced:(BOOL)arg4;
- (void)setStyle:(unsigned int)arg1;
- (void)addInterElementSpace:(id)arg1 currentType:(unsigned long long)arg2;
- (void)createDisplayAtoms:(id)arg1;
- (id)addDisplayLine;
- (int)getSpacingInMu:(int)arg1;
- (double)getInterElementSpace:(unsigned long long)arg1 right:(unsigned long long)arg2;
- (unsigned int)scriptStyle;
- (BOOL)subscriptCramped;
- (BOOL)superScriptCramped;
- (double)superScriptShiftUp;
- (void)makeScripts:(id)arg1 display:(id)arg2 index:(unsigned long long)arg3 delta:(double)arg4;
- (double)numeratorShiftUp:(BOOL)arg1;
- (double)numeratorGapMin;
- (double)denominatorShiftDown:(BOOL)arg1;
- (double)denominatorGapMin;
- (double)stackGapMin;
- (double)fractionDelimiterHeight;
- (unsigned int)fractionStyle;
- (id)makeFraction:(id)arg1;
- (id)addDelimitersToFractionDisplay:(id)arg1 forFraction:(id)arg2;
- (double)radicalVerticalGap;
- (id)getRadicalGlyphWithHeight:(double)arg1;
- (id)makeRadical:(id)arg1 range:(_NSRange)arg2;
- (unsigned short)findGlyph:(unsigned short)arg1 withHeight:(double)arg2 glyphAscent:(double *)arg3 glyphDescent:(double *)arg4 glyphWidth:(double *)arg5;
- (id)constructGlyph:(unsigned short)arg1 withHeight:(double)arg2;
- (void)constructGlyphWithParts:(id)arg1 height:(double)arg2 glyphs:(id *)arg3 offsets:(id *)arg4 height:(double *)arg5;
- (unsigned short)findGlyphForCharacterAtIndex:(unsigned long long)arg1 inString:(id)arg2;
- (id)makeLargeOp:(id)arg1;
- (id)addLimitsToDisplay:(id)arg1 forOperator:(id)arg2 delta:(double)arg3;
- (id)findGlyphForBoundary:(id)arg1 withHeight:(double)arg2;
- (id)makeUnderline:(id)arg1;
- (id)makeOverline:(id)arg1;
- (BOOL)isSingleCharAccentee:(id)arg1;
- (double)getSkew:(id)arg1 accenteeWidth:(double)arg2 accentGlyph:(unsigned short)arg3;
- (unsigned short)findVariantGlyph:(unsigned short)arg1 withMaxWidth:(double)arg2 glyphAscent:(double *)arg3 glyphDescent:(double *)arg4 glyphWidth:(double *)arg5;
- (id)makeAccent:(id)arg1;
- (id)makeTable:(id)arg1;
- (id)typesetCells:(id)arg1 columnWidths:(double *)arg2;
- (id)makeRowWithColumns:(id)arg1 forTable:(id)arg2 columnWidths:(double *)arg3;
- (void)positionRows:(id)arg1 forTable:(id)arg2;
- (id)makeInner:(id)arg1 atIndex:(unsigned long long)arg2;
- (void).cxx_destruct;
@end
