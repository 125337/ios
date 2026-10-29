@interface WCFinderCommentEmoticonView : MMUIView <IStoreEmotionSingleDownloadMgrExt>
{
    BOOL _autoPlay; // +0x8
    NSValue * _emotionDisplaySize; // +0x10
    id <WCFinderCommentEmoticonViewDelegate> _delegate; // +0x18
    UIView * _coverMaskView; // +0x20
    MMEmoticonView * _emoticonView; // +0x28
    WCFinderAnimationLoadingView * _loadingTipsView; // +0x30
    WCFinderComment * _comment; // +0x38
    MMUIButton * _retryBtn; // +0x40
    unsigned long long _startDownloadImgBeginTimeMs; // +0x48
}
+ (CGSize)sizeWithFinderEmoticonComment:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (CGSize)updateWithFinderEmoticonComment:(id)arg1;
- (void)setEmoticonSize:(CGSize)arg1;
- (void)setState:(unsigned long long)arg1;
- (id)getFeedId;
- (void)onClickRetryButton;
- (void)onClickEmoticonView;
- (void)onLongPressEmoticonView:(id)arg1;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (id)emotionDisplaySize;
- (void)setEmotionDisplaySize:(id)arg1;
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)coverMaskView;
- (void)setCoverMaskView:(id)arg1;
- (id)emoticonView;
- (void)setEmoticonView:(id)arg1;
- (id)loadingTipsView;
- (void)setLoadingTipsView:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)retryBtn;
- (void)setRetryBtn:(id)arg1;
- (unsigned long long)startDownloadImgBeginTimeMs;
- (void)setStartDownloadImgBeginTimeMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
