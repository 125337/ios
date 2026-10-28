@interface VideoMessageViewModel : CommonMessageViewModel <MessageDownloadable>
{
    NSString * m_videoPath; // +0x70
    CGSize m_thumbImageSize; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (BOOL)shouldShowSourceViewInContent;
- (BOOL)isShowSourceView;
- (BOOL)isSupportSourceViewBottomClick;
- (BOOL)shouldShowWeAppEntranceTail;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (id)accessibilityValue;
- (BOOL)isDownloading;
- (unsigned int)downloadingPercent;
- (id)getVideoDownoadSuccTipWording;
- (id)videoSize;
- (id)videoTime;
- (id)thumbImage;
- (BOOL)canPlayVideo;
- (BOOL)canForwardAndFavorites;
- (void)onMessageDownloadThumbImageOK;
- (void)onMessageDownloadVideoExpired;
- (void)onMessageDownloadVideoFail;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (id)getReferImage;
- (BOOL)contentExists;
- (id)videoPath;
- (CGSize)thumbImageSize;
- (void).cxx_destruct;
@end
