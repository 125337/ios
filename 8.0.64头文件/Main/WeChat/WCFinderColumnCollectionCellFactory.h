@interface WCFinderColumnCollectionCellFactory : NSObject
+ (id)getColumnCollectionViewCellWithVM:(id)arg1 indexPath:(id)arg2 collectionView:(id)arg3;
+ (void)registeColumnCellForCollectionView:(id)arg1;
+ (double)defaultCellHeightWithWidth:(double)arg1;
+ (double)defaultCellHeightWithoutPlayer;
+ (CGRect)playerFrameOfContentVM:(id)arg1 cellWidth:(double)arg2;
+ (id)likeInfoParams;
@end
