@interface WAPhoneNumberAuthorizePageSheet : WAAuthorizePageSheet <IWAPhoneNumberAuthorizePageSheet>
{
    long long _selectedIndex; // +0x8
    WAPhoneNumberPageSheetViewModel * _pnViewModel; // +0x10
}
- (id)initWithInfo:(id)arg1;
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
