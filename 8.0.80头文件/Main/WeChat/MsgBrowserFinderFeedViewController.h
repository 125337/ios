@interface MsgBrowserFinderFeedViewController : MsgBrowserBaseViewController <WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewSelectionDelegate, WCFinderBusinessCustomListDetailViewControllerDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedStaticCoverHighlightCollectionViewCellDelegate>
{
    BOOL _sliderInitialized; // +0x70
    BOOL _sliderActive; // +0x71
    unsigned int _clickMediaResultType; // +0x74
    unsigned int _clickMediaStartTime; // +0x78
    WCFinderFeedFlowView * _feedFlowView; // +0x80
    unsigned long long _feedFlowViewState; // +0x88
    WCFinderBusinessCustomListDetailViewController * _feedDetailViewController; // +0x90
    NSHashTable * _headerViewHashTable; // +0x98
    NSMutableArray * _arrFinderItems; // +0xa0
    NSMutableDictionary * _dicFeedSearchResultsByTitle; // +0xa8
    NSMutableDictionary * _dicFeedSearchMatchResults; // +0xb0
    NSMutableArray * _arrSectionTitle; // +0xb8
    unsigned long long _showFinderTime; // +0xc0
    UIView * _noResultView; // +0xc8
}
- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)initContentView;
- (void)layoutContentView;
- (id)sliderTargetScrollView;
- (void)sliderFullscreenStateChanged:(BOOL)arg1;
- (void)sliderWillEnterFullscreen;
- (void)sliderWillExitFullscreen;
- (id)sliderDateTextForScrollPosition;
- (void)scrollContentViewToTop;
- (void)reloadData;
- (void)didLoadNextPage:(id)arg1;
- (void)updateLoadingState;
- (BOOL)isOnlyMatchMsgFtsContent:(id)arg1;
- (BOOL)isMatchMsg:(id)arg1 SearchText:(id)arg2;
- (void)enterEditMode;
- (void)exitEditMode;
- (void)onClickSelectAll;
- (void)onFinderFeedFlowViewMultiSelect:(id)arg1;
- (void)onFinderFeedFlowViewChangeMultiSelect;
- (BOOL)finderFeedFlowView:(id)arg1 isContentVMSelected:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 setSelected:(BOOL)arg2 forContentVM:(id)arg3;
- (id)selectedItemsInFinderFeedFlowView:(id)arg1;
- (void)initFeedFlowData;
- (void)clearFeedFlowData;
- (void)clearFeedFlowView;
- (void)rebuildMsgData;
- (id)appendMsgData:(id)arg1;
- (id)insertOneMsgToFinderData:(id)arg1;
- (void)rebuildFinderSearchHighlight:(id)arg1;
- (id)genFinderDataItemWithMsg:(id)arg1;
- (id)convertFeedContentVMsToCustomBusinessFeedIDModels:(id)arg1;
- (id)getFinderSearchHighLightItemModelAtIndexPath:(id)arg1;
- (id)getArrSectionTitle;
- (void)initFeedFlowView;
- (void)handleFinderMsgReloadGrid;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (void)finderFeedFlowViewDidEndDragging:(id)arg1;
- (void)finderFeedFlowViewDidEndScrolling:(id)arg1;
- (void)finderFeedFlowViewWillBeginDragging:(id)arg1 atIndexPath:(id)arg2;
- (void)updateTitleHeaderView:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (BOOL)finderFeedFlowView:(id)arg1 layout:(id)arg2 pinHeaderToVisibleBoundsAtSection:(unsigned long long)arg3;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowView:(id)arg1 customSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)updateHeaderViewHashTable:(id)arg1;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (unsigned long long)wxMenuItemFlag;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (void)finderFeedFlowView:(id)arg1 updateCell:(id)arg2 atIndexPath:(id)arg3;
- (id)getMsgForContentVM:(id)arg1;
- (void)onFinderFeedLongPress:(id)arg1;
- (void)onFinderFeedFlowViewDelete:(id)arg1 indexPath:(id)arg2;
- (void)onFinderFeedFlowViewAnchor:(id)arg1;
- (void)onFinderFeedFlowViewForward:(id)arg1;
- (void)onFinderFeedFlowViewFavorite:(id)arg1;
- (void)onClickAnchorAction:(id)arg1;
- (void)onClickDeleteAction:(id)arg1 contentVM:(id)arg2;
- (void)onClickForwardAction:(id)arg1;
- (void)onClickFavoriteAction:(id)arg1;
- (void)forwardContentVM:(id)arg1;
- (void)favoriteContentVM:(id)arg1;
- (void)businessCustomListDetailRemainSection:(long long)arg1;
- (void)businessCustomListDetailDidDisappear;
- (void)handleDeleteMsgActionWithMsg:(id)arg1;
- (void)doDelMsgWithMsg:(id)arg1;
- (void)removeFinderMsgByLocalID:(unsigned int)arg1;
- (void)showMsgLocationWithMsg:(id)arg1;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (unsigned long long)feedFlowViewState;
- (void)setFeedFlowViewState:(unsigned long long)arg1;
- (id)feedDetailViewController;
- (void)setFeedDetailViewController:(id)arg1;
- (id)headerViewHashTable;
- (void)setHeaderViewHashTable:(id)arg1;
- (id)arrFinderItems;
- (void)setArrFinderItems:(id)arg1;
- (id)dicFeedSearchResultsByTitle;
- (void)setDicFeedSearchResultsByTitle:(id)arg1;
- (id)dicFeedSearchMatchResults;
- (void)setDicFeedSearchMatchResults:(id)arg1;
- (id)arrSectionTitle;
- (void)setArrSectionTitle:(id)arg1;
- (unsigned long long)showFinderTime;
- (void)setShowFinderTime:(unsigned long long)arg1;
- (unsigned int)clickMediaResultType;
- (void)setClickMediaResultType:(unsigned int)arg1;
- (unsigned int)clickMediaStartTime;
- (void)setClickMediaStartTime:(unsigned int)arg1;
- (BOOL)sliderInitialized;
- (void)setSliderInitialized:(BOOL)arg1;
- (BOOL)sliderActive;
- (void)setSliderActive:(BOOL)arg1;
- (id)noResultView;
- (void)setNoResultView:(id)arg1;
- (void).cxx_destruct;
@end
