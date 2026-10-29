@interface WCTextSelectionUtil : NSObject
+ (_NSRange)getSelectionRangeWithTouchIndex:(long long)arg1 textString:(id)arg2 enablePunctuationSelection:(BOOL)arg3 enableNaturalLanguageSelection:(BOOL)arg4;
+ (_NSRange)handleEllipsisTruncationWithOriginalRange:(_NSRange)arg1 textString:(id)arg2 ellipsisPosition:(unsigned long long)arg3;
+ (_NSRange)wordRangeAtIndex:(unsigned long long)arg1 inString:(id)arg2;
+ (_NSRange)getParagraphRangeWithIndex:(long long)arg1 textString:(id)arg2;
+ (_NSRange)getWordRangeAtParagraphGapWithIndex:(long long)arg1 textString:(id)arg2;
+ (BOOL)isPunctuation:(unsigned short)arg1;
@end
