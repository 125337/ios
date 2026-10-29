@interface AppTingStandardListMessageViewModel : AppStandardImageContentMessageViewModel <MessagePreviewContainerLayout>
{
    StandardImageContentCellMetadata * _metadataInternal; // +0x70
    double _layoutReferenceWidth; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (double)currentLayoutReferenceWidth;
- (void)updateLayoutReferenceWidth:(double)arg1;
- (void)updatePreviewLayoutWithReferenceWidth:(double)arg1;
- (double)chatViewControllerWidth;
- (double)chatViewControllerShortSideLength;
- (BOOL)shouldLayoutIfNeeded;
- (double)rowHeight;
- (CGSize)measure:(CGSize)arg1;
- (unsigned long long)imageRatio;
- (id)metadata;
- (id)cellViewClassName;
- (BOOL)shouldShowSourceViewInContent;
- (BOOL)isShowSourceView;
- (id)shareCategoryItem;
- (id)title;
- (id)contentText;
- (id)sourceTitle;
- (id)sourceIcon;
- (id)reportViewId;
- (id)reportParams;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (void)onMessageDownloadThumbImageOK;
- (void)OnMsgDownloadThumbFail:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)hasReferImage;
- (id)getReferImage;
- (id)metadataInternal;
- (void)setMetadataInternal:(id)arg1;
- (double)layoutReferenceWidth;
- (void)setLayoutReferenceWidth:(double)arg1;
- (void).cxx_destruct;
@end
