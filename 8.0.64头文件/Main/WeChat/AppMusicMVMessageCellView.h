@interface AppMusicMVMessageCellView : CommonMessageCellView <MMWebImageViewDelegate, MMMusicPlayerContollerDelegate>
{
    UILabel * m_titleLabel; // +0xb0
    UILabel * m_singerLabel; // +0xb8
    UILabel * m_mvLabel; // +0xc0
    UILabel * m_whoseMVlabel; // +0xc8
    MMWebImageView * m_thumbImageView; // +0xd0
    UIImageView * m_blurBgImageView; // +0xd8
    CAShapeLayer * m_blurBgMaskLayer; // +0xe0
    AppMusicBlurCoverView * m_blurCoverImageView; // +0xe8
    MMMusicPlayerContoller * _playButton; // +0xf0
    BOOL _bHasAddBlur; // +0xf8
}
- (void)prepareForReuse;
- (void)updateStatus;
- (void)layoutContentView;
- (void)initThumbImageView;
- (void)initTitleLabel;
- (void)initSingerDetailLabel;
- (void)initMVLabel;
- (void)initWhoseMVLabel;
- (void)addBlurEffectAlbumView;
- (void)addBlurBgView;
- (id)blurCoverImageView;
- (void)addBlurBgCoverView;
- (double)calBlurImageHeight;
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
- (void)onClickAsRefer;
- (void).cxx_destruct;
@end
