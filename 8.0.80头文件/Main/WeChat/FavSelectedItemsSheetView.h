@interface FavSelectedItemsSheetView : MMPageSheetBaseView <UITableViewDataSource, UITableViewDelegate>
{
    UILabel * _emptyLabel; // +0x8
    UITableView * _selectedItemsTableView; // +0x10
    UIView * _navigationSeparator; // +0x18
    UIButton * _sendButton; // +0x20
    BOOL _needsResetContentOffset; // +0x28
    NSArray * _selectedItems; // +0x30
    unsigned long long _selectedCount; // +0x38
    id <MMFavCellComponentDelegate> _cellDelegate; // +0x40
    id /* block */ _sendHandler; // +0x48
    id /* block */ _removeSelectionHandler; // +0x50
    id /* block */ _openDetailHandler; // +0x58
    id /* block */ _willCloseHandler; // +0x60
    id /* block */ _didCloseHandler; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupPageSheetConfig;
- (void)setupContentViews;
- (double)pageSheetContentHeight;
- (void)setSelectedItems:(id)arg1;
- (void)setSelectedCount:(unsigned long long)arg1;
- (void)onSendButtonClicked;
- (void)layoutSheetContentInView:(id)arg1;
- (void)updateNavigationSeparatorVisibility;
- (void)updateUI;
- (void)pageSheetWillCloseWithType:(long long)arg1;
- (void)pageSheetDidCloseWithType:(long long)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)selectedItems;
- (unsigned long long)selectedCount;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id /* block */)sendHandler;
- (void)setSendHandler:(id /* block */)arg1;
- (id /* block */)removeSelectionHandler;
- (void)setRemoveSelectionHandler:(id /* block */)arg1;
- (id /* block */)openDetailHandler;
- (void)setOpenDetailHandler:(id /* block */)arg1;
- (id /* block */)willCloseHandler;
- (void)setWillCloseHandler:(id /* block */)arg1;
- (id /* block */)didCloseHandler;
- (void)setDidCloseHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
