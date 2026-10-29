@interface WCAddressControlLogic : WCBizControlLogic <WCAddressLogicMgrExt, WCAddressInfoViewControllerDelegate, WCAddressListViewControllerDelegate>
{
    JSEvent * m_jsEvent; // +0x30
    WCAddressControlData * m_data; // +0x38
    WCAddressAuthenticationSturct * m_oWCAddressAuthenticationStruct; // +0x40
    NSString * m_nsUserName; // +0x48
}
- (id)initWithJSEvent:(id)arg1 AuthenticationStruct:(id)arg2;
- (id)getLatestAddress;
- (void)startLoading;
- (void)stopLoading;
- (void)resume;
- (void)pause;
- (void)startForceRotationToPortrait;
- (void)stopForceRotationToPortrait;
- (void)stopLogic;
- (void)EndWCAddressControlLogic;
- (void)startLogic;
- (void)setNeedStatusBarInset:(BOOL)arg1;
- (void)setIsInSheetMode:(BOOL)arg1;
- (void)setForbidDarkmode:(BOOL)arg1;
- (void)setNeedDismissToParentVCOnAddAddress:(BOOL)arg1;
- (void)setDirectOpenAddAddress:(BOOL)arg1;
- (void)setIsInGiftMode:(BOOL)arg1;
- (void)AddressInfoCancel;
- (void)AddressInfoNext:(id)arg1;
- (void)AddressInfoAnalysic:(id)arg1;
- (void)AddressListBack;
- (void)AddressListComplete:(id)arg1;
- (void)AddressListAdd;
- (void)AddressListEdit:(id)arg1;
- (void)AddressListDelete:(id)arg1;
- (void)AddressImport;
- (BOOL)onError:(id)arg1;
- (void)OnGetAllAddress:(id)arg1 UserName:(id)arg2 NickName:(id)arg3 Error:(id)arg4;
- (void)OnGetGetAllAddressStageData:(id)arg1 Error:(id)arg2;
- (void)OnGetAllFourthAddressStageData:(id)arg1 Error:(id)arg2;
- (void)OnAddAddress:(id)arg1 Error:(id)arg2;
- (void)OnDelAddress:(id)arg1 Error:(id)arg2;
- (void)OnModifyAddress:(id)arg1 Error:(id)arg2;
- (void)OnSetRecentlyUsedAddress:(id)arg1 Error:(id)arg2;
- (void)OnAnalyseAddressInfo:(id)arg1;
- (void)OnImportYiXunAddress:(id)arg1 importStatus:(int)arg2 Error:(id)arg3;
- (void)OnNotAcceptGetLatestAddress;
- (void).cxx_destruct;
@end

