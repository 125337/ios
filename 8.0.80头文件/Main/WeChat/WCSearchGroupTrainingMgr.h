@interface WCSearchGroupTrainingMgr : NSObject <IFTSContactDataProviderExt, MMResourceMgrExt>
{
    BOOL _isPreloadScoreFinish; // +0x8
    BOOL _hasDoContactReload; // +0x9
    BOOL _hasReportFirstPreload; // +0xa
    unsigned int _dbCreateTime; // +0xc
    unsigned int _scoreSeq; // +0x10
    NSMutableDictionary * _dicCache; // +0x18
    WCTDatabase * _wctDB; // +0x20
    WCTTable * _cTable; // +0x28
    NSRecursiveLock * _lock; // +0x30
    WCSearchGroupTrainModel * _trainModel; // +0x38
    NSRecursiveLock * _scoreLock; // +0x40
    WCSearchGroupScoreCache * _scoreCache; // +0x48
}
- (id)init;
- (void)dealloc;
- (id)getCTableDir;
- (BOOL)initDB;
- (void)cleanData;
- (BOOL)createCTable;
- (BOOL)updateInfo:(id)arg1;
- (int)calDayOffset;
- (unsigned int)getRefTimeStamp;
- (id)getInfoForGroup:(id)arg1;
- (void)addSearchCountForGroup:(id)arg1;
- (unsigned int)getGroupClickCount:(id)arg1 ForRecentDays:(unsigned int)arg2;
- (unsigned int)getGroupClickDays:(id)arg1 ForRecentDays:(unsigned int)arg2;
- (unsigned int)getLastSearchTimeForGroup:(id)arg1;
- (void)trimInvalid:(unsigned int)arg1;
- (BOOL)recoverDB;
- (void)loadModelIfNeeded;
- (void)removeDownloadModel;
- (BOOL)isPreloadGroupTrainFinish;
- (BOOL)canPreload;
- (void)preloadGroupTrainFeatures;
- (id)safeGetScoreCached;
- (id)safeGetLeafCached;
- (id)safeGetFeatures;
- (double)safeGetScoreByFeature:(id)arg1 gId:(id)arg2 updateCache:(BOOL)arg3;
- (double)runModelForOutLeafNodes:(id)arg1 features:(id)arg2;
- (id)getMaxSearchGroupFeature;
- (void)onContactReload;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (id)dicCache;
- (void)setDicCache:(id)arg1;
- (id)wctDB;
- (void)setWctDB:(id)arg1;
- (id)cTable;
- (void)setCTable:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (unsigned int)dbCreateTime;
- (void)setDbCreateTime:(unsigned int)arg1;
- (id)trainModel;
- (void)setTrainModel:(id)arg1;
- (id)scoreLock;
- (void)setScoreLock:(id)arg1;
- (unsigned int)scoreSeq;
- (void)setScoreSeq:(unsigned int)arg1;
- (id)scoreCache;
- (void)setScoreCache:(id)arg1;
- (BOOL)isPreloadScoreFinish;
- (void)setIsPreloadScoreFinish:(BOOL)arg1;
- (BOOL)hasDoContactReload;
- (void)setHasDoContactReload:(BOOL)arg1;
- (BOOL)hasReportFirstPreload;
- (void)setHasReportFirstPreload:(BOOL)arg1;
- (void).cxx_destruct;
@end
