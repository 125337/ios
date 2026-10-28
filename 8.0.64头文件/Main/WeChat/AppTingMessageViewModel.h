@interface AppTingMessageViewModel : CommonMessageViewModel
{
    double _titleHeight; // +0x70
    double _detailHeight; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)shouldShowSourceViewInContent;
- (id)tingItem;
- (BOOL)isShowSourceView;
- (BOOL)isFromShake;
- (id)shareListenItem;
- (id)finderUsername;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (void)onMessageDownloadThumbImageOK;
- (void)OnMsgDownloadThumbFail:(id)arg1 MsgWrap:(id)arg2;
- (void)onMessageUploadThumbImageOK;
- (BOOL)hasReferImage;
- (id)getReferImage;
- (double)titleHeight;
- (void)setTitleHeight:(double)arg1;
- (double)detailHeight;
- (void)setDetailHeight:(double)arg1;
@end
