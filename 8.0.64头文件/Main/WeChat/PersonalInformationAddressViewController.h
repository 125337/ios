@interface PersonalInformationAddressViewController : MMPageSheetBaseViewController <WCAddressLogicMgrExt>
{
    BOOL _loadingData; // +0x70
    NSArray * _arrAddress; // +0x78
    UIView * _contentHeaderView; // +0x80
    MMTableViewInfo * _tableViewInfo; // +0x88
}
- (id)init;
- (void)viewDidLoad;
- (void)initView;
- (void)initData;
- (void)initTableView;
- (void)initHeaderView;
- (void)reloadData;
- (void)viewDidLayoutSubviews;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (double)getCellHeightForAddress:(id)arg1;
- (void)makeNoContentCell:(id)arg1;
- (id)getAddressDetailString:(id)arg1;
- (void)OnGetAllAddress:(id)arg1 UserName:(id)arg2 NickName:(id)arg3 Error:(id)arg4;
- (id)arrAddress;
- (void)setArrAddress:(id)arg1;
- (id)contentHeaderView;
- (void)setContentHeaderView:(id)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (BOOL)loadingData;
- (void)setLoadingData:(BOOL)arg1;
- (void).cxx_destruct;
@end
