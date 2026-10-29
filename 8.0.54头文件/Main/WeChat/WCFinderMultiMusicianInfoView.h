@interface WCFinderMultiMusicianInfoView : MMUIView <WCFinderHorizontalSlideViewDelegate>
{
    id <WCFinderMultiMusicianInfoViewDelegate> _delegate; // +0x8
    WCFinderHorizontalSlideView * _collectionView; // +0x10
    NSArray * _singerInfoArray; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)collectionView;
- (void)updateWithSingerInfoArray:(id)arg1;
- (long long)onHorizontalSlideNumberOfItems;
- (id)onHorizontalSlideCollectionView:(id)arg1 indexPath:(id)arg2;
- (void)onHorizontalSlideDidSelectItemAtIndexPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (id)singerInfoArray;
- (void)setSingerInfoArray:(id)arg1;
- (void).cxx_destruct;
@end

