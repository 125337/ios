@interface WCMallMobileChargeControlLogic : WCMallControlLogic <WCMallChargeMobileViewControllerDelegate, IWCPayControlLogicExt>
{
    WCPayControlData * m_oPayData; // +0x38
    BOOL m_bNeedFirstGotoWCMallProductView; // +0x40
    NSDictionary * dicPayedInfo; // +0x48
    BOOL bHasTwoCGIRequestInStartLogic; // +0x50
    BOOL bHasOneCGIHasResponsed; // +0x51
    BOOL _bIsAddressBookLoading; // +0x52
    BOOL _bHasLoadAddressBook; // +0x53
    NSArray * _svrRetChangeHistory; // +0x58
}
- (id)init;
- (id)initWithData:(id)arg1;
- (void)SetPayData:(id)arg1;
- (void)startLogic;
- (void)stopLogic;
- (void)OnWCMallChargeMobileViewControllerBack;
- (void)OnWCMallChargeMobileViewControllerRightActionBack;
- (void)OnWCMallInputedCompleteTelphone:(id)arg1;
- (void)OnWCMallChargeMobileViewControllerSelectedProduct:(id)arg1;
- (BOOL)IsUsedWCMallMallProduct;
- (id)GetWCMallMallProductsFiltedOldList:(id)arg1;
- (void)OnWCMallChargePhoneClearOldList;
- (void)OnWCMallChargePhoneTelephoneInputComplete:(id)arg1;
- (BOOL)IsNeedShowChargeEnsureAlertView;
- (void)OnGetWCMallFunctionList:(id)arg1 GlobalList:(id)arg2 BroadCastInfo:(id)arg3 BannerList:(id)arg4 response:(id)arg5 FromCached:(BOOL)arg6 NotShowTutorial:(BOOL)arg7 typeMap:(id)arg8 Error:(id)arg9;
- (void)OnGetWCMallPayFunctionListRequest:(id)arg1 Error:(id)arg2;
- (void)OnGetWCMallPayDeleteChargeHistoryResponse:(id)arg1 Error:(id)arg2;
- (void)handleSvrRetNumberList:(id)arg1;
- (id)getAddressbookRemarkWithPhoneNum:(id)arg1;
- (void)checkSuccessStopCurrentLogicWithPhone:(id)arg1 remark:(id)arg2;
- (id)genTargetUrlFromOriginUrl:(id)arg1 withPhone:(id)arg2 remark:(id)arg3 transid:(id)arg4 reqkey:(id)arg5;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)loadAddressBookData;
- (void)requestAccessForContactsDone:(BOOL)arg1;
- (void)tryLoadAddressBook;
- (void)checkHistoryData;
- (void)setTelphoneOwnerName:(id)arg1 telString:(id)arg2;
- (BOOL)m_bNeedFirstGotoWCMallProductView;
- (void)setM_bNeedFirstGotoWCMallProductView:(BOOL)arg1;
- (BOOL)bIsAddressBookLoading;
- (void)setBIsAddressBookLoading:(BOOL)arg1;
- (BOOL)bHasLoadAddressBook;
- (void)setBHasLoadAddressBook:(BOOL)arg1;
- (id)svrRetChangeHistory;
- (void)setSvrRetChangeHistory:(id)arg1;
- (void).cxx_destruct;
@end
