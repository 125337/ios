@interface MMLivePivotFlowSharedData : NSObject
{
    BOOL _disableRelatedLive; // +0x8
    int _relatedListRequestScene; // +0xc
    id <MMLivePivotViewControllerItemsSource> _itemsSource; // +0x10
    id /* block */ _onPivotWillDisapear; // +0x18
    id /* block */ _onPivotDidBePopedOrDismissed; // +0x20
    unsigned long long _interactiveDismissTransitionOptions; // +0x28
    MMFinderLiveKTVSongItem * _pendingSongItem; // +0x30
}
- (id)itemsSource;
- (void)setItemsSource:(id)arg1;
- (id /* block */)onPivotWillDisapear;
- (void)setOnPivotWillDisapear:(id /* block */)arg1;
- (id /* block */)onPivotDidBePopedOrDismissed;
- (void)setOnPivotDidBePopedOrDismissed:(id /* block */)arg1;
- (unsigned long long)interactiveDismissTransitionOptions;
- (void)setInteractiveDismissTransitionOptions:(unsigned long long)arg1;
- (BOOL)disableRelatedLive;
- (void)setDisableRelatedLive:(BOOL)arg1;
- (int)relatedListRequestScene;
- (void)setRelatedListRequestScene:(int)arg1;
- (id)pendingSongItem;
- (void)setPendingSongItem:(id)arg1;
- (void).cxx_destruct;
@end
