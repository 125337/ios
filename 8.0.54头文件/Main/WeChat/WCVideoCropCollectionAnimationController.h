@interface WCVideoCropCollectionAnimationController : UIView
{
    BOOL _isEnlarged; // +0x8
    NSMutableDictionary * _imageViewsOnShow; // +0x10
    NSMutableSet * _imageViewsUnused; // +0x18
    UICollectionView * _collectionView; // +0x20
    long long _enlargedCellRow; // +0x28
    CGRect _newFrame; // +0x30
}
+ (id)sharedInstance;
+ (void)beginAnimationForCollectionView:(id)arg1 enlargedCellRow:(unsigned long long)arg2 collectionViewNewFrame:(CGRect)arg3 isEnlarge:(BOOL)arg4;
- (void)beginAnimationForCollectionView:(id)arg1 enlargedCellRow:(long long)arg2 collectionViewNewFrame:(CGRect)arg3 isEnlarge:(BOOL)arg4;
- (void)showEnlargeAnimation;
- (void)showRestoreAnimation;
- (id)keyForElementIndex:(long long)arg1 isInserted:(BOOL)arg2;
- (id)imageViewsOnShow;
- (void)setImageViewsOnShow:(id)arg1;
- (id)imageViewsUnused;
- (void)setImageViewsUnused:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (BOOL)isEnlarged;
- (void)setIsEnlarged:(BOOL)arg1;
- (long long)enlargedCellRow;
- (void)setEnlargedCellRow:(long long)arg1;
- (CGRect)newFrame;
- (void)setNewFrame:(CGRect)arg1;
- (void).cxx_destruct;
@end

