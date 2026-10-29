@interface WCGetAddressControlLogic : WCBizControlLogic <WCAddressLogicMgrExt, WCAddressInfoViewControllerDelegate, WCAddressListViewControllerDelegate>
{
    WCAddressControlData * m_data; // +0x30
    id <WCGetAddressControlLogicDelegate> _delegate; // +0x38
}
- (id)initWithData:(id)arg1;
- (void)startLoading;
- (void)stopLoading;
- (void)resume;
- (void)pause;
- (void)stopLogic;
- (void)startLogic;
- (void)AddressInfoCancel;
- (void)AddressInfoNext:(id)arg1;
- (void)AddressListBack;
- (void)AddressListComplete:(id)arg1;
- (void)AddressListAdd;
- (void)AddressListEdit:(id)arg1;
- (void)AddressListDelete:(id)arg1;
- (void)AddressImport;
- (BOOL)onError:(id)arg1;
- (void)OnGetAllAddress:(id)arg1 UserName:(id)arg2 NickName:(id)arg3 Error:(id)arg4;
- (void)OnGetGetAllAddressStageData:(id)arg1 Error:(id)arg2;
- (void)OnAddAddress:(id)arg1 Error:(id)arg2;
- (void)OnDelAddress:(id)arg1 Error:(id)arg2;
- (void)OnModifyAddress:(id)arg1 Error:(id)arg2;
- (void)OnSetRecentlyUsedAddress:(id)arg1 Error:(id)arg2;
- (void)OnImportYiXunAddress:(id)arg1 importStatus:(int)arg2 Error:(id)arg3;
- (void)OnNotAcceptGetLatestAddress;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

