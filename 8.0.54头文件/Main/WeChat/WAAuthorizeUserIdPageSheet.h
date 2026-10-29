@interface WAAuthorizeUserIdPageSheet : WAAuthorizePageSheet
{
    UserIdAuthorizePageInfo * _pageInfo; // +0x8
    WXAPhoneInfo * _selectedItem; // +0x10
    id /* block */ _managerPhoneNumberAction; // +0x18
    WAUserIdPageSheetViewModel * _uidViewModel; // +0x20
}
- (id)initWithPageInfo:(id)arg1;
- (id)customSubviewClassList;
- (id)subViewModel;
- (id)pageInfo;
- (void)setPageInfo:(id)arg1;
- (id)selectedItem;
- (void)setSelectedItem:(id)arg1;
- (id /* block */)managerPhoneNumberAction;
- (void)setManagerPhoneNumberAction:(id /* block */)arg1;
- (id)uidViewModel;
- (void)setUidViewModel:(id)arg1;
- (void).cxx_destruct;
@end

