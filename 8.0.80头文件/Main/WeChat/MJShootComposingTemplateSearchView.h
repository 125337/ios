@interface MJShootComposingTemplateSearchView : MMUIView <UITextFieldDelegate, MJShootTemplateSearchStateViewDelegate, MJShootComposingTemplateSearchViewModelDelegate, MJShootComposingTemplateSearchResultViewDelegate>
{
    id <MJShootComposingTemplateSearchViewDelegate> _delegate; // +0x8
    MJShootComposingTemplateSearchViewModel * _viewModel; // +0x10
    WCSearchBar * _searchBar; // +0x18
    MMUIButton * _cancelButton; // +0x20
    MJShootComposingTemplateSearchResultView * _resultView; // +0x28
    MJShootTemplateSearchStateView * _searchStateView; // +0x30
}
- (id)initWithViewModel:(id)arg1;
- (void)setupViews;
- (void)layoutViews;
- (void)onTextFieldChanged:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChangeSelection:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)startSearchTemplateWithKey:(id)arg1;
- (void)templateSearchViewModel:(id)arg1 didFetchSearchResults:(id)arg2 firstPage:(BOOL)arg3;
- (void)templateSearchViewModelDidFetchFailed:(id)arg1;
- (void)templateSearchViewModelDidResetSearchState:(id)arg1;
- (void)templateSearchResultView:(id)arg1 didManuallyTapTemplateItem:(id)arg2;
- (void)templateSearchResultView:(id)arg1 didSelectItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)templateSearchResultView:(id)arg1 didTapTemplateEntryItem:(id)arg2;
- (void)templateSearchResultView:(id)arg1 willDisplayItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)templateSearchResultViewDidTriggerLoadMore:(id)arg1;
- (void)templateSearchStateViewDidTapRetry:(id)arg1;
- (void)cancelButtonDidTouchUpInside:(id)arg1;
- (void)didShowWithSelectedTemplateID:(id)arg1;
- (void)didDismiss;
- (id)contentView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)resultView;
- (void)setResultView:(id)arg1;
- (id)searchStateView;
- (void)setSearchStateView:(id)arg1;
- (void).cxx_destruct;
@end
