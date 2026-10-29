@interface ContactProfileRecommendLogic : MMObject
{
    XSummary m_profileRecommendSummary; // +0x8
    BOOL m_profileRecommendSummaryInitSuccess; // +0x10
    NSRecursiveLock * m_lock; // +0x18
}
- (id)init;
- (void)InitModel;
- (BOOL)checkModelFilesExist;
- (BOOL)checkContactRemarkSummaryInitSuccess;
- (id)getContactProfileRemarkRecommend:(id)arg1;
- (id)getFriendProfileRecommendInputInfo:(id)arg1;
- (id)getFriendProfileRecommendInputInfoInHello:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

