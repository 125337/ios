@interface AppEmoticonMessageViewModel : CommonMessageViewModel <IAPPEmoticonDownloadExt>
{
    BOOL _hasTryAutoDownload; // +0x70
    int _iconType; // +0x74
    double _currentProgress; // +0x78
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)accessibilityMessageType;
- (id)emoticonWrap;
- (BOOL)isDownloaded;
- (BOOL)isDownloading;
- (void)onAppEmoticonDownloading:(id)arg1;
- (void)onAppEmoticonDownloadFinished:(id)arg1;
- (BOOL)hasReferImage;
- (id)getReferImageViewWithSize:(CGSize)arg1;
- (BOOL)shouldShowSourceViewInContent;
- (BOOL)isShowSourceView;
- (BOOL)isSupportSourceViewBottomClick;
- (BOOL)shouldShowWeAppEntranceTail;
- (int)iconType;
- (void)setIconType:(int)arg1;
- (double)currentProgress;
- (void)setCurrentProgress:(double)arg1;
- (BOOL)hasTryAutoDownload;
- (void)setHasTryAutoDownload:(BOOL)arg1;
@end
