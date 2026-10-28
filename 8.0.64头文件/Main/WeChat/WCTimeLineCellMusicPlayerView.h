@interface WCTimeLineCellMusicPlayerView : UIView <MMMusicPlayerContollerDelegate, IMusicPlayerExt>
{
    MMMusicPlayerContoller * _playButton; // +0x8
    CAGradientLayer * _gradientLayer; // +0x10
    MMMusicRhythmBackgroundView * _backgroundView; // +0x18
    UIVisualEffectView * _blurView; // +0x20
    UIViewPropertyAnimator * _animator; // +0x28
    MMWebImageView * _albumCoverView; // +0x30
    UIImageView * _blurBgImageView; // +0x38
    UIImageView * _albumMaskImageView; // +0x40
    UILabel * _titleLabel; // +0x48
    UILabel * _singerLabel; // +0x50
    UILabel * _detailLabel; // +0x58
    UILabel * _whoseMVLabel; // +0x60
    WCDataItem * _dataItem; // +0x68
    unsigned long long _scene; // +0x70
    WCImageView * _albumLocalImageView; // +0x78
}
+ (double)viewHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)resetGradientLayer;
- (void)configPlayButton;
- (void)updateWithDataItem:(id)arg1 scene:(unsigned long long)arg2;
- (void)onMusicPlayStatusChanged;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(BOOL)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)playButton;
- (void)setPlayButton:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (id)albumCoverView;
- (void)setAlbumCoverView:(id)arg1;
- (id)blurBgImageView;
- (void)setBlurBgImageView:(id)arg1;
- (id)albumMaskImageView;
- (void)setAlbumMaskImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)singerLabel;
- (void)setSingerLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)whoseMVLabel;
- (void)setWhoseMVLabel:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)albumLocalImageView;
- (void)setAlbumLocalImageView:(id)arg1;
- (void).cxx_destruct;
@end
