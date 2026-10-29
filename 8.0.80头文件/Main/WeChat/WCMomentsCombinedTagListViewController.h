@interface WCMomentsCombinedTagListViewController : WCMomentsContactTagListViewController <UITableViewDelegate, UITableViewDataSource>
{
    MMTableView * _attachedSearchTableView; // +0x70
    BOOL _inlineSearchShowsCheckbox; // +0x78
    id /* block */ _pushSearchTriggerBlock; // +0x80
}
- (id)init;
- (void)viewDidLoad;
- (void)initInlineSearchTableView;
- (void)showInlineSearchResults;
- (void)attachInlineSearchTableView:(id)arg1;
- (void)performPushSearchWithQuery:(id)arg1;
- (id)inlineSearchCellForRowAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (id /* block */)pushSearchTriggerBlock;
- (void)setPushSearchTriggerBlock:(id /* block */)arg1;
- (BOOL)inlineSearchShowsCheckbox;
- (void)setInlineSearchShowsCheckbox:(BOOL)arg1;
- (void).cxx_destruct;
@end
