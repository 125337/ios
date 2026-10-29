@interface WCSnsTextSelectionConfig : NSObject
+ (BOOL)shouldApplyDarkModeColor;
+ (BOOL)enableTextSelectionWithDataItem:(id)arg1;
+ (BOOL)enableTextSelection;
+ (BOOL)enableTextSelectionWithAd;
+ (BOOL)enablePunctuationRangeSelection;
+ (BOOL)enableDoubleTapParagraphSelection;
+ (BOOL)enableLongPressParagraphSelection;
+ (BOOL)enableNaturalLanguageSelection;
+ (BOOL)enableDoubleTapNaturalLanguageSelection;
+ (BOOL)enableLongPressSelectAll;
+ (BOOL)enableAutoExpandOnLongPressSelectAll;
+ (void)configureTextView:(id)arg1;
+ (id)cursorColor;
+ (id)selectedColor;
+ (BOOL)isSelectionBeyondLastStyle:(id)arg1 dataItem:(id)arg2;
+ (BOOL)isRightCursorVisible:(id)arg1 dataItem:(id)arg2 cellView:(id)arg3;
+ (BOOL)isLeftCursorVisible:(id)arg1 dataItem:(id)arg2 cellView:(id)arg3;
+ (id)createRichTextCoverViewWithRichTextView:(id)arg1 menuResponder:(id)arg2 eventDelegate:(id)arg3 scrollView:(id)arg4;
+ (id)createMenuResponderWithDataItem:(id)arg1 responderDelegate:(id)arg2 menuItems:(id)arg3 isTranslatedText:(BOOL)arg4;
+ (CGRect)calculateCoverViewFrameForRichTextView:(id)arg1 scrollView:(id)arg2;
@end
