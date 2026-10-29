@interface EmoticonSearchBoardView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UISearchBarDelegate, UIScrollViewDelegate, UITextFieldDelegate, MMTipsViewControllerDelegate, EmoticonSearchCollectionComponentDelegate>
{
    BOOL _disableWebSearch; // +0x8
    id <EmoticonSearchBoardViewDelegate> _delegate; // +0x10
    MMUISearchBar * _searchBar; // +0x18
    UICollectionView * _collectionView; // +0x20
    EmoticonSearchViewModel * _vm; // +0x28
    EmoticonSearchInMessagePanelReporter * _reporter; // +0x30
    UICollectionViewFlowLayout * _collectionLayout; // +0x38
    UILongPressGestureRecognizer * _longPressGesture; // +0x40
    NSIndexPath * _selectedIndexPath; // +0x48
    NSString * _text; // +0x50
    CEmoticonWrap * _currentEmoticonWrap; // +0x58
    UIControl * _emoticonStoreView; // +0x60
    long long _configDelayHideKeyboardTime; // +0x68
    KeyboardDismissProxy * _dismissKeyboardProxy; // +0x70
}
- (id)initWithText:(id)arg1;
- (id)emoticonStoreView;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)configSearchBar;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateSearchBarAppearance;
- (void)configCollectionView;
- (void)reloadData;
- (void)hideKeyboard;
- (void)showKeyboard;
- (void)layoutSubviews;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)delaySearch:(id)arg1;
- (void)checkAndHideKeyboard;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onLongPressToPreview:(id)arg1;
- (void)onTapWebSearch;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChangeSelection:(id)arg1;
- (void)delayCheckKeyboard;
- (void)hideEmoticonStoreView;
- (void)showEmoticonStoreView;
- (void)onTapEmoticonStore;
- (void)setVmState:(int)arg1;
- (int)vmState;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)reportEmoticonExposure;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)vm;
- (void)setVm:(id)arg1;
- (BOOL)disableWebSearch;
- (void)setDisableWebSearch:(BOOL)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)collectionLayout;
- (void)setCollectionLayout:(id)arg1;
- (id)longPressGesture;
- (void)setLongPressGesture:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)currentEmoticonWrap;
- (void)setCurrentEmoticonWrap:(id)arg1;
- (void)setEmoticonStoreView:(id)arg1;
- (long long)configDelayHideKeyboardTime;
- (void)setConfigDelayHideKeyboardTime:(long long)arg1;
- (id)dismissKeyboardProxy;
- (void)setDismissKeyboardProxy:(id)arg1;
- (void).cxx_destruct;
@end

