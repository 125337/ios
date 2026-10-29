@interface AppFileMessageViewModel : CommonMessageViewModel <MessageDownloadable>
{
    double m_titleHeight; // +0x70
    UIImage * _thumbImage; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (int)revokeTimeLimitInSecond;
- (BOOL)isFileExist;
- (id)titleText;
- (id)detailText;
- (id)thumbImage;
- (BOOL)shouldShowSourceViewInContent;
- (BOOL)isShowSourceView;
- (BOOL)isFromWeChatPC;
- (BOOL)isSupportSourceViewBottomClick;
- (BOOL)shouldShowWeAppEntranceTail;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (void)onMessageDownloadAppAttachExpired;
- (void)onMessageDownloadAppAttachFail;
- (BOOL)hasReferImage;
- (id)getReferImage;
- (BOOL)needRefreshReferImageOnStatusChange;
- (BOOL)contentExists;
- (double)titleHeight;
- (void)setThumbImage:(id)arg1;
- (void).cxx_destruct;
@end
