@interface TemplateMsgRecvMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate, MMConfigMgrExt>
{
    NSMutableDictionary * _dictTemplateMsgRecvState; // +0x8
    NSMutableDictionary * _dictIdListOfUser; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)getRecvStateByUsername:(id)arg1;
- (void)setRecvState:(id)arg1 toUser:(id)arg2;
- (void)setRecvState:(unsigned int)arg1 toUser:(id)arg2 withTemplateId:(id)arg3;
- (BOOL)shouldShowBlockButtonForMsg:(id)arg1;
- (BOOL)shouldShowEntryForUser:(id)arg1;
- (void)getRecvState:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetRecvState:(id)arg1;
- (void)onSetRecvState:(id)arg1;
- (id)getRecvStateArrayByUsername:(id)arg1;
- (void).cxx_destruct;
@end

