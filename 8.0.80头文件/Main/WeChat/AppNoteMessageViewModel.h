@interface AppNoteMessageViewModel : AppStandardTextContentMessageViewModel
{
    NSString * _parsedTitle; // +0x70
    NSString * _parsedContent; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)title;
- (id)contentText;
- (unsigned long long)contentImgCnt;
- (BOOL)allowsTitleShowEmoticon;
- (BOOL)allowsContentShowEmoticon;
- (id)additionalAccessibilityDescription;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (id)getReferImage;
- (id)parsedTitle;
- (void)setParsedTitle:(id)arg1;
- (id)parsedContent;
- (void)setParsedContent:(id)arg1;
- (void).cxx_destruct;
@end
