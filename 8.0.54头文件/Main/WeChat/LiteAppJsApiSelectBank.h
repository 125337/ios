@interface LiteAppJsApiSelectBank : LiteAppJsApi <WCPaySelectBankViewControllerDelegate, WCPayT2BCGetBankListCgiDelegate>
{
    WCPaySelectBankViewController * _selectBankVC; // +0x20
    WCPayT2BCGetBankListCgi * _getBankListCgi; // +0x28
}
- (id)init;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)OnWCPaySelectBankViewControllerDidSelectItem:(id)arg1;
- (void)OnGetWCPaySelectBankViewControllerDataSorce;
- (void)OnGetBankListOK:(id)arg1 allBankList:(id)arg2;
- (void)OnGetBankListWithError:(id)arg1 errorCode:(unsigned int)arg2;
- (id)selectBankVC;
- (void)setSelectBankVC:(id)arg1;
- (id)getBankListCgi;
- (void)setGetBankListCgi:(id)arg1;
- (void).cxx_destruct;
@end

