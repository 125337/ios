@interface WCRichTextView : RichTextView
{
    BOOL _bEnableLongPressTextSelection; // +0x98
    BOOL _bEnableNaturalLanguageSelection; // +0x99
    BOOL _bEnablePunctuationRangeSelection; // +0x9a
    BOOL _bEnableDoubleTapParagraphSelection; // +0x9b
    BOOL _bEnableLongPressParagraphSelection; // +0x9c
    BOOL _bEnableDoubleTapNaturalLanguageSelection; // +0x9d
    BOOL _bEnableFoldSelectAllCoverWholeLine; // +0x9e
    BOOL _enableFirstLongPressSelectAll; // +0x9f
    BOOL _expandToMaxWidth; // +0xa0
}
- (long long)getTouchIndexWithTouchPoint:(CGPoint)arg1 FrontCursor:(BOOL)arg2 isTrimming:(BOOL)arg3 fromTail:(BOOL *)arg4;
- (long long)getTouchIndexWithTouchPoint:(CGPoint)arg1 FrontCursor:(BOOL)arg2;
- (_NSRange)getTouchRangeWithTouchPoint:(CGPoint)arg1;
- (_NSRange)getNaturalLanguageRangeWithTouchPoint:(CGPoint)arg1;
- (id)getSelectRectsWithRange:(_NSRange)arg1;
- (void)updateFrame:(double)arg1 height:(double)arg2;
- (_NSRange)calculateSelectedRangeWithLongTouchPoint:(CGPoint)arg1;
- (_NSRange)calculateSelectedRangeWithDoubleTapPoint:(CGPoint)arg1;
- (BOOL)shouldSetWholeFieldForLongPress;
- (id)getStringWithRange:(_NSRange)arg1;
- (BOOL)bEnableLongPressTextSelection;
- (void)setBEnableLongPressTextSelection:(BOOL)arg1;
- (BOOL)bEnableNaturalLanguageSelection;
- (void)setBEnableNaturalLanguageSelection:(BOOL)arg1;
- (BOOL)bEnablePunctuationRangeSelection;
- (void)setBEnablePunctuationRangeSelection:(BOOL)arg1;
- (BOOL)bEnableDoubleTapParagraphSelection;
- (void)setBEnableDoubleTapParagraphSelection:(BOOL)arg1;
- (BOOL)bEnableLongPressParagraphSelection;
- (void)setBEnableLongPressParagraphSelection:(BOOL)arg1;
- (BOOL)bEnableDoubleTapNaturalLanguageSelection;
- (void)setBEnableDoubleTapNaturalLanguageSelection:(BOOL)arg1;
- (BOOL)bEnableFoldSelectAllCoverWholeLine;
- (void)setBEnableFoldSelectAllCoverWholeLine:(BOOL)arg1;
- (BOOL)enableFirstLongPressSelectAll;
- (void)setEnableFirstLongPressSelectAll:(BOOL)arg1;
- (BOOL)expandToMaxWidth;
- (void)setExpandToMaxWidth:(BOOL)arg1;
@end
