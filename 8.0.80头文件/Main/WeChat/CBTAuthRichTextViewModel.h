@interface CBTAuthRichTextViewModel : CBTAuthBaseViewModel
{
    NSString * _desc; // +0x8
}
+ (id)viewModelWithCardData:(id)arg1 cardWrap:(id)arg2 delegate:(id)arg3;
+ (void)parseRightIcon:(id)arg1 intoViewModel:(id)arg2;
+ (id)parseAuthButton:(id)arg1 requireOpenTarget:(BOOL)arg2;
+ (id)parseAuthTarget:(id)arg1;
+ (id)richTextParagraphsFromText:(id)arg1;
+ (id)normalizedRichTextLineBreaks:(id)arg1;
+ (id)normalizedRichTextParagraph:(id)arg1;
- (double)contentHeightForWidth:(double)arg1 maxHeight:(double)arg2;
- (double)richTextHeight:(id)arg1 font:(id)arg2 width:(double)arg3 lineNumber:(long long)arg4;
- (long long)maxDescLinesForWidth:(double)arg1;
- (double)maxDescriptionHeightWithCardWidth:(double)arg1;
- (id)getCellReuseId;
- (double)businessAreaHeightAfterDescriptionForWidth:(double)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (void).cxx_destruct;
@end
