@interface WCAddressControlMgr : WCBaseControlMgr <JSEventExt>
- (id)init;
- (unsigned int)startGetAddressControlLogic:(id)arg1;
- (unsigned int)startEditAddressControlLogic:(id)arg1;
- (unsigned int)startAddressControlLogic:(id)arg1 jsEvent:(id)arg2;
- (unsigned int)startEditAddressControlLogic:(id)arg1 jsEvent:(id)arg2 AuthenticationStruct:(id)arg3;
- (unsigned int)startAddressEntranceControlLogic:(id)arg1;
- (unsigned int)startAddressEntranceControlLogic:(id)arg1 entryScene:(unsigned long long)arg2 logicDelegate:(id)arg3;
- (unsigned int)startAddressEntranceControlLogicWithData:(id)arg1 vcRootDelegate:(id)arg2 logicDelegate:(id)arg3;
- (unsigned int)startAddressEntranceControlLogicWithData:(id)arg1 vcRootDelegate:(id)arg2 logicDelegate:(id)arg3 flowDelegate:(id)arg4;
- (unsigned int)startGetLatestAddressControlLogic:(id)arg1 jsEvent:(id)arg2;
- (void)jsEditAddress:(id)arg1;
- (void)jsGetLatestAddresss:(id)arg1;
@end
