@interface WCAddressGetAddressControlLogic : WCBizControlLogic <WCAddressLogicMgrExt, WCBaseControlMgrExt>
{
    WCAddressControlData * m_data; // +0x30
    WCAddressControlLogic * m_oWCAddressControlLogic; // +0x38
    int m_eWCAddressGetAddressControlLogicSituation; // +0x40
}
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 Situation:(int)arg2;
- (void)EndWCAddressGetAddressControlLogic;
- (void)startLogic;
- (void)stopLogic;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)OnGetLatestAddress:(id)arg1 UserName:(id)arg2 NickName:(id)arg3 Error:(id)arg4;
- (void)OnPreFinishedWCAddressLogic:(id)arg1 waitUntilDone:(BOOL *)arg2;
- (void).cxx_destruct;
@end

