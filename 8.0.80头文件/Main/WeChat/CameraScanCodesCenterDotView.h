@interface CameraScanCodesCenterDotView : UIView <CAAnimationDelegate>
{
    UIImageView * _loadingDotView; // +0x8
    UIImageView * _netDisconnectView; // +0x10
    UIImageView * _scanGoodsGuideView; // +0x18
    CABasicAnimation * _loadingDotAnimation; // +0x20
}
- (id)init;
- (void)setupSubviews;
- (void)setupAnimations;
- (void)layoutSubviews;
- (void)startLoadingDotAnimation;
- (void)stopLoadingDotAnimation;
- (id)loadingDotView;
- (void)setLoadingDotView:(id)arg1;
- (id)netDisconnectView;
- (void)setNetDisconnectView:(id)arg1;
- (id)scanGoodsGuideView;
- (void)setScanGoodsGuideView:(id)arg1;
- (id)loadingDotAnimation;
- (void)setLoadingDotAnimation:(id)arg1;
- (void).cxx_destruct;
@end
