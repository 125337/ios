@interface StylePatternGenerator : BasePatternGenerator
{
    _NSParserPosition _startParserPosition; // +0x8
}
- (id)init;
- (id)patternForContent:(id)arg1 range:(_NSRange)arg2 parser:(id)arg3;
- (_NSParserPosition)startParserPosition;
- (void)setStartParserPosition:(_NSParserPosition)arg1;
@end

