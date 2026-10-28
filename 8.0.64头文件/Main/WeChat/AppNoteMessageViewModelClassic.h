@interface AppNoteMessageViewModelClassic : CommonMessageViewModel
{
    NSString * m_titleText; // +0x70
    NSString * m_contentText; // +0x78
    double m_titleHeight; // +0x80
    double m_contentHeight; // +0x88
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)titleText;
- (id)contentText;
- (double)titleHeight;
- (double)contentHeight;
- (int)imageCount;
- (id)additionalAccessibilityDescription;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (id)getReferImage;
- (void).cxx_destruct;
@end
