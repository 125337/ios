@interface GameKeyValueEditViewController : MMUIViewController
{
    UICollectionView * _collectionView; // +0x70
    GCCollectionViewManager * _viewManager; // +0x78
    NSMutableArray * _keyValueArray; // +0x80
}
- (id)init;
- (void)viewDidLoad;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)viewManager;
- (void)setViewManager:(id)arg1;
- (id)keyValueArray;
- (void)setKeyValueArray:(id)arg1;
- (void).cxx_destruct;
@end
