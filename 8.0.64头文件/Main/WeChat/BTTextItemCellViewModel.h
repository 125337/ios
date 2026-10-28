@interface BTTextItemCellViewModel : BTReaderItemCellViewModel <RichTextLayoutDelegate>
{
    BOOL _isFullText; // +0x78
    BOOL _digestShowTailFold; // +0x79
}
+ (BOOL)canCreateViewModelWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
- (id)itemViewClassName;
- (void)switchFullText;
- (double)viewHeight;
- (double)textAreaMarginBottom;
- (double)currTitleAreaHeight;
- (id)titleFont;
- (double)titleLineSpace;
- (CGSize)titleSize;
- (unsigned long long)titleLineNumber;
- (BOOL)canFullText;
- (unsigned long long)parserTypes;
- (id)titleLabelStyles;
- (id)coverImgURL;
- (double)titleMaxWidth;
- (BOOL)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (BOOL)isFullText;
- (void)setIsFullText:(BOOL)arg1;
- (BOOL)digestShowTailFold;
@end
