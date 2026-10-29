@interface SettingVCReportHelper : MMUserService <MMServiceProtocol>
{
    SettingVCReportData * _data; // +0x8
}
- (void)setUpSettingVCReportData;
- (void)setUpSettingVCReportDataWithSource:(unsigned long long)arg1;
- (void)setUpSearchSessionIdWithWord:(id)arg1;
- (void)setUpParamsFromVC:(id)arg1 pageName:(id)arg2;
- (id)getReportParamsWithPageName:(id)arg1 eventId:(id)arg2;
- (id)getReportParamsForCell;
- (id)getReportParamsForSearchCellClick;
- (id)getReportParamsForNormalCellClick:(id)arg1;
- (id)getReportParamsForSearchBar;
- (id)getReportParamsForSearching;
- (unsigned char)calculateDepthFromViewController:(id)arg1;
- (void)reportSettingCellClickAtMoreTab;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
