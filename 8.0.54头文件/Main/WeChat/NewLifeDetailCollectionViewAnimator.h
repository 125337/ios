@interface NewLifeDetailCollectionViewAnimator : NSObject
{
    id <NewLifeDetailCollectionViewAnimatorDelegate> _delegate; // +0x8
    UICollectionView * _collectionView; // +0x10
    NSString * _feedId; // +0x18
    NewLifeTransitionManager * _transitionManager; // +0x20
}
- (void)selectCell:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)shouldShowCellAtIndexPath:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)transitionManager;
- (void)setTransitionManager:(id)arg1;
- (void).cxx_destruct;
@end

