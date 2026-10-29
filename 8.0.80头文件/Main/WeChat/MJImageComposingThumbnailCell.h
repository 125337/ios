@interface MJImageComposingThumbnailCell : UICollectionViewCell
{
    BOOL _isCellSelected; // +0x8
    UIImageView * _thumbnailImageView; // +0x10
    NSString * _sceneID; // +0x18
    MJLivePhotoConfig * _liveConfig; // +0x20
    UIImageView * _liveImageView; // +0x28
    MJGradientView * _gradientView; // +0x30
    MJLivePhotoButtonModel * _liveModel; // +0x38
    MJDualBorderLayer * _borderLayer; // +0x40
}
+ (id)reuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)setLiveConfig:(id)arg1;
- (void)syncWithConfig;
- (void)setIsCellSelected:(BOOL)arg1;
- (void)updateCellSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_updateBorderAndCorner;
- (id)thumbnailImageView;
- (id)sceneID;
- (void)setSceneID:(id)arg1;
- (BOOL)isCellSelected;
- (id)liveConfig;
- (id)liveImageView;
- (void)setLiveImageView:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (id)liveModel;
- (void)setLiveModel:(id)arg1;
- (id)borderLayer;
- (void)setBorderLayer:(id)arg1;
- (void).cxx_destruct;
@end
