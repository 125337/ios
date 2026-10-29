@interface WCAddressNetworkHelper : MMObject <PBMessageObserverDelegate>
{
    id <WCAddressNetworkDelegate> m_delegate; // +0x8
}
- (void)dealloc;
- (void)OnMessageReturnInAddWCAddress:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInAnnlysicInfo:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInQueryWCAddress:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInRemoveWCAddress:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInModifyWCAddress:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInSelectWCAddress:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInImportYiXunAddress:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)AddWCAddress:(id)arg1;
- (void)RemoveWCAddress:(id)arg1;
- (void)QueryWCAddress:(id)arg1;
- (void)AnalysicAddressInfo:(id)arg1;
- (void)ModifyWCAddress:(id)arg1;
- (void)SelectWCAddress:(id)arg1;
- (void)ImportYiXunAdress:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

