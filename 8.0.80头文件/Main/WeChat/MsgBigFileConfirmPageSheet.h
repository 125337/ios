@interface MsgBigFileConfirmPageSheet : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    BOOL _deleteAfterSend; // +0x70
    NSArray * _allAssets; // +0x78
    NSArray * _bigFileItems; // +0x80
    id /* block */ _completion; // +0x88
    UIView * _contentView; // +0x90
    MMUILabel * _titleLabel; // +0x98
    UIView * _bgView; // +0xa0
    UITableView * _itemTableView; // +0xa8
    MsgBigFileDeleteSelectView * _selectView; // +0xb0
}
- (id)initWithAllAssets:(id)arg1 bigFiles:(id)arg2 complete:(id /* block */)arg3;
- (void)viewDidLoad;
- (void)initUI;
- (void)pageSheetDidRotation;
- (void)pageSheetDidAppear;
- (void)pageSheetDidCloseWithType:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)largeFileReportItems;
- (id)genTitle;
- (id)typeDescription:(id)arg1;
- (id)allAssets;
- (void)setAllAssets:(id)arg1;
- (id)bigFileItems;
- (void)setBigFileItems:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (BOOL)deleteAfterSend;
- (void)setDeleteAfterSend:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (id)itemTableView;
- (void)setItemTableView:(id)arg1;
- (id)selectView;
- (void)setSelectView:(id)arg1;
- (void).cxx_destruct;
@end
