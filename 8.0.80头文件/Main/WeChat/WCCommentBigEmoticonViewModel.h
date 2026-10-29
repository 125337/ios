@interface WCCommentBigEmoticonViewModel : NSObject
{
    BOOL _showRetryTitle; // +0x8
    double _retryIconLen; // +0x10
    double _retryFontSize; // +0x18
    double _retryImgTitleVerticalSpacing; // +0x20
    double _loadingIconLen; // +0x28
    double _loadingViewSize; // +0x30
}
- (double)retryIconLen;
- (void)setRetryIconLen:(double)arg1;
- (double)retryFontSize;
- (void)setRetryFontSize:(double)arg1;
- (double)retryImgTitleVerticalSpacing;
- (void)setRetryImgTitleVerticalSpacing:(double)arg1;
- (BOOL)showRetryTitle;
- (void)setShowRetryTitle:(BOOL)arg1;
- (double)loadingIconLen;
- (void)setLoadingIconLen:(double)arg1;
- (double)loadingViewSize;
- (void)setLoadingViewSize:(double)arg1;
@end
