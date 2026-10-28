@interface OplogDataLogic : NSObject
{
    unsigned int m_oplogStartRowID; // +0x8
    unsigned int m_oplogItemID; // +0xc
    BOOL m_bNeedContinue; // +0x10
    BOOL m_bDBEnd; // +0x11
    NSMutableArray * m_arrOplogs; // +0x18
    CMMDB * m_oMMDB; // +0x20
    NSRecursiveLock * m_oLock; // +0x28
}
- (id)initWithDB:(id)arg1 lock:(id)arg2;
- (BOOL)InsertOplog:(unsigned int)arg1 Oplog:(id)arg2;
- (void)loadOplogData:(unsigned int)arg1;
- (id)getFromDBOplog:(id)arg1;
- (void)filterByMD5;
- (void)checkNeedContiue;
- (id)loadOplogFromDBlimit:(int)arg1;
- (void)deleteOplog:(id)arg1;
- (unsigned int)setFailOplog:(id)arg1;
- (BOOL)m_bNeedContinue;
- (void)setM_bNeedContinue:(BOOL)arg1;
- (void).cxx_destruct;
@end
