@interface MMFinderLiveMusicSettingSearchPanel : MMLandscapeDragBarPageSheet <MMFinderLiveMusicSettingSearchDelegate, MMRefreshTableFooterDelegate, UIScrollViewDelegate, UISearchBarDelegate, MMFinderLiveMusicSettingSearchTableDelegate, WCFinderTabPageViewBasicViewDelegate>
{
    MMFinderLiveTaskId * _taskId; // +0x8
    id <MMFinderLiveMusicSettingReportDelegate> _reportDelegate; // +0x10
    NSString * _aiAssistantId; // +0x18
    NSArray * _tingLists; // +0x20
    UIView * _contentView; // +0x28
    MMUISearchBar * _searchBar; // +0x30
    UIView * _selectFromTingView; // +0x38
    WCFinderTabPageHeaderView * _tabPageView; // +0x40
    UIScrollView * _tabsScrollView; // +0x48
    OrderedDictionary * _tabTableViewsDic; // +0x50
    OrderedDictionary * _tingTableModelsDic; // +0x58
    MMTableView * _searchTableView; // +0x60
    WCTimeLineFooterView * _footerView; // +0x68
    UILabel * _tipsLabel; // +0x70
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x78
    MMUILabel * _emptyTipsLabel; // +0x80
    MMFinderLiveMusicSettingSearchViewModel * _searchViewModel; // +0x88
    MMFinderLiveMusicSettingSearchTableViewModel * _searchTableViewModel; // +0x90
    NSString * _curSearchText; // +0x98
}
+ (id)showWithTaskId:(id)arg1 frame:(CGRect)arg2 musicLists:(id)arg3 aiAssistantId:(id)arg4 reportDelegate:(id)arg5;
+ (id)createSearchBar;
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2 tingLists:(id)arg3 aiAssistantId:(id)arg4 reportDelegate:(id)arg5;
- (void)showWithAnimated:(BOOL)arg1;
- (void)initSubviews;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutTingListViews;
- (void)layoutEmptyTipsLabel;
- (void)layoutContentView;
- (void)layoutSearchBar;
- (void)layoutTableView;
- (void)layoutTipLabel;
- (void)layoutActivityIndicatorView;
- (void)hideEmptyTips;
- (void)hideFooterView;
- (void)updateFooterView:(unsigned long long)arg1;
- (void)showTipsLabelWithText:(id)arg1;
- (void)hideTipsLabel;
- (void)startLoading;
- (void)stopLoading;
- (double)contentWidth;
- (double)contentHeight;
- (void)initSelectFromTingView;
- (void)initSearchBar;
- (void)initTabsBar;
- (void)initTingListScrollView;
- (void)createTableViewWithTingItem:(id)arg1;
- (void)initSearchTableViewAndFooter;
- (id)createSearchTableViewModel;
- (id)createSearchViewModel;
- (id)createSearchTableFooterView;
- (void)createEmptyTipsLabel;
- (void)musicDataSearchBarTextDidBeginEditing:(id)arg1;
- (void)musicDataSearchBarEndSearch:(id)arg1;
- (void)musicDataSearchBarWillSearch:(id)arg1 searchText:(id)arg2;
- (void)onGetMusicDataSearchResult:(int)arg1 resultArray:(id)arg2 continueFlag:(unsigned int)arg3;
- (void)onGetMusicDataContinueSearchResult:(int)arg1 resultArray:(id)arg2 continueFlag:(unsigned int)arg3;
- (void)handleAfterGetSearchResultWithContinueFlag:(unsigned int)arg1;
- (void)onMMFinderLiveMusicSettingSearchTableScroll;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)tabTableViewsDic;
- (id)tingTableModelsDic;
- (void)finderTabPageView:(id)arg1 didSelectIndex:(unsigned long long)arg2 isTriggerByUser:(BOOL)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)adjustUIOnSelectIndexChange;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (id)aiAssistantId;
- (void)setAiAssistantId:(id)arg1;
- (id)tingLists;
- (void)setTingLists:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)selectFromTingView;
- (void)setSelectFromTingView:(id)arg1;
- (id)tabPageView;
- (void)setTabPageView:(id)arg1;
- (id)tabsScrollView;
- (void)setTabsScrollView:(id)arg1;
- (void)setTabTableViewsDic:(id)arg1;
- (void)setTingTableModelsDic:(id)arg1;
- (id)searchTableView;
- (void)setSearchTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (id)emptyTipsLabel;
- (void)setEmptyTipsLabel:(id)arg1;
- (id)searchViewModel;
- (void)setSearchViewModel:(id)arg1;
- (id)searchTableViewModel;
- (void)setSearchTableViewModel:(id)arg1;
- (id)curSearchText;
- (void)setCurSearchText:(id)arg1;
- (void).cxx_destruct;
@end
