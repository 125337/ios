@interface MsgToYuanbaoPreviewSheetView : MMAutoLayoutSheetView <ILinkEventExt, UITableViewDelegate, UITableViewDataSource>
{
    int _scene; // +0x8
    NSArray * _selectMsg; // +0x10
    UITableView * _tableView; // +0x18
    NSArray * _objects; // +0x20
}
- (id)initWithSelectMsg:(id)arg1 objects:(id)arg2;
- (void)initConfigs;
- (void)initView;
- (void)layoutSubviews;
- (double)pageSheetContentHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)selectMsg;
- (void)setSelectMsg:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)objects;
- (void)setObjects:(id)arg1;
- (void).cxx_destruct;
@end
