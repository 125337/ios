@interface IntelligentClassification : NSObject
{
    BOOL m_intelligentClassificationInitSuccess; // +0x8
    NSRecursiveLock * m_lock; // +0x10
    XChatCls m_imglabel; // +0x18
    BOOL m_intelligentClassificationGPUInitSuccess; // +0x20
    XChatCls m_imglabelGPU; // +0x28
    BOOL m_intelligentClassificationNPUInitSuccess; // +0x30
    XChatCls m_imglabelNPU; // +0x38
}
- (id)init;
- (void)InitModel;
- (BOOL)isCanSupportGPU;
- (BOOL)isGPUIntelligentPattern;
- (BOOL)isCanSupportNPU;
- (BOOL)isCanSupportAMX;
- (BOOL)checkModelFilesExist;
- (BOOL)checkClassificationInitSuccess;
- (id)getClassificationWithImage:(id)arg1 mediaItem:(id)arg2;
- (id)getNPUClassificationWithImage:(id)arg1 mediaItem:(id)arg2;
- (id)batchExecuteClassificationNPU:(id)arg1 error:(id)arg2;
- (id)batchExecuteClassificationGPU:(id)arg1 error:(id)arg2;
- (void)decreaseCrashCount:(id)arg1;
- (id)batchExecuteClassificationCPU:(id)arg1 error:(id)arg2;
- (id)batchExecuteClassification:(id)arg1 error:(id)arg2;
- (id)getLabelNameWithLabelId:(unsigned int)arg1;
- (id)searchLabelInfoDic:(id)arg1;
- (id)getLabelIdListWithQuery:(id)arg1;
- (id)getLabelIdListAlwaySimplifyChinaWithQuery:(id)arg1;
- (id)searchLabelInfoDic:(id)arg1 useFuzzyQuery:(BOOL)arg2 isAlwaySimplifyChina:(BOOL)arg3;
- (id)searchSynonymLabelInfoDic:(id)arg1;
- (id)getSynonymLabelIdListWithQuery:(id)arg1;
- (id)getSynonymLabelIdListAlwaySimplifyChinaWithQuery:(id)arg1;
- (id)searchSynonymLabelInfoDic:(id)arg1 useFuzzyQuery:(BOOL)arg2 isAlwaySimplifyChina:(BOOL)arg3;
- (void)releaseInternalMemory;
- (void)doReportIntelligentClsPerfEveryDay:(id)arg1 inferenceCost:(float)arg2;
- (id)getIntelligentClsPerfEveryDayId;
- (id)getClassificationWithImage:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

