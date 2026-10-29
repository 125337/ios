@interface WeNotePasteboardManager : NSObject
+ (id)getBestFormattedTextFromPasteboard;
+ (id)getBestFormattedTextFromPasteboardItem:(id)arg1;
+ (BOOL)isEnablePasteboard;
+ (id)tryRTFDFormat:(id)arg1;
+ (id)tryRTFFormat:(id)arg1;
+ (id)tryHTMLFormat:(id)arg1;
+ (id)fallbackToPlainText:(id)arg1;
+ (id)tryRTFDFormatFromItem:(id)arg1;
+ (id)tryRTFFormatFromItem:(id)arg1;
+ (id)tryHTMLFormatFromItem:(id)arg1;
+ (id)fallbackToPlainTextFromItem:(id)arg1;
+ (id)dataFromItem:(id)arg1 forType:(id)arg2;
+ (id)stringFromItem:(id)arg1 forType:(id)arg2;
+ (void)logPasteboardContents;
+ (id)convertAttributedString:(id)arg1;
+ (BOOL)isPasteFromNotesApp;
+ (id)parseTextAttribute:(id)arg1 textContent:(id)arg2;
+ (double)getFontWeight:(id)arg1;
+ (id)describeFontWeight:(double)arg1;
+ (BOOL)isBulletOrNumberPattern:(id)arg1;
+ (id)describeColor:(id)arg1;
+ (id)colorToHexString:(id)arg1;
@end
