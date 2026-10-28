@interface MMMusicMVPreviewEpisodeSelectCell : UICollectionViewCell
{
    BOOL _isDoingAnimation; // +0x8
    unsigned int _maskLayerViewAnimationDuration; // +0xc
    MMWebImageView * _imageView; // +0x10
    UILabel * _durationLabel; // +0x18
    MMMusicMVTrackItem * _trackItem; // +0x20
    CAShapeLayer * _borderLayer; // +0x28
    UIView * _maskLayerView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1;
- (void)setTrackItem:(id)arg1;
- (void)startMaskLayerViewAnimation;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (id)trackItem;
- (id)borderLayer;
- (void)setBorderLayer:(id)arg1;
- (id)maskLayerView;
- (void)setMaskLayerView:(id)arg1;
- (unsigned int)maskLayerViewAnimationDuration;
- (void)setMaskLayerViewAnimationDuration:(unsigned int)arg1;
- (BOOL)isDoingAnimation;
- (void)setIsDoingAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end
