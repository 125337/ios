@interface WCAdvertiseQuestionExpMgr : MMUserService <MMServiceProtocol>
{
    NSString * lastReportItemId; // +0x8
    WCADQuestionStatItem * adQuestItem; // +0x10
}
- (id)getADQuestionExp:(id)arg1;
- (void)statADQuestion:(id)arg1;
- (id)getCurrLanguage;
- (void)test;
- (id)parseFormatString:(id)arg1 translateMap:(id)arg2;
- (void)tryReportWithAct:(unsigned int)arg1 MenuId:(id)arg2 Wording:(id)arg3;
- (void)tryReport;
- (id)getLastReportItemId;
- (void)clearLastReportItemId;
- (void)reportHasnotDoQuest:(id)arg1;
- (void).cxx_destruct;
@end

