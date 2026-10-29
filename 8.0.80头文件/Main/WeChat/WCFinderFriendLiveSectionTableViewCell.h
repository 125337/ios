@interface WCFinderFriendLiveSectionTableViewCell : UITableViewCell
{
    id <WCFinderFriendLiveSectionTableViewCellDelegate> _delegate; // +0x8
    unsigned long long _displayType; // +0x10
    WCFinderLiveFeedCollectionView * _liveCollectionView; // +0x18
}
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupLiveCollectionView:(BOOL)arg1;
- (void)updateLiveView:(id)arg1;
- (void)updateLiveView:(id)arg1 isInDarkMode:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDisplayType:(unsigned long long)arg1;
- (void)updateTitle:(id)arg1;
- (id)getVisibleFeedVM;
- (void)updateWithDataSource:(id)arg1;
- (void)liveDataFetchFinish:(BOOL)arg1;
- (void)liveSectionNoMoreData;
- (void)scrollToTop;
- (void)startPlayWhenDisplay;
- (void)stopPlayWhenDisappear;
- (id)delegate;
- (unsigned long long)displayType;
- (id)liveCollectionView;
- (void)setLiveCollectionView:(id)arg1;
- (void).cxx_destruct;
@end
