@interface NewSettingBaseViewController : MMUIViewController
{
    MMTableViewInfo * m_tableViewInfo; // +0x68
    NSString * m_nsTitle; // +0x70
}
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
- (void)mmTableView:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
- (id)initWithTitle:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)reloadTableData;
- (id)tableViewInfo;
- (id)m_nsTitle;
- (void)setM_nsTitle:(id)arg1;
- (void).cxx_destruct;
@end

