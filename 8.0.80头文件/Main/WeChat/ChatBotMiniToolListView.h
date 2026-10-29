@interface ChatBotMiniToolListView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, ChatBotMiniToolCellDelegate, UIGestureRecognizerDelegate>
{
    id <ChatBotMiniToolListViewDelegate> _delegate; // +0x8
    NSArray * _withFriendToolList; // +0x10
    UICollectionViewFlowLayout * _flowLayout; // +0x18
    UICollectionView * _collectionView; // +0x20
    NSArray * _myToolList; // +0x28
    NSArray * _recToolList; // +0x30
    ChatBotMiniToolCell * _currentSwipedCell; // +0x38
    NSSet * _reddotAppIds; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setupCollectionView;
- (void)setContentInset:(UIEdgeInsets)arg1;
- (UIEdgeInsets)contentInset;
- (void)setContentOffset:(CGPoint)arg1;
- (CGPoint)contentOffset;
- (void)updateWithToolListInfo:(id)arg1;
- (BOOL)isTogetherSection:(long long)arg1;
- (BOOL)isCreateSection:(long long)arg1;
- (void)updateWithToolList:(id)arg1;
- (void)updateReddotAppIds:(id)arg1;
- (id)titleForSection:(long long)arg1;
- (unsigned long long)toolListIndexForIndexPath:(id)arg1;
- (id)toolInfoAtIndexPath:(id)arg1;
- (id)recommendToolInfoAtIndexPath:(id)arg1;
- (id)withFriendToolInfoAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)miniToolCellWillBeginSwipe:(id)arg1;
- (void)miniToolCellDidSwipeOpen:(id)arg1 editEnabled:(BOOL)arg2;
- (void)miniToolCellDidTapDelete:(id)arg1;
- (void)miniToolCellDidTapEdit:(id)arg1;
- (void)onCreateToolTapped;
- (void)dispatchToolTap:(id)arg1 isRecommend:(BOOL)arg2;
- (void)onCollectionViewTapped:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)withFriendToolList;
- (void)setWithFriendToolList:(id)arg1;
- (id)flowLayout;
- (void)setFlowLayout:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)myToolList;
- (void)setMyToolList:(id)arg1;
- (id)recToolList;
- (void)setRecToolList:(id)arg1;
- (id)currentSwipedCell;
- (void)setCurrentSwipedCell:(id)arg1;
- (id)reddotAppIds;
- (void)setReddotAppIds:(id)arg1;
- (void).cxx_destruct;
@end
