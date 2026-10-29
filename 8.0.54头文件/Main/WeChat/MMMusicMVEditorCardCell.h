@interface MMMusicMVEditorCardCell : UICollectionViewCell <MMMusicMVEditorCardSliderDelegate, MMMusicMVEpisodeItemCellViewDelegate>
{
    id /* block */ _onTappedRevertBlock; // +0x8
    id /* block */ _onTappedCropBlock; // +0x10
    id /* block */ _onSlideProgressBlock; // +0x18
    id <MMMusicMVEditorCardCellDelegate> _cellViewDelegate; // +0x20
    MMMusicLiveLyricDisplayView * _lyricView; // +0x28
    MMMusicMVEditorCardSlider * _slider; // +0x30
    MMMusicMVEpisodeItemCellView * _videoView; // +0x38
    MMMusicMVTrackItem * _cellModel; // +0x40
    UIImageView * _defaultBgImageView; // +0x48
    UIButton * _revertButton; // +0x50
    UIButton * _cropButton; // +0x58
    CAShapeLayer * _borderLayer; // +0x60
}
+ (double)videoViewHeightWithCellHeight:(double)arg1;
+ (double)videoViewCenterYOffset:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)setCellModel:(id)arg1 initialVideoTime:(double)arg2;
- (void)updateSubviewsExceptVideo;
- (void)setAccessoriesAlpha:(double)arg1;
- (void)setSelected:(BOOL)arg1;
- (BOOL)hasVideoSelected;
- (void)updateMusicPlayOffset:(float)arg1;
- (void)cardSlider:(id)arg1 didFinishPanningTimeTo:(float)arg2;
- (void)handleTappedRevert:(id)arg1;
- (void)handleTappedCrop:(id)arg1;
- (BOOL)episodeItemCellViewIsInUse:(id)arg1;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id /* block */)onTappedRevertBlock;
- (void)setOnTappedRevertBlock:(id /* block */)arg1;
- (id /* block */)onTappedCropBlock;
- (void)setOnTappedCropBlock:(id /* block */)arg1;
- (id /* block */)onSlideProgressBlock;
- (void)setOnSlideProgressBlock:(id /* block */)arg1;
- (id)cellViewDelegate;
- (void)setCellViewDelegate:(id)arg1;
- (id)lyricView;
- (void)setLyricView:(id)arg1;
- (id)slider;
- (void)setSlider:(id)arg1;
- (id)videoView;
- (void)setVideoView:(id)arg1;
- (id)cellModel;
- (void)setCellModel:(id)arg1;
- (id)defaultBgImageView;
- (void)setDefaultBgImageView:(id)arg1;
- (id)revertButton;
- (void)setRevertButton:(id)arg1;
- (id)cropButton;
- (void)setCropButton:(id)arg1;
- (id)borderLayer;
- (void)setBorderLayer:(id)arg1;
- (void).cxx_destruct;
@end

