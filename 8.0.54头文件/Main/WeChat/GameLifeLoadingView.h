@interface GameLifeLoadingView : MMUIView <GCLoadingViewProtocol>
{
    UIImageView * _loadingImageView; // +0x8
    MMUILabel * _loadingTextLabel; // +0x10
    id <GameLifeLoadingViewDelegate> _delegate; // +0x18
}
- (void)gcBeginLoading;
- (void)gcEndLoading;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)beginLoadingAnimation;
- (void)endLoadingAnimation;
- (void)layoutSubviews;
- (void)relayout;
- (void)startLoading;
- (void)onLoadingError;
- (void)handleRetryTap:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

