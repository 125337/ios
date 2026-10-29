@interface WCPunctuationUtils : NSObject
+ (void)loadMaps;
+ (BOOL)isPunctuation:(unsigned short)arg1;
+ (BOOL)isLeftPunctuation:(unsigned short)arg1;
+ (BOOL)isRightPunctuation:(unsigned short)arg1;
+ (BOOL)isMatching:(unsigned short)arg1 withChar:(unsigned short)arg2;
+ (void)scanLeftPunctuationFromIndex:(unsigned long long)arg1 inString:(id)arg2 returningIndices:(id *)arg3 chars:(id *)arg4;
+ (long long)findMatchingRightIndexFromIndex:(unsigned long long)arg1 leftChar:(unsigned short)arg2 inString:(id)arg3;
+ (_NSRange)rangeOfTextBetweenMatchingPunctuationsNearIndex:(long long)arg1 inString:(id)arg2;
@end
