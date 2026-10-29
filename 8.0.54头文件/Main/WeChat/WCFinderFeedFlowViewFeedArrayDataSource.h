@interface WCFinderFeedFlowViewFeedArrayDataSource : NSObject <WCFinderFeedFlowViewAdapterDataSource, WCFinderFeedFlowViewDataSource>
{
    id <WCFinderFeedFlowViewAdapterDataSourceDelegate> _delegate; // +0x8
    WCFinderFeedArray * _feedArray; // +0x10
}
- (void)observeChange:(id)arg1;
- (void)release:(id)arg1;
- (void)_onDataChanged;
- (BOOL)isEmpty;
- (id)getFeedArray;
- (id)feedAtIndexPath:(id)arg1;
- (long long)feedIndexAtFeedArray:(id)arg1;
- (id)feedIndexPathForTid:(id)arg1;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMOfTid:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 indexPathOfTid:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (void).cxx_destruct;
@end

