@interface WABGAudioMinimizationCoverView : UIView
{
    long long _state; // +0x8
    MMWebImageView * _coverView; // +0x10
    MMWebImageView * _backgroundImageView; // +0x18
    UIView * _failureTipsView; // +0x20
    SightIconView * _loadingView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setState:(long long)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setImageURL:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setDefaultImage;
- (void)updateCurBgImage:(id)arg1 imageURL:(id)arg2;
- (id)image;
- (void)startLoading;
- (void)stopLoading;
- (id)loadingView;
- (id)failureTipsView;
- (long long)state;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (void)setFailureTipsView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end

