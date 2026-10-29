@interface GameKeyValueEditViewController : MMUIViewController
{
    UICollectionView * _collectionView; // +0x68
    GCCollectionViewManager * _viewManager; // +0x70
    NSMutableArray * _keyValueArray; // +0x78
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

