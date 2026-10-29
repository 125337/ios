@interface AppTingMessageViewModel : CommonMessageViewModel <MessagePreviewContainerLayout>
{
    BOOL _hasPreviewReferenceWidth; // +0x70
    double _titleHeight; // +0x78
    double _detailHeight; // +0x80
    double _constrainedContainerWidth; // +0x88
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (double)chatViewControllerWidth;
- (void)updatePreviewLayoutWithReferenceWidth:(double)arg1;
- (BOOL)shouldLayoutIfNeeded;
- (double)rowHeight;
- (CGSize)measure:(CGSize)arg1;
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
- (double)constrainedContainerWidth;
- (void)setConstrainedContainerWidth:(double)arg1;
- (BOOL)hasPreviewReferenceWidth;
- (void)setHasPreviewReferenceWidth:(BOOL)arg1;
@end
