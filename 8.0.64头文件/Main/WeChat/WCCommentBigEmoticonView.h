@interface WCCommentBigEmoticonView : MMUIView <IStoreEmotionSingleDownloadMgrExt>
{
    double _emoticonMaxSide; // +0x8
    double _emoticonMinSide; // +0x10
    WCUserComment * _comment; // +0x18
    id <WCCommentBigEmoticonViewDelegate> _delegate; // +0x20
    SnsEmojiInfoObj * _snsEmojiInfoObj; // +0x28
    UIView * _coverMaskView; // +0x30
    MMEmoticonView * _emoticonView; // +0x38
    MMUIActivityIndicatorView * _loadingView; // +0x40
    MMUIButton * _retryBtn; // +0x48
    WCCommentBigEmoticonViewModel * _viewModel; // +0x50
}
- (id)initWithViewModel:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)defaultViewModel;
- (void)setup;
- (id)getEmoticonWrap;
- (CGSize)getEmoticonSize;
- (void)setSnsEmojiInfoObj:(id)arg1;
- (void)setEmoticonSize:(CGSize)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)onClickRetryButton;
- (void)onClickEmoticonView;
- (void)onLongPressEmoticonView:(id)arg1;
- (void)startDownloadEmoticon;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)onSingleEmotionDownloadFailedWithMd5:(id)arg1;
- (double)emoticonMaxSide;
- (void)setEmoticonMaxSide:(double)arg1;
- (double)emoticonMinSide;
- (void)setEmoticonMinSide:(double)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)snsEmojiInfoObj;
- (id)coverMaskView;
- (void)setCoverMaskView:(id)arg1;
- (id)emoticonView;
- (void)setEmoticonView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)retryBtn;
- (void)setRetryBtn:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end
