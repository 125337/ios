@interface WCAccountLoginTypeControlMgr : WCBaseControlMgr <IMsgExt, IExptServiceExt>
{
    WCAccountGatewayMobileHandler * _gatewayMobileHandler; // +0x10
}
- (id)init;
- (BOOL)supportPasskey;
- (BOOL)supportGateway;
- (BOOL)supportPasswordFree;
- (BOOL)supportFastSwitch;
- (void)onServiceInit;
- (void)onServiceClearData;
- (unsigned long long)simIpCount;
- (void)checkGatewayLoginWithComplectionBlock:(id)arg1 block:(id /* block */)arg2;
- (void)showGatewayLoginConfirmSheetFrom:(id)arg1 maskedMobile:(id)arg2 carrierType:(unsigned int)arg3 protocalTitle:(id)arg4 protocalUrl:(id)arg5 onGatewayLoginConfirm:(id /* block */)arg6 callback:(id /* block */)arg7;
- (void)startGatewayLogin:(id)arg1 mobile:(id)arg2 callback:(id /* block */)arg3;
- (id)getGatewayMobileHandler;
- (void)onExptItemListChange;
- (void)updateLoginTypeExpt;
- (unsigned long long)getLoginTypeCfg:(BOOL)arg1 originCfg:(unsigned long long)arg2 tag:(unsigned long long)arg3;
- (BOOL)getLoginTypeStatus:(unsigned long long)arg1;
- (id)getEntryKey:(unsigned long long)arg1;
- (BOOL)logoutEntryEnable:(unsigned long long)arg1;
- (void)countLogoutEntryTime:(unsigned long long)arg1;
- (void)disableLogoutEntry:(unsigned long long)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)gatewayMobileHandler;
- (void)setGatewayMobileHandler:(id)arg1;
- (void).cxx_destruct;
@end
