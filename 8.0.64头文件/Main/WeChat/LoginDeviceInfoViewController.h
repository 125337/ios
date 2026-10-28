@interface LoginDeviceInfoViewController : MMUIViewController <PBMessageObserverDelegate>
{
    SafeDeviceData * m_info; // +0x70
    MMTableViewInfo * m_tableViewInfo; // +0x78
    WCTableViewNormalCellManager * _editNameCellInfo; // +0x80
    WCTableViewNormalCellManager * _delCellInfo; // +0x88
}
- (id)initWithDeviceIno:(id)arg1;
- (void)viewDidLoad;
- (void)reloadTableData;
- (void)showQuitTip;
- (void)delCurrentDevice;
- (void)editName;
- (void)setDeviceName:(id)arg1;
- (void)MessageReturnUpdateDevice:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturnDelDevice:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)reportInfoDict;
- (void)registerYReportSdk;
- (unsigned long long)logid;
- (id)editNameCellInfo;
- (void)setEditNameCellInfo:(id)arg1;
- (id)delCellInfo;
- (void)setDelCellInfo:(id)arg1;
- (void).cxx_destruct;
@end
