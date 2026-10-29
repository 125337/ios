@interface ImageMessageViewModel : CommonMessageViewModel <IMessageWrapImgExt, MessageDownloadable>
{
    CGSize m_thumbImageSize; // +0x70
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)shouldShowSourceViewInContent;
- (BOOL)isShowSourceView;
- (id)sourceTitle;
- (BOOL)isSupportSourceViewBottomClick;
- (BOOL)shouldShowViewOriginalTail;
- (BOOL)shouldShowWeAppEntranceTail;
- (BOOL)shouldShowTailEntranceTail;
- (unsigned int)thumbDownloadStatus;
- (id)maskedThumbImagePath;
- (id)thumbImage;
- (id)maskedThumbImage;
- (BOOL)isImageExists;
- (id)imageData;
- (id)getImageIfDownFail;
- (BOOL)hasReferImage;
- (id)getReferImage;
- (BOOL)contentExists;
- (id)accessibilityMessageType;
- (void)onThumbImageSave:(id)arg1;
- (CGSize)thumbImageSize;
@end

