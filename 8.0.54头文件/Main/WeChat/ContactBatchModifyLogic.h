@interface ContactBatchModifyLogic : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray * m_arrBatchModifyRequest; // +0x8
    NSMutableArray * m_arrFailBatchModifyInfo; // +0x10
    NSMutableDictionary * m_dicFailBatchModifyRetry; // +0x18
    unsigned int m_eventID; // +0x20
    NSMutableArray * m_arrBatchSnsNointerestingModify; // +0x28
    NSMutableArray * m_arrBatchSnsNointerestingModifyOnceNumber; // +0x30
    NSMutableArray * m_arrFailBatchSnsNointerestingModify; // +0x38
    BOOL m_isAddBatchSnsNointeresting; // +0x40
    id <ContactBatchModifyLogicDelegate> _m_delegate; // +0x48
}
- (unsigned long long)getMaxBatchOnceNumber;
- (void)dealloc;
- (void)clearAllData;
- (void)batchModContactTypeWithAddContantctAr:(id)arg1 deleteContantctAr:(id)arg2 modContactType:(unsigned int)arg3;
- (void)CheckQueue;
- (void)HandleModContactResponse:(id)arg1;
- (void)HandleAllFailModContact:(id)arg1;
- (void)HandleCurrentFailModContact:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)BatchModContactTypeNetWork:(id)arg1;
- (void)OnBatchModContactTypeResponse:(id)arg1;
- (void)batchModContactSnsNointerestingTypeWithContantctAr:(id)arg1 isBatchAdd:(BOOL)arg2;
- (void)CheckSnsNointerestingTypeQueue;
- (void)BatchModContactSnsNointerestingTypeNetWork:(id)arg1;
- (void)onWCGroupAddMemberReturn:(BOOL)arg1 group:(id)arg2;
- (void)onWCGroupRemoveMemberReturn:(BOOL)arg1 group:(id)arg2;
- (void)handleSnsNointerestingResponse:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

