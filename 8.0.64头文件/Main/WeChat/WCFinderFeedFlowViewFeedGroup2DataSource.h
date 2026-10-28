@interface WCFinderFeedFlowViewFeedGroup2DataSource : NSObject <WCFinderFeedFlowViewAdapterDataSource, WCFinderFeedFlowViewDataSource>
{
    id <WCFinderFeedFlowViewAdapterDataSourceDelegate> _delegate; // +0x8
    WCFinderFeedGroup2 * _feedGroup; // +0x10
    NSDiffableDataSourceSnapshot * _snapshot; // +0x18
}
- (void)observeChange:(id)arg1;
- (void)release:(id)arg1;
- (void)_onGroupChanged:(id)arg1 snapshot:(id)arg2 oldSnapshot:(id)arg3;
- (BOOL)isEmpty;
- (id)getFeedArray;
- (id)feedAtIndexPath:(id)arg1;
- (long long)feedIndexAtFeedArray:(id)arg1;
- (id)feedIndexPathForTid:(id)arg1;
- (BOOL)shouldPinSectionHeader:(long long)arg1;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 indexPathOfTid:(id)arg2;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (id)finderFeedFlowView:(id)arg1 customSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)feedGroup;
- (void)setFeedGroup:(id)arg1;
- (id)snapshot;
- (void)setSnapshot:(id)arg1;
- (void).cxx_destruct;
@end
