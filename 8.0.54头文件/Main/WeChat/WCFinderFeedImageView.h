@interface WCFinderFeedImageView : UIView
{
    id <WCFinderFeedImageViewProtocol> _delegate; // +0x8
    double _loadingTopOffset; // +0x10
    double _imageHeightWidRatio; // +0x18
    UIImageView * _imageView; // +0x20
    WCFinderAnimationLoadingView * _loadingView; // +0x28
    UIImageView * _retryImageView; // +0x30
    UILabel * _retryLabel; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)initSubView;
- (void)setFrame:(CGRect)arg1;
- (id)imageView;
- (id)loadingView;
- (id)retryImageView;
- (id)retryLabel;
- (void)updateImageViewFrame;
- (void)layoutSubviews;
- (void)setRetryVisible:(BOOL)arg1;
- (void)changeFeedImageViewBackgroundColor:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal:(id)arg1;
- (void)onStateOfError;
- (BOOL)isExistImage;
- (void)onClickRetry:(id)arg1;
- (void)hiddenLoadingAnimationIfNeeded;
- (void)resumeLoadingAnimationIfNeeded;
- (BOOL)isAnimating;
- (id)getFeedImage;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)loadingTopOffset;
- (void)setLoadingTopOffset:(double)arg1;
- (double)imageHeightWidRatio;
- (void)setImageHeightWidRatio:(double)arg1;
- (void)setImageView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setRetryImageView:(id)arg1;
- (void)setRetryLabel:(id)arg1;
- (void).cxx_destruct;
@end

