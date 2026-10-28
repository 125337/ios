@interface ImageStyleLoadingConfig : NSObject
{
    BOOL _enableClickToRetry; // +0x8
    UIImage * _loadingImage; // +0x10
    UIView * _customLoadingView; // +0x18
    UIImage * _loadFailImage; // +0x20
    UIView * _customLoadFailView; // +0x28
}
- (id)loadingImage;
- (void)setLoadingImage:(id)arg1;
- (id)customLoadingView;
- (void)setCustomLoadingView:(id)arg1;
- (id)loadFailImage;
- (void)setLoadFailImage:(id)arg1;
- (id)customLoadFailView;
- (void)setCustomLoadFailView:(id)arg1;
- (BOOL)enableClickToRetry;
- (void)setEnableClickToRetry:(BOOL)arg1;
- (void).cxx_destruct;
@end
