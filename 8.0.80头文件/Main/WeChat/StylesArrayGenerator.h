@interface StylesArrayGenerator : BasePatternGenerator <BaseParserStyleDelegate>
{
    _NSParserPosition _stPosition; // +0x8
    NSMutableArray * _arrStyles; // +0x30
    double _nextLineY; // +0x38
}
- (id)init;
- (id)getStyles;
- (void)clearData;
- (id)patternForContent:(id)arg1 range:(_NSRange)arg2 parser:(id)arg3;
- (id)getParsedStyles;
- (_NSParserPosition)stPosition;
- (void)setStPosition:(_NSParserPosition)arg1;
- (double)nextLineY;
- (void)setNextLineY:(double)arg1;
- (void).cxx_destruct;
@end
