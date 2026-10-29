@interface SessionForwardRecordLogic : NSObject <IMMNewSessionMgrExt, ForwardMessageLogicExt>
{
    SessionForwardRecordDB * _forwardRecordDB; // +0x8
}
- (id)init;
- (id)recentForwardRecords;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)onHideSessionWithUserName:(id)arg1;
- (void)onShowSessionWithUserName:(id)arg1;
- (void)onForwardMsgToContact:(id)arg1 scene:(unsigned long long)arg2;
- (void)recordForwardMsgWithContact:(id)arg1 scene:(unsigned long long)arg2;
- (void)resetForwardMsgWithContact:(id)arg1;
- (void)deleteExpiredSessionForwardRecord;
- (id)forwardRecordDB;
- (void)setForwardRecordDB:(id)arg1;
- (void).cxx_destruct;
@end
