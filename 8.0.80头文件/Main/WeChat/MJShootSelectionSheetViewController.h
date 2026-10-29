@interface MJShootSelectionSheetViewController : MMPageSheetBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    id /* block */ _selectionHandler; // +0x70
    id /* block */ _cancelHandler; // +0x78
    NSString * _titleText; // +0x80
    NSArray * _internalItems; // +0x88
    MMUIView * _contentView; // +0x90
    UITableView * _tableView; // +0x98
    MMUILabel * _titleLabel; // +0xa0
    UIView * _publishingPanelHostView; // +0xa8
}
- (id)initWithTitle:(id)arg1 items:(id)arg2;
- (void)viewDidLoad;
- (void)setupPageSheetConfig;
- (void)setupViews;
- (void)showInView:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (double)pageSheetContentWidth;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)pageSheetDidClose:(BOOL)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)contentView;
- (id)titleLabel;
- (id)tableView;
- (id /* block */)selectionHandler;
- (void)setSelectionHandler:(id /* block */)arg1;
- (id /* block */)cancelHandler;
- (void)setCancelHandler:(id /* block */)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)internalItems;
- (void)setInternalItems:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)publishingPanelHostView;
- (void)setPublishingPanelHostView:(id)arg1;
- (void).cxx_destruct;
@end
