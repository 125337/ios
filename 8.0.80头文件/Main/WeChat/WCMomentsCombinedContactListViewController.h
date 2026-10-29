@interface WCMomentsCombinedContactListViewController : MultiSelectContactsViewController <UITableViewDelegate, UITableViewDataSource>
{
    MMTableView * _attachedSearchTableView; // +0xe8
    BOOL _inlineSearchShowsCheckbox; // +0xf0
    id /* block */ _pushSearchTriggerBlock; // +0xf8
    UIColor * _inlineSearchCheckboxColor; // +0x100
}
- (id)init;
- (void)viewDidLoad;
- (void)initInlineSearchResultTableView;
- (void)showInlineContactSearchResults;
- (void)attachInlineSearchResultTableView:(id)arg1;
- (void)performPushContactSearchWithQuery:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id /* block */)pushSearchTriggerBlock;
- (void)setPushSearchTriggerBlock:(id /* block */)arg1;
- (BOOL)inlineSearchShowsCheckbox;
- (void)setInlineSearchShowsCheckbox:(BOOL)arg1;
- (id)inlineSearchCheckboxColor;
- (void)setInlineSearchCheckboxColor:(id)arg1;
- (void).cxx_destruct;
@end
