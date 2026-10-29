@interface AppRecordMessageViewModel : CommonMessageViewModel
{
    double m_titleHeight; // +0x70
    double m_descHeight; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)additionalAccessibilityDescription;
- (double)titleHeight;
- (double)descHeight;
@end

