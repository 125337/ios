@interface TemplateMsgSearchHelper : MMObject <MMUIViewControllerDelegate, IntelligentMsgImgBrowseViewControllerDelegate, RoomContactSelectDelegate, FTSMsgSearchTaskDelegate, WCSearchDelegate, WCDataSearchDelegate>
{
    BOOL m_bStartSearch; // +0x8
    BOOL m_bSearchBarBecomeFirstRespones; // +0x9
    BOOL m_bSearchBarCancelBtnDown; // +0xa
    NSMutableArray * m_arrSearchResult; // +0x10
    MMLoadingView * m_oLoadingView; // +0x18
    UIView * searchBarBackgroundColorView; // +0x20
    UIButton * backGroundButton; // +0x28
    UIButton * cancelButton; // +0x30
    id <TemplateMsgSearchHelperDelegate> m_delegate; // +0x38
    NSMutableArray * m_buttonTitles; // +0x40
    NSMutableArray * m_buttons; // +0x48
    NSMutableArray * m_divLines; // +0x50
    NSMutableArray * m_buttonIndexes; // +0x58
    MMUILabel * m_tipLabel; // +0x60
    MMUIViewController * m_searchParentVC; // +0x68
    MMUIViewController * m_searchCurVC; // +0x70
    UITextField * m_txtField; // +0x78
    NSString * m_tagText; // +0x80
    UIButton * m_leftBtn; // +0x88
    BOOL _hasMoving; // +0x90
    double _moveStartOffset; // +0x98
    double _moveCurOffset; // +0xa0
    double _moveContentOffsetY; // +0xa8
    double _searchTextFieldNormalWidth; // +0xb0
    CGSize _searchIconDefaultSize; // +0xb8
    FTSMessageDB * _ftsMessageDB; // +0xc8
    FTSMsgSearchTask * _ftsTask; // +0xd0
    SearchHelpDataItem * m_searchHelpDataItem; // +0xd8
    NSMutableDictionary * m_dicMatchTips; // +0xe0
    NSMutableArray * m_allContact; // +0xe8
    NSMutableArray * m_resultContact; // +0xf0
    BOOL _m_bShowSearchByName; // +0xf8
    BOOL _m_bShowSearchByTime; // +0xf9
    BOOL _bUsePanCancelGesture; // +0xfa
    WCDataSearcher * _searcher; // +0x100
    NSString * _templateSessionId; // +0x108
    unsigned long long _reportPageType; // +0x110
}
- (id)initWithContentsController:(id)arg1;
- (void)initFTSDB;
- (void)setBUsePanCancelGesture:(BOOL)arg1;
- (void)searchBarResignFirstResponder;
- (void)initBackGroundView;
- (double)getButtonTitleFontSize;
- (void)onTapButton:(id)arg1;
- (void)updateSearchFieldText:(id)arg1;
- (void)resetTypingAttributes;
- (void)msgSearchBarSearchByName;
- (void)msgSearchBarSearchByTime;
- (id)getViewController;
- (void)msgSearchBarWillPushByIndex:(long long)arg1;
- (void)reloadView;
- (void)resetBackGroundView;
- (BOOL)searchBarShouldBecomeFirstResponse;
- (id)searchBar;
- (void)fillSearchWordingCell:(id)arg1 withSearchText:(id)arg2;
- (void)makeSearchResultPreview:(id)arg1;
- (void)fillSearcResultCell:(id)arg1 result:(id)arg2;
- (void)fillSearcIntervalCell:(id)arg1 result:(id)arg2;
- (void)fillSearcLoadMoreCell:(id)arg1;
- (void)fillSearcNoResultCell:(id)arg1;
- (void)fillSearcResultTypeAccountCell:(id)arg1 result:(id)arg2;
- (void)fillSearcResultTypeAccountIntervalCell:(id)arg1 result:(id)arg2;
- (void)fillSearcResultTypeAccountLoadMoreCell:(id)arg1 result:(id)arg2;
- (void)fillSearcResultTypeAccountLoadMoreIntervalCell:(id)arg1 result:(id)arg2;
- (void)startSearch:(id)arg1;
- (void)searchContact:(id)arg1;
- (id)getCachedSearchHelpDataItem;
- (void)sortResultContact:(id)arg1 matchTips:(id)arg2;
- (void)tryFixSearchBarFrame;
- (void)fixSearchBarFrame;
- (void)beginSearchAnim;
- (void)endSearchAnim;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (BOOL)shouldHighlightRowAtIndexPath:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)wcSearcherWillDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (BOOL)wcSearcherShouldShowMenuForRowAtIndexPath:(id)arg1;
- (BOOL)wcSearcherCanPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3;
- (void)wcSearcherPerformAction:(SEL)arg1 forRowAtIndexPath:(id)arg2 withSender:(id)arg3;
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
- (void)dealloc;
- (void)startSearch;
- (BOOL)isSearchBarActive;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)onSearchPanGestureMoveRight;
- (void)makeHomePageTaskIfNil;
- (void)setHomepageNewestQuery:(id)arg1;
- (void)asyncSearchTextForHomePage:(id)arg1;
- (void)cancelFTSSearch;
- (void)onMsgSearchTaskResultChanged:(BOOL)arg1 taskObj:(id)arg2;
- (id)filterViewModel:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_bShowSearchByName;
- (void)setM_bShowSearchByName:(BOOL)arg1;
- (BOOL)m_bShowSearchByTime;
- (void)setM_bShowSearchByTime:(BOOL)arg1;
- (id)searcher;
- (void)setSearcher:(id)arg1;
- (BOOL)bUsePanCancelGesture;
- (id)templateSessionId;
- (void)setTemplateSessionId:(id)arg1;
- (unsigned long long)reportPageType;
- (void)setReportPageType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

