@interface WCFinderFeedSearchViewController : WCSearchViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderFeedSearchViewModelDelegate, UITextFieldDelegate, FavTagSearchFilterDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderFeedFlowViewMonitorDelegate, WCFinderFeedStaticCoverHighlightCollectionViewCellDelegate, UIScrollViewDelegate>
{
    int _commentScene; // +0x68
    int _interactionScene; // +0x6c
    unsigned long long _searchScene; // +0x70
    WCFinderFeedSearchViewModel * _viewModel; // +0x78
    NSString * _latestTagText; // +0x80
    NSString * _latestQueryText; // +0x88
    NSString * _searchSessionID; // +0x90
    NSMutableSet * _exposedTags; // +0x98
    UIView * _guideContentView; // +0xa0
    FavTagSearchFilter * _tagFilterView; // +0xa8
    WCFinderFeedFlowView * _resultFeedFlowView; // +0xb0
}
- (id)init;
- (void)viewDidLoad;
- (void)loadAndFetchFavTopicData;
- (void)viewDidLayoutSubviews;
- (void)relayoutSubviews;
- (void)onFavTopicDataChanged;
- (void)exposeTagsReport;
- (void)onFeedSearchDataChanged;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewDidBePresented:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)tryDoSearch;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (id)viewModel;
- (id)guideContentView;
- (id)tagFilterView;
- (id)resultFeedFlowView;
- (void)selectTag:(id)arg1 fromFilter:(id)arg2;
- (void)deselectTag:(id)arg1 fromFilter:(id)arg2;
- (void)onUpdateTag:(id)arg1 to:(id)arg2 fromFilter:(id)arg3;
- (void)updateSearchFieldText;
- (void)onClickCoverContact:(id)arg1 dataItem:(id)arg2;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)resetTypingAttributes;
- (unsigned long long)searchScene;
- (void)setSearchScene:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (int)interactionScene;
- (void)setInteractionScene:(int)arg1;
- (void)setViewModel:(id)arg1;
- (id)latestTagText;
- (void)setLatestTagText:(id)arg1;
- (id)latestQueryText;
- (void)setLatestQueryText:(id)arg1;
- (id)searchSessionID;
- (void)setSearchSessionID:(id)arg1;
- (id)exposedTags;
- (void)setExposedTags:(id)arg1;
- (void)setGuideContentView:(id)arg1;
- (void)setTagFilterView:(id)arg1;
- (void)setResultFeedFlowView:(id)arg1;
- (void).cxx_destruct;
@end

