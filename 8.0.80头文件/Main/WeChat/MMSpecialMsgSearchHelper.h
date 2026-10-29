@interface MMSpecialMsgSearchHelper : MMObject <MMUIViewControllerDelegate, IntelligentMsgImgBrowseViewControllerDelegate, RoomContactSelectDelegate, FTSMsgSearchTaskDelegate, WCSearchDelegate, WCDataSearchDelegate, FTSMsgScopeViewControllerDelegate, WCPayPaymentFunctionSearchCGIDelegate>
{
    BOOL m_bStartSearch; // +0x8
    BOOL m_bSearchBarBecomeFirstRespones; // +0x9
    NSMutableArray * m_arrSearchResult; // +0x10
    MMLoadingView * m_oLoadingView; // +0x18
    UIView * searchBarBackgroundColorView; // +0x20
    UIButton * backGroundButton; // +0x28
    UIButton * cancelButton; // +0x30
    id <MMSpecialMsgSearchHelperDelegate> m_delegate; // +0x38
    NSString * m_sessionId; // +0x40
    NSMutableArray * m_buttonTitles; // +0x48
    NSMutableArray * m_buttons; // +0x50
    NSMutableArray * m_divLines; // +0x58
    NSMutableArray * m_buttonIndexes; // +0x60
    MMUILabel * m_tipLabel; // +0x68
    MMUIViewController * m_searchParentVC; // +0x70
    MMUIViewController * m_searchCurVC; // +0x78
    UITextField * m_txtField; // +0x80
    NSString * m_tagText; // +0x88
    UIButton * m_leftBtn; // +0x90
    UIButton * m_dateBtn; // +0x98
    BOOL _hasMoving; // +0xa0
    double _moveStartOffset; // +0xa8
    double _moveCurOffset; // +0xb0
    double _moveContentOffsetY; // +0xb8
    long long startTime; // +0xc0
    FTSMessageDB * _ftsMessageDB; // +0xc8
    FTSMsgSearchTask * _ftsTask; // +0xd0
    FTSMsgSearchMgr * _searchMgr; // +0xd8
    NSMutableDictionary * m_dicMatchTips; // +0xe0
    MMUIView * m_tipLabelLineView; // +0xe8
    BOOL _m_bShowSearchByTime; // +0xf0
    BOOL _bUsePanCancelGesture; // +0xf1
    BOOL _bIsCluster; // +0xf2
    BOOL _bIsHiddenCustomerCancelButton; // +0xf3
    BOOL _bWCPayBrandSearchShouldShowRelatedFuncCell; // +0xf4
    BOOL _bWCPayBrandSearchShouldShowMoreResultCell; // +0xf5
    BOOL _bWCPayShouldCheckOnePageEnoughForResult; // +0xf6
    unsigned int _m_msgSearchBusinessType; // +0xf8
    WCDataSearcher * _searcher; // +0x100
    WCPayBrandMsgSearchRelatedFuncViewModel * _wcpayRelatedFuncModel; // +0x108
    NSObject<OS_dispatch_semaphore> * _payBrandSearchSema; // +0x110
}
+ (void)reportKFSessionBoxMsgSearchActionLog:(id)arg1;
- (void)reportKFSessionBoxMsgSearchActionLogWithAction:(unsigned int)arg1;
- (void)reportKFSessionBoxMsgSearchActionLogWithAction:(unsigned int)arg1 resCount:(unsigned int)arg2 matchType:(unsigned int)arg3;
- (void)wcsWillReportPresentSearch:(id)arg1;
- (id)initWithContentsController:(id)arg1;
- (id)initWithContentsController:(id)arg1 resultCellClass:(Class)arg2;
- (void)initFTSDB;
- (void)setBUsePanCancelGesture:(BOOL)arg1;
- (void)searchBarResignFirstResponder;
- (void)dealloc;
- (void)initBackGroundView;
- (double)getButtonTitleFontSize;
- (void)onTapButton:(id)arg1;
- (void)updateSearchFieldText:(id)arg1;
- (void)resetTypingAttributes;
- (void)msgSearchBarSearchByTime;
- (id)getViewController;
- (void)msgSearchBarWillPushByIndex:(long long)arg1;
- (void)reloadView;
- (void)resetBackGroundView;
- (BOOL)searchBarShouldBecomeFirstResponse;
- (double)getTableVisibleHeight;
- (double)getSearcherVisibleHeight;
- (id)searchBar;
- (void)fillSearcResultCell:(id)arg1 result:(id)arg2;
- (void)fillClusterSearcResultCell:(id)arg1 result:(id)arg2;
- (void)fillSearcIntervalCell:(id)arg1 result:(id)arg2;
- (void)fillSearcLoadMoreCell:(id)arg1 index:(id)arg2;
- (void)fillSearcNoResultCell:(id)arg1;
- (void)startSearch:(id)arg1;
- (void)tryFixSearchBarFrame;
- (void)fixSearchBarFrame;
- (void)beginSearchAnim;
- (void)endSearchAnim;
- (double)calButtonWidth;
- (double)calButtonHeight;
- (void)asyncSearchTextForSpecialMsg:(id)arg1;
- (id)getRealSearchText;
- (id)cellForFirstTitleCell:(id)arg1 isHiddenTopLine:(BOOL)arg2;
- (id)cellForMoreCell:(id)arg1;
- (id)cellForMoreResultAndRelatedFuncCell:(BOOL)arg1;
- (void)addCellBottomWithCell:(id)arg1 needLineView:(BOOL)arg2 needLongLineView:(BOOL)arg3;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (BOOL)shouldHighlightRowAtIndexPath:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForRelatedFunctionCellInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)wcPayRelatedFuncFooterView:(id)arg1 shouldShowMoreResultCell:(BOOL)arg2;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)wcSearcherWillDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (BOOL)wcSearcherShouldShowMenuForRowAtIndexPath:(id)arg1;
- (BOOL)wcSearcherCanPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (void)cancelSearch;
- (void)finishSearch;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)updateSearchVCPosition;
- (void)cancelMoveSearchVC;
- (void)moveSearchVCToRight;
- (void)removeSearchVC;
- (void)wcsSearchBarTextDidEndEditing:(id)arg1;
- (id)getSearchText:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsDidPresentSearch:(id)arg1;
- (BOOL)wcsSearchBar:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)cancelBtnDown;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)wcsDidDismissSearch:(id)arg1;
- (void)startSearch;
- (BOOL)isSearchBarActive;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)onSearchPanGestureMoveRight;
- (id)onSearchPanGestureReturnBottomView;
- (void)makeHomePageTaskIfNil;
- (void)setHomepageNewestQuery:(id)arg1;
- (void)asyncSearchTextForHomePage:(id)arg1;
- (void)cancelFTSSearch;
- (void)onMsgSearchTaskResultChanged:(BOOL)arg1 taskObj:(id)arg2;
- (id)defualtFilterViewModel:(id)arg1 msgItem:(id)arg2;
- (void)defaultMakeSearchResultPreview:(id)arg1;
- (id)filterViewModel:(id)arg1 msgItem:(id)arg2;
- (void)makeSearchResultPreview:(id)arg1;
- (void)reportSearchAtion:(unsigned int)arg1 text:(id)arg2 useTime:(long long)arg3 result:(unsigned int)arg4 oprationTime:(long long)arg5;
- (void)reportSearchAtion:(unsigned int)arg1 text:(id)arg2 useTime:(long long)arg3 result:(unsigned int)arg4 oprationTime:(long long)arg5 arrMsgItem:(id)arg6;
- (void)setSearcherClickDoneBtnSearch;
- (void)didClusterSearchSelect:(id)arg1;
- (void)selectClusterMsgItem:(id)arg1;
- (void)selectClusterMsgItems:(id)arg1 withSessionUsername:(id)arg2;
- (void)handleNavigationCancelItemClick;
- (void)onGetLQTQryUserFundDetailResp:(id)arg1;
- (void)onClickWCPayRelatedFuncCell:(id)arg1;
- (void)onClickWCPayBrandSearchMoreResult;
- (BOOL)wcpayRelatedFuncModelValid;
- (BOOL)wcpaySearchRelatedFunctionEnabled;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_bShowSearchByTime;
- (void)setM_bShowSearchByTime:(BOOL)arg1;
- (id)searcher;
- (void)setSearcher:(id)arg1;
- (BOOL)bUsePanCancelGesture;
- (unsigned int)m_msgSearchBusinessType;
- (void)setM_msgSearchBusinessType:(unsigned int)arg1;
- (BOOL)bIsCluster;
- (void)setBIsCluster:(BOOL)arg1;
- (BOOL)bIsHiddenCustomerCancelButton;
- (void)setBIsHiddenCustomerCancelButton:(BOOL)arg1;
- (id)wcpayRelatedFuncModel;
- (void)setWcpayRelatedFuncModel:(id)arg1;
- (BOOL)bWCPayBrandSearchShouldShowRelatedFuncCell;
- (void)setBWCPayBrandSearchShouldShowRelatedFuncCell:(BOOL)arg1;
- (BOOL)bWCPayBrandSearchShouldShowMoreResultCell;
- (void)setBWCPayBrandSearchShouldShowMoreResultCell:(BOOL)arg1;
- (BOOL)bWCPayShouldCheckOnePageEnoughForResult;
- (void)setBWCPayShouldCheckOnePageEnoughForResult:(BOOL)arg1;
- (id)payBrandSearchSema;
- (void)setPayBrandSearchSema:(id)arg1;
- (void).cxx_destruct;
@end
