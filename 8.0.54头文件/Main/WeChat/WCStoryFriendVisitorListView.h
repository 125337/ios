@interface WCStoryFriendVisitorListView : MMUIView <UICollectionViewDataSource, WCStoryFriendVisitHeadCellDelegate>
{
    id <WCStoryFriendVisitorListViewDelegate> _delegate; // +0x8
    id <WCStoryFriendVisitorListViewDataSource> _dataSource; // +0x10
    UICollectionView * _collectionView; // +0x18
    UILabel * _tipsLabel; // +0x20
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)reloadData;
- (void)scrollToBottom:(BOOL)arg1;
- (void)setup;
- (void)setupSubViews;
- (void)setupGesture;
- (void)updateUI;
- (void)handlePanGesture:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)WCStoryFriendVisitHeadCell:(id)arg1 didClickHeadViewWithComment:(id)arg2;
- (id)flowLayout;
- (id)collectionView;
- (id)tipsLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

