@interface WCFinderCommentImageView : MMUIView
{
    id <WCFinderCommentImageViewDelegate> _delegate; // +0x8
    UIImageView * _imageView; // +0x10
    WCFinderAnimationLoadingView * _loadingTipsView; // +0x18
    WCFinderComment * _comment; // +0x20
    MMUIButton * _retryBtn; // +0x28
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)setImageViewContentMode:(long long)arg1;
- (void)updateWithFinderImageComment:(id)arg1;
- (id)checkImageExistedWithUri:(id)arg1 token:(id)arg2 size:(CGSize)arg3;
- (id)downloadImageIfNeededWithUri:(id)arg1 token:(id)arg2 imgSize:(CGSize)arg3;
- (void)setState:(unsigned long long)arg1;
- (id)getFeedId;
- (id)displayingImage;
- (void)onClickImageView;
- (void)onClickRetryButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)loadingTipsView;
- (void)setLoadingTipsView:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)retryBtn;
- (void)setRetryBtn:(id)arg1;
- (void).cxx_destruct;
@end
