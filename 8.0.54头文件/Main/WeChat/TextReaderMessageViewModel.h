@interface TextReaderMessageViewModel : ReaderMessageViewModel <RichTextLayoutDelegate>
{
    CGSize _mainTitleSize; // +0x90
    NSMutableArray * _mainTitleStyles; // +0xa0
    long long _mainTitleLineCount; // +0xa8
    CGSize _partTitleSize; // +0xb0
    NSMutableArray * _partTitleStyles; // +0xc0
    BOOL _isPartTitleTruncated; // +0xc8
    long long _partTitleLineCount; // +0xd0
    double _viewHeight; // +0xd8
    double m_textViewMaxheight; // +0xe0
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (double)messageNodeViewHeight;
- (CGSize)mainTitleSize;
- (CGSize)titleSize;
- (BOOL)isLongText;
- (id)titleFont;
- (id)mainTitleFont;
- (double)textLineSpacing;
- (void)calTitleSizeAndTitleStyles;
- (double)titleMaxWidth;
- (id)titleStyles;
- (BOOL)hasMainTitle;
- (id)mainTitleText;
- (id)mainTitleStyles;
- (long long)lineCount;
- (unsigned int)maxContentLineNum;
- (id)bottomStr;
- (void).cxx_destruct;
@end

