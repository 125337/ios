@interface MJImageRenderCell : UICollectionViewCell
{
    NSString * _sceneID; // +0x8
    UILabel * _titleLabel; // +0x10
    UIImageView * _imageView; // +0x18
    MJLivePhotoButton * _livePhotoButton; // +0x20
    double _aspectRatio; // +0x28
    double _lastAspectRatio; // +0x30
    CGSize _lastContentSize; // +0x38
}
+ (id)reuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithSceneID:(id)arg1 aspectRatio:(double)arg2 livePhotoConfig:(id)arg3;
- (void)_layoutImageView;
- (id)sceneID;
- (void)setSceneID:(id)arg1;
- (id)titleLabel;
- (id)imageView;
- (id)livePhotoButton;
- (double)aspectRatio;
- (void)setAspectRatio:(double)arg1;
- (CGSize)lastContentSize;
- (void)setLastContentSize:(CGSize)arg1;
- (double)lastAspectRatio;
- (void)setLastAspectRatio:(double)arg1;
- (void).cxx_destruct;
@end
