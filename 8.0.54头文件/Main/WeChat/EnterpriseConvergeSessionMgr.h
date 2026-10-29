@interface EnterpriseConvergeSessionMgr : MMUserService <IEnterpriseSessionMgrExt, IEnterpriseBrandSessionMgrExt, MMServiceProtocol>
{
    NSMutableDictionary * _dicMainUserName2ConvergedSessionList; // +0x8
}
- (id)init;
- (void)onServiceInit;
- (id)getAllSessionInfoList:(id)arg1;
- (unsigned int)sessionCountForMainBrand:(id)arg1;
- (void)onEnterpriseBrandSessionsChanged:(id)arg1;
- (void)onEnterpriseChatSessionChanged:(id)arg1;
- (void)updateConvergeSessionList:(id)arg1;
- (id)sortAndConvergeSessionList:(id)arg1 chatSessionList:(id)arg2;
- (void)updateAndConvergeMainSession:(id)arg1;
- (void).cxx_destruct;
@end

