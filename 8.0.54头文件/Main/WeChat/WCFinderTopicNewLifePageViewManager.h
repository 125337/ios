@interface WCFinderTopicNewLifePageViewManager : WCFinderTopicPageViewManager <NewLifeDetailCollectionViewAnimatorDelegate>
{
    NewLifeDetailCollectionViewAnimator * _animator; // +0x8
}
- (id)animator;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (id)indexPathForViewingFeedId:(id)arg1;
- (void)setAnimator:(id)arg1;
- (void).cxx_destruct;
@end

