@interface WCFinderStreamLiveCollectionViewCell : UICollectionViewCell
{
    id <WCFinderFriendLiveSectionTableViewCellDelegate> _delegate; // +0x8
    unsigned long long _displayType; // +0x10
    WCFinderLiveFeedCollectionView * _liveCollectionView; // +0x18
}
+ (double)cellHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupLiveCollectionView;
- (void)updateLiveView:(id)arg1;
- (void)updateTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayType:(unsigned long long)arg1;
- (id)getVisibleFeedVM;
- (void)updateWithDataSource:(id)arg1;
- (void)liveDataFetchFinish:(BOOL)arg1;
- (void)liveSectionNoMoreData;
- (void)startLiveAnimation;
- (void)scrollToTop;
- (id)delegate;
- (unsigned long long)displayType;
- (id)liveCollectionView;
- (void)setLiveCollectionView:(id)arg1;
- (void).cxx_destruct;
@end
