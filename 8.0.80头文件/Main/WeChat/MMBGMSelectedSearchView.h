@interface MMBGMSelectedSearchView : MMUIView <UITextFieldDelegate, MMBGMSearchResultContainerViewDelegate>
{
    id <MMBGMSelectedSearchViewDelegate> _delegate; // +0x8
    MMBGMPanelPublishContext * _publishContext; // +0x10
    long long _snsEditSource; // +0x18
    WCSearchBar * _searchBar; // +0x20
    MMUIButton * _cancelButton; // +0x28
    MMBGMSearchResultContainerView * _searchResultContainerView; // +0x30
    MMBGMSelectedConfig * _config; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 config:(id)arg2;
- (void)setup;
- (void)setupDataReport;
- (id)genReportDict;
- (void)willShow;
- (void)willDismiss;
- (void)reset;
- (void)reload;
- (void)setPublishContext:(id)arg1;
- (void)setSnsEditSource:(long long)arg1;
- (void)setSearchViewDidShowUp;
- (void)setSearchViewDidCloseDown;
- (void)setKeyBoardShow:(BOOL)arg1;
- (void)unSelectedAllItem;
- (void)autoSetSelectedCellPlayingState;
- (void)autoStopSelectedCellPlayingState;
- (void)selectFirstMusicIfNeeded;
- (void)selectMusicAtIndex:(unsigned long long)arg1;
- (id)musicDataAtIndex:(unsigned long long)arg1;
- (id)currentSelectedmusicData;
- (void)setupView;
- (void)onClickCancelSearch;
- (void)onTextFieldChanged:(id)arg1;
- (void)reportSearchEvent;
- (void)reportSearchBarClickEvent;
- (void)textFieldDidChangeSelection:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)_startSearchMusicWithKey:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (id)bgmSearchResultContainerViewGetSearchWord:(id)arg1;
- (void)onBgmSearchResultContainerView:(id)arg1 didSelectedMusic:(id)arg2 atIndex:(unsigned long long)arg3 isTriggerByTap:(BOOL)arg4;
- (void)onBgmSearchResultContainerView:(id)arg1 didEditMusic:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)onBgmSearchResultContainerView:(id)arg1 didFavMusic:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)onBgmSearchResultContainerView:(id)arg1 didRemoveMusic:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)onBgmSearchResultContainerView:(id)arg1 willSelectMusic:(id)arg2 indexPath:(id)arg3;
- (void)onBgmSearchResultContainerView:(id)arg1 willShowMusic:(id)arg2 musicIndex:(unsigned long long)arg3;
- (unsigned long long)bgmSearchResultContainerViewGetMaterialDuration:(id)arg1;
- (void)onBgmSearchResultContainerView:(id)arg1 didSearchWithKey:(id)arg2;
- (void)onBgmSearchResultContainerViewWillBeginDragging:(id)arg1;
- (BOOL)bgmSearchResultContainerViewIsShowingInView:(id)arg1;
- (void)onSearchResultContainerViewWillStartPlayingVideo:(id)arg1;
- (void)onSearchResultContainerViewWillStopPlayingVideo:(id)arg1;
- (void)onBgmSearchResultContainerView:(id)arg1 didReceiveReportInfo:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)publishContext;
- (long long)snsEditSource;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)searchResultContainerView;
- (void)setSearchResultContainerView:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
