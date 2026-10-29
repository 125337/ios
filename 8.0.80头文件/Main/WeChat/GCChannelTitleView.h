@interface GCChannelTitleView : UIView <GCClvManagerProtocol>
{
    UICollectionView * _collectionView; // +0x8
    GCCollectionViewManager * _collectionViewManager; // +0x10
    NSMutableArray * _titleArray; // +0x18
    unsigned long long _selectIndex; // +0x20
    id <GCChannelTitleDelegate> _channelTitleDelegate; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configureWithTitleArray:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)selectIndex:(unsigned long long)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionViewManager;
- (void)setCollectionViewManager:(id)arg1;
- (id)titleArray;
- (void)setTitleArray:(id)arg1;
- (unsigned long long)selectIndex;
- (void)setSelectIndex:(unsigned long long)arg1;
- (id)channelTitleDelegate;
- (void)setChannelTitleDelegate:(id)arg1;
- (void).cxx_destruct;
@end
