@interface WCFinderLiveMusicInfoHalfViewController : MMCPUIViewController <MMWebImageViewDelegate>
{
    id /* block */ _loadedBlock; // +0x68
    id /* block */ _closedBlock; // +0x70
    id /* block */ _tappedAppLabelBlock; // +0x78
    UIPanGestureRecognizer * _panGesture; // +0x80
    UIView * _containerView; // +0x88
    UIView * _closedView; // +0x90
    MMWebImageView * _musicCoverHDBackgroundImageView; // +0x98
    MMWebImageView * _musicCoverHDImageView; // +0xa0
    UIView * _musicCoverHDMaskView; // +0xa8
    UIView * _musicCoverHDMaskGradiantView; // +0xb0
    CAGradientLayer * _musicCoverHDMaskGradiantMaskLayer; // +0xb8
    CAGradientLayer * _musicCoverTopMaskLayer; // +0xc0
    MMWebImageView * _musicLogoImageView; // +0xc8
    MMMusicHorizontalScrollingView * _songNameLabel; // +0xd0
    MMMusicHorizontalScrollingView * _singerNameLabel; // +0xd8
    UIView * _musicInfoContainerBackgroundView; // +0xe0
    UIView * _musicInfoContainerView; // +0xe8
    UIImageView * _musicIconView; // +0xf0
    MMMusicHorizontalScrollingView * _genreTimeLabel; // +0xf8
    MMMusicHorizontalScrollingView * _albumLabel; // +0x100
    MMUILabel * _musicSourceLabel; // +0x108
    UIImageView * _musicSourceArrowView; // +0x110
    MMFinderLiveMusicDataItem * _musicDataItem; // +0x118
    UIView * _footerCloseBtnContainerView; // +0x120
    MMUIButton * _footerCloseBtn; // +0x128
}
- (id)initWithMusicDataItem:(id)arg1;
- (id)panGesture;
- (id)containerView;
- (id)closedView;
- (id)musicCoverHDBackgroundImageView;
- (id)musicLogoImageView;
- (id)musicCoverHDImageView;
- (id)musicCoverHDMaskGradiantView;
- (id)musicCoverHDMaskGradiantMaskLayer;
- (id)musicCoverTopMaskLayer;
- (id)musicCoverHDMaskView;
- (id)songNameLabel;
- (id)singerNameLabel;
- (id)musicInfoContainerView;
- (id)musicInfoContainerBackgroundView;
- (id)musicIconView;
- (id)albumLabel;
- (id)genreTimeLabel;
- (id)musicSourceLabel;
- (id)musicSourceArrowView;
- (id)footerCloseBtnContainerView;
- (id)footerCloseBtn;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)reloadData;
- (void)_layoutSubviews;
- (void)reloadMusicItem:(id)arg1;
- (void)handleMusicSourceLabelTap;
- (void)onClose;
- (void)closeAnimated:(BOOL)arg1;
- (void)close;
- (void)onLoadImageOK:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (id /* block */)loadedBlock;
- (void)setLoadedBlock:(id /* block */)arg1;
- (id /* block */)closedBlock;
- (void)setClosedBlock:(id /* block */)arg1;
- (id /* block */)tappedAppLabelBlock;
- (void)setTappedAppLabelBlock:(id /* block */)arg1;
- (void)setPanGesture:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setClosedView:(id)arg1;
- (void)setMusicCoverHDBackgroundImageView:(id)arg1;
- (void)setMusicCoverHDImageView:(id)arg1;
- (void)setMusicCoverHDMaskView:(id)arg1;
- (void)setMusicCoverHDMaskGradiantView:(id)arg1;
- (void)setMusicCoverHDMaskGradiantMaskLayer:(id)arg1;
- (void)setMusicCoverTopMaskLayer:(id)arg1;
- (void)setMusicLogoImageView:(id)arg1;
- (void)setSongNameLabel:(id)arg1;
- (void)setSingerNameLabel:(id)arg1;
- (void)setMusicInfoContainerBackgroundView:(id)arg1;
- (void)setMusicInfoContainerView:(id)arg1;
- (void)setMusicIconView:(id)arg1;
- (void)setGenreTimeLabel:(id)arg1;
- (void)setAlbumLabel:(id)arg1;
- (void)setMusicSourceLabel:(id)arg1;
- (void)setMusicSourceArrowView:(id)arg1;
- (id)musicDataItem;
- (void)setMusicDataItem:(id)arg1;
- (void)setFooterCloseBtnContainerView:(id)arg1;
- (void)setFooterCloseBtn:(id)arg1;
- (void).cxx_destruct;
@end

