@interface AppMusicMessageCellView : CommonMessageCellView <MMWebImageViewDelegate, MMMusicPlayerContollerDelegate>
{
    UILabel * m_titleLabel; // +0xb0
    UILabel * m_detailLabel; // +0xb8
    UIImageView * m_thumbImageView; // +0xc0
    UIImageView * m_blurBgImageView; // +0xc8
    MMMusicPlayerContoller * _playButton; // +0xd0
}
- (void)layoutContentView;
- (void)initThumbImageView;
- (void)initTitleLabel;
- (void)initDetailLabel;
- (void)addBlurEffectAlbumView;
- (double)calBlurImageHeight;
- (id)blurEffectAlbumImage;
- (void)addMusicPlayView;
- (void)updateThumbImage;
- (void)onLoadImageOK:(id)arg1;
- (id)operationMenuItems;
- (void)onForward:(id)arg1;
- (void)onFavorite:(id)arg1;
- (void)onTouchUpInside;
- (BOOL)canPeek;
- (id)urlForPreView:(id)arg1;
- (id)viewControllerForPreview:(id)arg1;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(CGPoint)arg2 inCoordinateView:(id)arg3;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(BOOL)arg3;
- (void)addMagicTapActions:(id)arg1;
- (BOOL)handleMagicTapAction:(id)arg1;
- (void).cxx_destruct;
@end
