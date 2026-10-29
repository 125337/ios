@interface NSScanner (RTE)
+ (id)complementaryCharacterSetFromNumber;
+ (id)whitespaceCommasAndClosingParenthesisCharacterSet;
+ (id)complementaryCharacterSetFromWhitespaceAndNewline;
- (BOOL)scanFloatAndAdvance:(float *)arg1;
- (void)scanThroughWhitespaceCommasAndClosingParenthesis;
- (unsigned short)initialCharacter;
- (unsigned short)currentCharacter;
- (void)scanThroughToHyphen;
- (BOOL)scanPoint:(CGPoint *)arg1;
- (BOOL)scanBool:(BOOL *)arg1;
- (BOOL)scanCGFloat:(double *)arg1;
- (BOOL)scanCSSAttribute:(id *)arg1 value:(id *)arg2;
@end

