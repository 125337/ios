@interface WCMallNetworkHelper : MMObject <PBMessageObserverDelegate>
{
    id <WCMallNetworkHelperDelegate> m_oWCMallNetworkHelperDelegate; // +0x8
}
- (id)init;
- (void)dealloc;
- (void)GetWCMallFunctionList:(id)arg1;
- (void)GetWCMallPayChargeProxyRequets:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetWCMallFunctionListMessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnGetWCMallPayChargeProxyReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_oWCMallNetworkHelperDelegate;
- (void)setM_oWCMallNetworkHelperDelegate:(id)arg1;
- (void).cxx_destruct;
@end
