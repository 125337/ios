@interface PersonalInformationDeviceViewController : MMPageSheetBaseViewController
{
    UIView * _contentHeaderView; // +0x68
    MMTableViewInfo * _tableViewInfo; // +0x70
}
- (id)init;
- (void)viewDidLoad;
- (void)initView;
- (void)initTableView;
- (void)initHeaderView;
- (void)reloadData;
- (void)viewDidLayoutSubviews;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (double)getCellHeightForDevice:(id)arg1;
- (void)makeNoContentCell:(id)arg1;
- (id)genDeviceInfoDateTimeStringByUInt:(unsigned int)arg1 retDayLength:(unsigned long long *)arg2;
- (id)contentHeaderView;
- (void)setContentHeaderView:(id)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (void).cxx_destruct;
@end

