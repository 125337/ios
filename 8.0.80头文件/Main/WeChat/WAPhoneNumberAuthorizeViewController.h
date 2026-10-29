@interface WAPhoneNumberAuthorizeViewController : WAAuthorizeViewController <IWAPhoneNumberAuthorizePageSheet>
{
    long long _selectedIndex; // +0x70
    WAPhoneNumberPageSheetViewModel * _pnViewModel; // +0x78
}
- (id)initWithInfo:(id)arg1;
- (void)reloadData;
- (void)managePhoneNumber;
- (void)togglePhone:(id)arg1;
- (id)customSubviewClassList;
- (id)subViewModel;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg1;
- (id)pnViewModel;
- (void)setPnViewModel:(id)arg1;
- (void).cxx_destruct;
@end
