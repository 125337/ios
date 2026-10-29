@interface WARichTextViewHelper : NSObject <ILinkEventExt, IWARichTextViewHelper>
{
    RichTextView * _internalView; // +0x8
    NSString * _content; // +0x10
    id <WARichTextViewHelperDelegate> _delegate; // +0x18
}
- (id)init;
- (void)setContent:(id)arg1;
- (id)getContent;
- (id)internalView;
- (BOOL)isTouchesPassOn;
- (void)setIsTouchesPassOn:(BOOL)arg1;
- (BOOL)shouldHandleLongPress;
- (void)setShouldHandleLongPress:(BOOL)arg1;
- (id)textFont;
- (void)setTextFont:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (unsigned long long)parserType;
- (void)setParserType:(unsigned long long)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (double)lineSpacing;
- (void)setLineSpacing:(double)arg1;
- (double)lineNumber;
- (void)setLineNumber:(double)arg1;
- (long long)textAlignment;
- (void)setTextAlignment:(long long)arg1;
- (BOOL)bHandleTextClick;
- (void)setBHandleTextClick:(BOOL)arg1;
- (id)linkColor;
- (void)setLinkColor:(id)arg1;
- (BOOL)lineBreakByClipping;
- (void)setLineBreakByClipping:(BOOL)arg1;
- (id)truncatedTrailingLinkText;
- (void)setTruncatedTrailingLinkText:(id)arg1;
- (id)truncatedTrailingLinkColor;
- (void)setTruncatedTrailingLinkColor:(id)arg1;
- (id)truncatedTrailingLinkUrl;
- (void)setTruncatedTrailingLinkUrl:(id)arg1;
- (void)setTruncatedTrailingContent:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2;
- (double)getHeightForContent:(id)arg1 font:(id)arg2 width:(double)arg3 parserType:(unsigned long long)arg4;
- (double)getHeightForContent:(id)arg1 font:(id)arg2 width:(double)arg3 lineSpacing:(double)arg4 parserType:(unsigned long long)arg5;
- (CGRect)frameOfLastLine;
- (id)content;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
