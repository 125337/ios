@interface WCFinderFeedListPagerCell : UICollectionViewCell <WCFinderFeedListViewDelegate, WCFinderFeedListViewDataSource>
{
    id <WCFinderFeedListPagerCellDelegate> _delegate; // +0x8
    WCFinderFeedListView * _feedListView; // +0x10
    WCFinderFeedArray * _feedArray; // +0x18
    unsigned long long _index; // +0x20
}
- (void)prepareForReuse;
- (void)updateFeedArray:(id)arg1 index:(unsigned long long)arg2;
- (void)curFeedHalfScreenIsShow:(BOOL)arg1;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (BOOL)canShowSwipEdu;
- (id)feedListView;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setFeedListView:(id)arg1;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
