@interface WAAgentASRDebugTableView : UIView <UITableViewDataSource>
{
    BOOL _useDarkMode; // +0x8
    UITableView * _tableView; // +0x10
    NSMutableArray * _textItems; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 useDarkMode:(BOOL)arg2;
- (void)layoutSubviews;
- (void)addTextItem:(id)arg1;
- (void)scrollToBottomAnimated:(BOOL)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)useDarkMode;
- (void)setUseDarkMode:(BOOL)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)textItems;
- (void)setTextItems:(id)arg1;
- (void).cxx_destruct;
@end
