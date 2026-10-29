@interface WCFinderColumnCollectionCellFactory : NSObject
+ (id)getColumnCollectionViewCellWithVM:(id)arg1 indexPath:(id)arg2 collectionView:(id)arg3 columnMediaType:(unsigned long long)arg4;
+ (void)registeColumnCellForCollectionView:(id)arg1;
+ (BOOL)isColumnCardFullInteractiveEnabled;
+ (double)defaultCellHeightWithWidth:(double)arg1 columnMediaType:(unsigned long long)arg2;
+ (struct)currentConfig:(unsigned long long)arg1;
+ (double)defaultCellHeightWithoutPlayer:(unsigned long long)arg1;
+ (CGRect)playerFrameOfContentVM:(id)arg1 cellWidth:(double)arg2 cellHeight:(double)arg3 columnMediaType:(unsigned long long)arg4;
+ (id)likeInfoParams;
@end
