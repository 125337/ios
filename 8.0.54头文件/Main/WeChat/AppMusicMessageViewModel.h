@interface AppMusicMessageViewModel : CommonMessageViewModel
{
    double m_titleHeight; // +0x70
    double m_detailHeight; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)accessibilityMessageType;
- (id)additionalAccessibilityDescription;
- (void)onMessageDownloadThumbImageOK;
- (BOOL)hasReferImage;
- (id)getReferImage;
- (double)titleHeight;
- (double)detailHeight;
@end

