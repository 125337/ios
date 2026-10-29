@interface MMBGMSelectedSearchView : MMUIView <UITableViewDelegate, MMBGMSearchViewModelDelegate, UITextFieldDelegate, MMRefreshTableFooterDelegate, MMBGMSelectedTabTableViewCellDelegate, MMBGMSelectedTabTableViewCellDataReportSource, MMBGMCategoryViewDelegate>
{
    id <MMBGMSelectedSearchViewDelegate> _delegate; // +0x8
    long long _currentIndex; // +0x10
    MMBGMPanelPublishContext * _publishContext; // +0x18
    WCSearchBar * _searchBar; // +0x20
    MMUIButton * _cancelButton; // +0x28
    MMBGMCategoryView * _categoryView; // +0x30
    UITableView * _tableView; // +0x38
    UITableViewDiffableDataSource * _diffDataSource; // +0x40
    WCTimeLineFooterView * _footerView; // +0x48
    MMBGMSearchViewModel * _viewModel; // +0x50
    MMBGMSelectedConfig * _config; // +0x58
}
- (id)initWithFrame:(CGRect)arg1 config:(id)arg2;
- (void)setup;
- (void)setupDataReport;
- (id)genReportDict;
- (void)willShow;
- (void)willDismiss;
- (void)reset;
- (void)triggerSubViewExp;
- (void)setupData;
- (void)setKeyBoardShow:(BOOL)arg1;
- (void)unSelectedAllItem;
- (void)autoSetSelectedCellPlayingState;
- (void)autoStopSelectedCellPlayingState;
- (void)selectFirstMusicIfNeeded;
- (void)selectMusicAtIndex:(unsigned long long)arg1;
- (id)musicDataAtIndex:(unsigned long long)arg1;
- (void)setupView;
- (void)applyDiffSnapshot;
- (BOOL)isLyricsCellType;
- (BOOL)shouldHihgtlightQuery;
- (BOOL)_canShowMusicCategoryPanel;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onClickCancelSearch;
- (void)onTextFieldChanged:(id)arg1;
- (void)reportSearchEvent;
- (void)reportSearchBarClickEvent;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onBgmSearchViewModelDataChange:(id)arg1;
- (void)onBgmSearchViewModel:(id)arg1 didSearchWithKey:(id)arg2;
- (void)textFieldDidChangeSelection:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)_startSearchMusicWithKey:(id)arg1;
- (unsigned long long)bgmSelectedTabTableViewCellGetTabType:(id)arg1;
- (id)bgmSelectedTabTableViewCellGetSearchWord:(id)arg1;
- (id)bgmSelectedTabTableViewCellGetPanelConfig:(id)arg1;
- (void)bgmCategoryViewCollectionViewDidScroll;
- (void)bgmCategoryViewCollectionViewWillBeginDragging;
- (void)bgmCategoryView:(id)arg1 didSelectedMusicCategory:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (id)publishContext;
- (void)setPublishContext:(id)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)categoryView;
- (void)setCategoryView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)diffDataSource;
- (void)setDiffDataSource:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end

