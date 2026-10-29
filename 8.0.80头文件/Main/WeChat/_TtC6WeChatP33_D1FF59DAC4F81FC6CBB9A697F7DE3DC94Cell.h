@interface _TtC6WeChatP33_D1FF59DAC4F81FC6CBB9A697F7DE3DC94Cell : UICollectionViewCell <UICollectionViewDelegate>
{
     titleLabel; // +0x8
     totalLabel; // +0x10
     model; // +0x18
     pageIntervals; // +0x40
     selectedPageIndex; // +0x48
     itemsPerPage; // +0x50
     targetEpisode; // +0x58
     needsPageUpdate; // +0x61
     $__lazy_storage_$_rangeCollectionView; // +0x68
     $__lazy_storage_$_rangeDataSource; // +0x70
     $__lazy_storage_$_episodeCollectionView; // +0x78
     $__lazy_storage_$_episodeDataSource; // +0x80
}
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void).cxx_destruct;
@end
