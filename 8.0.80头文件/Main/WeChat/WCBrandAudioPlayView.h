@interface WCBrandAudioPlayView : TingSharePlayButton
{
    UIImageView * _bgImageView; // +0x8
    UIImageView * _fgImageView; // +0x10
}
- (id)init;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)setBgImageAnimationImages:(CGSize)arg1;
- (void)setFgImageHighlightedImage:(CGSize)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (void)setSelected:(BOOL)arg1;
- (void)onMusicPlayStatusChanged;
- (id)bgImageView;
- (void)setBgImageView:(id)arg1;
- (id)fgImageView;
- (void)setFgImageView:(id)arg1;
- (void).cxx_destruct;
@end
