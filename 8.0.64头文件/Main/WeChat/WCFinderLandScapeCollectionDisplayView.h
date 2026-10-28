@interface WCFinderLandScapeCollectionDisplayView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    BOOL _readyToShow; // +0x8
    id <WCFinderLandScapeCollectionDisplayViewDelegate> _delegate; // +0x10
    double _layoutWidth; // +0x18
    UICollectionView * _collectionView; // +0x20
    UICollectionViewDiffableDataSource * _dataSource; // +0x28
    NSDiffableDataSourceSnapshot * _lastDataSnapshot; // +0x30
    UILabel * _collectionTitleLabel; // +0x38
    WCFinderFeedContentVM * _contentVM; // +0x40
    id <WCFinderCollectionFeedListProvider> _collectionDataProvider; // +0x48
    WCFinderLandScapePlayerParam * _param; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_setupUI;
- (void)_setupCollectionViewDataSource;
- (void)layoutSubviews;
- (void)_layoutUI;
- (void)updateWithContentVM:(id)arg1 param:(id)arg2;
- (BOOL)shouldShowLandscapeCollectionWithCollectionInfo:(id)arg1;
- (void)updateReadyToShowState;
- (void)reloadCollectionDataPullFromTop:(BOOL)arg1 firstPage:(BOOL)arg2;
- (void)jumpToTid:(id)arg1 animation:(BOOL)arg2;
- (id)getNextEpisode;
- (void)checkToPrefetchMoreData;
- (id)diffableItemIdentifiersWithTid:(id)arg1;
- (void)onFeedArrayChanged:(id)arg1 context:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)reportCellEventWithIndexPath:(id)arg1 event:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)readyToShow;
- (void)setReadyToShow:(BOOL)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)lastDataSnapshot;
- (void)setLastDataSnapshot:(id)arg1;
- (id)collectionTitleLabel;
- (void)setCollectionTitleLabel:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)collectionDataProvider;
- (void)setCollectionDataProvider:(id)arg1;
- (id)param;
- (void)setParam:(id)arg1;
- (void).cxx_destruct;
@end
