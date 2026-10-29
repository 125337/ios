@interface RingToneSearchProxy : NSObject <MMRefreshTableFooterDelegate, MMTListAdapterDataSource, RingTonePickerSectionControllerDelegate, WCSearchDelegate, UIScrollViewDelegate>
{
    BOOL _isFetchingData; // +0x8
    RingToneRecommendReporter_23604 * _reporter; // +0x10
    CContact * _exclusiveContact; // +0x18
    id <RingToneSearchProxyDelegate> _delegate; // +0x20
    WCSearcher * _searcher; // +0x28
    RingToneSearchViewModel * _viewModel; // +0x30
    WCTimeLineFooterView * _footerView; // +0x38
    MMTListAdapter * _listAdapter; // +0x40
    unsigned long long _searchRequestID; // +0x48
}
- (id)initWithSearcher:(id)arg1;
- (void)configSearcher;
- (void)initListAdapter;
- (void)searchWithFirstPage:(BOOL)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (id)viewModel;
- (id)footerView;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (void)didSelectRowAtIndex:(long long)arg1;
- (void)jumpToPlayerPage:(id)arg1 index:(long long)arg2;
- (void)willDisplayCellAtIndex:(long long)arg1;
- (void)jumpToAuthorPage:(id)arg1;
- (void)onExclusiveRingPlay:(id)arg1 isToPlay:(BOOL)arg2;
- (id)getFriendName;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)exclusiveContact;
- (void)setExclusiveContact:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)searcher;
- (void)setSearcher:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)setFooterView:(id)arg1;
- (id)listAdapter;
- (void)setListAdapter:(id)arg1;
- (unsigned long long)searchRequestID;
- (void)setSearchRequestID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

