@interface MJImageRenderCell : UICollectionViewCell
{
    NSString * _sceneID; // +0x8
    UILabel * _titleLabel; // +0x10
    UIImageView * _imageView; // +0x18
    MJLivePhotoButton * _livePhotoButton; // +0x20
}
+ (id)reuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)updateWithSceneID:(id)arg1 livePhotoConfig:(id)arg2;
- (id)sceneID;
- (void)setSceneID:(id)arg1;
- (id)titleLabel;
- (id)imageView;
- (id)livePhotoButton;
- (void).cxx_destruct;
@end
