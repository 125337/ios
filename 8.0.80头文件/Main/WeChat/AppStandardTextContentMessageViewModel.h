@interface AppStandardTextContentMessageViewModel : AppStandardContentBaseMessageViewModel
{
    NSString * _richTextTitle; // +0x70
    double _contentImgWidth; // +0x78
    double _contentImgLayoutWidth; // +0x80
}
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (double)contentImgWidth;
- (id)titleRichConfig;
- (id)contentRichConfig;
- (id)getRichTextTagColorString;
- (id)richTextTitle;
- (CGSize)calculateLayoutSize;
- (id)contentTextFixed;
- (id)title;
- (id)tagString;
- (id)tagColor;
- (unsigned long long)contentLayoutType;
- (id)contentText;
- (unsigned long long)contentImgCnt;
- (BOOL)allowsTitleShowEmoticon;
- (BOOL)allowsContentShowEmoticon;
- (double)layoutWidth;
- (CGSize)titleSize;
- (double)contentTextWidth;
- (void)setRichTextTitle:(id)arg1;
- (void)setContentImgWidth:(double)arg1;
- (double)contentImgLayoutWidth;
- (void)setContentImgLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end
