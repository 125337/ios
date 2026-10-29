@interface AppGiftCardMessageViewModel : CommonMessageViewModel
{
    double m_titleHeight; // +0x70
    double m_detailHeight; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (id)sourceIcon;
- (BOOL)shouldHideSourceViewSepLine;
- (double)sourceViewInsideHeight;
- (id)thumbImage;
- (void)onMessageDownloadThumbImageOK;
- (double)titleHeight;
- (double)detailHeight;
@end
