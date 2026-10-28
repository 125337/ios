@interface IntelligentFaceAlbum : NSObject
{
    NSRecursiveLock * m_lock; // +0x8
    BOOL m_intelligentFaceAlbumInitSuccess; // +0x10
    double m_clusterThreshold; // +0x18
    TrackerManager m_face_tracker; // +0x20
    XFaceCluster m_face_cluster; // +0x38
    vector<float, std::allocator<float>> m_arrVl2NormFaceCluster; // +0x40
    BOOL m_isFinishCompleteFaceCluster; // +0x58
    BOOL m_isHadIntelligentFaceCluster; // +0x59
    NSMutableArray * m_arrPreFaceCluster; // +0x60
    id /* block */ _m_SaveFaceClusterToDbBlock; // +0x68
}
- (id)init;
- (void)dealloc;
- (void)initData;
- (void)initFaceFeatureHardwareAcceleration;
- (BOOL)checkIsOpenFaceFeatureHardwareAcceleration;
- (BOOL)checkModelFilesExist;
- (void)InitModel;
- (BOOL)checkFaceAlbumInitSuccess;
- (id)batchExecuteFaceAlbum:(id)arg1 error:(id)arg2;
- (id)executeBatchExecuteFaceAlbum:(id)arg1;
- (id)getArrPreFaceCluster;
- (void)operateFaceClusterWithHistory:(id)arg1 dicNewLabelPreLabel:(id)arg2;
- (void)optimizeOperateFaceClusterWithHistory:(id)arg1 dicNewLabelPreLabel:(id)arg2;
- (BOOL)checkIsSameFaceClusterWithArrPreFaceFeature:(id)arg1 arrFaceFeature:(id)arg2;
- (void)updateOrInsertFaceClusterListToDbWithBlock:(id /* block */)arg1 dicLabelDbLabel:(id)arg2;
- (unsigned int)calculateFaceAlbumLableId:(unsigned int)arg1 currentFaceClusterNumber:(long long)arg2 faceAlbumData:(id)arg3;
- (BOOL)asyncCheckAndRepairFaceCluster;
- (BOOL)asyncCheckAndRepairFaceClusterOptimize;
- (void)asyncFinishCompleteL2NormFaceCluster:(id)arg1;
- (void)reportFaceClusterData;
- (BOOL)isEnableDataReport;
- (id)m_arrPreFaceCluster;
- (void)setM_arrPreFaceCluster:(id)arg1;
- (id /* block */)m_SaveFaceClusterToDbBlock;
- (void)setM_SaveFaceClusterToDbBlock:(id /* block */)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
