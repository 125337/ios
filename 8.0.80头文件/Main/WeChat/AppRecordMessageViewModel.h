@interface AppRecordMessageViewModel : AppStandardTextContentMessageViewModel
{
    double m_titleHeight; // +0x70
    double m_descHeight; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (id)title;
- (unsigned long long)contentLayoutType;
- (id)contentText;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)additionalAccessibilityDescription;
@end
