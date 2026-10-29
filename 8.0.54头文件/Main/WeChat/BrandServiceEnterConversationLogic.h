@interface BrandServiceEnterConversationLogic : MMObject
{
    CContact * m_contact; // +0x8
    SessionStat * _sessionInfo; // +0x10
    id <BrandServiceEnterConversationLogicDelegate> _delegate; // +0x18
    NSMutableDictionary * _extInfo; // +0x20
    long long _subscene; // +0x28
}
- (id)init;
- (void)reportEnterConversationForContact:(id)arg1;
- (void)handleClickCommandResponse:(id)arg1;
- (void)report30451WithMsgStr:(id)arg1;
- (id)getClickCommandMsgReportFromLastMsg:(id)arg1;
- (void)reportExitConversationForContact;
- (void)addLocalSystemMessage:(id)arg1;
- (void)addWuRaoSystemMessageIfNeeded:(id)arg1 clickable:(id)arg2;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (long long)subscene;
- (void)setSubscene:(long long)arg1;
- (void).cxx_destruct;
@end

