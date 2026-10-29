@interface AppFileMessageViewModel : CommonMessageViewModel <MessageDownloadable>
{
    double m_titleHeight; // +0x70
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (int)revokeTimeLimitInSecond;
- (BOOL)isFileExist;
- (id)titleText;
- (id)detailText;
- (BOOL)shouldShowSourceViewInContent;
- (BOOL)isShowSourceView;
- (BOOL)isSupportSourceViewBottomClick;
- (BOOL)shouldShowWeAppEntranceTail;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (void)onMessageDownloadAppAttachExpired;
- (void)onMessageDownloadAppAttachFail;
- (BOOL)hasReferImage;
- (id)getReferImage;
- (BOOL)contentExists;
- (double)titleHeight;
@end

