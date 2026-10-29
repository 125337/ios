@interface WCFinderFeedImageEffectView : UIView
{
    double _loadingTopOffset; // +0x8
    id <WCFinderFeedImageViewProtocol> _delegate; // +0x10
    UIVisualEffectView * _visualView; // +0x18
    WCFinderAnimationLoadingView * _loadingView; // +0x20
    UIImageView * _retryImageView; // +0x28
    UILabel * _retryLabel; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)initSubView;
- (id)visualView;
- (id)loadingView;
- (id)retryImageView;
- (id)retryLabel;
- (void)layoutSubviews;
- (void)setRetryVisible:(BOOL)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (void)onStateOfError;
- (void)onClickRetry:(id)arg1;
- (double)loadingTopOffset;
- (void)setLoadingTopOffset:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setVisualView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setRetryImageView:(id)arg1;
- (void)setRetryLabel:(id)arg1;
- (void).cxx_destruct;
@end

