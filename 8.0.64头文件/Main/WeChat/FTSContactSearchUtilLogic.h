@interface FTSContactSearchUtilLogic : NSObject <FTSContactSearchTaskDelegate>
{
    FTSContactSearchTask * m_targetTask; // +0x8
    FTSContactDB * m_ftsContactDB; // +0x10
    NSString * m_currentSearchText; // +0x18
    NSMutableArray * m_arrFilteredContacts; // +0x20
    unsigned int m_eFTSSearchType; // +0x28
    id /* block */ _m_resultBlock; // +0x30
}
- (void)asynSearchFriendContact:(id)arg1 resultBlock:(id /* block */)arg2;
- (void)setNewestQuery:(id)arg1;
- (void)resetTargetTask;
- (BOOL)fillResultWithSearchType:(unsigned long long)arg1;
- (void)onContactSearchTaskFinish:(id)arg1;
- (id /* block */)m_resultBlock;
- (void)setM_resultBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
