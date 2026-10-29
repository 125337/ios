@interface AppDefaultMessageViewModel : CommonMessageViewModel
{
    double m_titleHeight; // +0x70
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)thumbImage;
- (id)additionalAccessibilityDescription;
- (void)onMessageDownloadThumbImageOK;
- (double)titleHeight;
@end

