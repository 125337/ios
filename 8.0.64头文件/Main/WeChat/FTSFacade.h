@interface FTSFacade : MMUserService <IMsgExt, IContactMgrExt, MMServiceProtocol, MMKernelExt>
{
    FTSDB * _ftsDB; // +0x8
    BOOL _isPositioning; // +0x10
    BOOL _bHasActiveSearch; // +0x11
    FTSContactMgr * _ftsContactMgr; // +0x18
    FTSMessageMgr * _ftsMessageMgr; // +0x20
    FTSIntelligentMessageMgr * _ftsIntelligentMessageMgr; // +0x28
    FTSFavMgr * _ftsFavMgr; // +0x30
    FTSMemorySearchMgr * _ftsMemorySearchMgr; // +0x38
    FTSWebSearchMgr * _ftsWebSearchMgr; // +0x40
    FTSReportMgr * _ftsReportMgr; // +0x48
    WALocalSearchMgr * _weAppSearchMgr; // +0x50
    WebSearchRedotMgr * _webSearchRedotMgr; // +0x58
    FTSFinderLocalSearchMgr * _finderLocalSearchMgr; // +0x60
    FTSKFContactLocalSearchMgr * _kfContactLocalSearchMgr; // +0x68
    FTSMinimizeTaskLocalSearchMgr * _minimizeTaskLocalSearchMgr; // +0x70
    NSMutableSet * _imageCacheUrlSet; // +0x78
    BOOL _isOpenWeAppSearch; // +0x80
    BOOL _isOpenWeShopSearch; // +0x81
    BOOL _hasReportNoRedotExposeForSearch; // +0x82
    BOOL _useAPITestLocalH5; // +0x83
    FTSTopHitMgr * _ftsTopHitMgr; // +0x88
    MCSBrandContactMgr * _mcsBrdContactMgr; // +0x90
    FTSGlobalStat * _ftsStat; // +0x98
    WCSearchGroupTrainingMgr * _groupTrainMgr; // +0xa0
    FTSWeShopMgr * _ftsWeShopMgr; // +0xa8
    FTSIndexEngine * _ftsIndexEngine; // +0xb0
    NSString * _localSearchId; // +0xb8
    long long _i64LocalSessionId; // +0xc0
    long long _i64LocalSearchId; // +0xc8
    long long _i64LocalDetailSearchId; // +0xd0
    long long _i64LocalSubSearchId; // +0xd8
    LocalSearchDynamicConfig * _dynConfig; // +0xe0
}
- (id)init;
- (void)dealloc;
- (void)enableForegroundTask;
- (void)forbidForegroundTask;
- (void)preloadResource;
- (void)doInitWorker;
- (void)onBeginSearch;
- (void)resetSearchStatus;
- (void)updateNewestHomePageSearchText:(id)arg1;
- (void)startSearchForHomePage:(id)arg1;
- (void)cancelSearchForHomePage;
- (void)updateNewLocalSearchId:(id)arg1;
- (void)updateDetailNewLocalSearchId;
- (void)updateSubSearchId:(id)arg1;
- (void)logBeginSearch:(unsigned long long)arg1;
- (void)onServiceInit;
- (void)startIndexingTask;
- (void)onEnterBackground;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)onServicePauseBackgroundTask:(unsigned long long)arg1;
- (void)onServiceResumeBackgroundTask:(unsigned long long)arg1;
- (BOOL)isOpenWeAppSearch;
- (void)doInitWeAppSearchMgrIfNeeded;
- (BOOL)isOpenWeShopSearch;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)onRecoverFTSDB;
- (void)onRecoverMsgDB;
- (void)onRecoverFavDB;
- (void)onRecoverContactDB;
- (void)onRecoverWeShopDB;
- (void)onViewPop;
- (void)onEndFtsSearch;
- (void)updateFTSStat;
- (void)onContactListUpdate:(unsigned int)arg1;
- (BOOL)recoverGroupTrainDB;
- (void)onServiceInitIndexEngine;
- (void)registerFTSIndexingEngine;
- (id)getSharedFTSMessageDB;
- (id)getSharedFTSIntelligentMessageDB;
- (id)ftsContactMgr;
- (void)setFtsContactMgr:(id)arg1;
- (id)ftsMessageMgr;
- (void)setFtsMessageMgr:(id)arg1;
- (id)ftsFavMgr;
- (void)setFtsFavMgr:(id)arg1;
- (id)ftsMemorySearchMgr;
- (void)setFtsMemorySearchMgr:(id)arg1;
- (id)ftsIntelligentMessageMgr;
- (void)setFtsIntelligentMessageMgr:(id)arg1;
- (id)ftsWebSearchMgr;
- (void)setFtsWebSearchMgr:(id)arg1;
- (id)ftsTopHitMgr;
- (void)setFtsTopHitMgr:(id)arg1;
- (id)mcsBrdContactMgr;
- (void)setMcsBrdContactMgr:(id)arg1;
- (id)weAppSearchMgr;
- (void)setWeAppSearchMgr:(id)arg1;
- (id)finderLocalSearchMgr;
- (void)setFinderLocalSearchMgr:(id)arg1;
- (id)webSearchRedotMgr;
- (void)setWebSearchRedotMgr:(id)arg1;
- (id)ftsStat;
- (void)setFtsStat:(id)arg1;
- (id)groupTrainMgr;
- (void)setGroupTrainMgr:(id)arg1;
- (id)kfContactLocalSearchMgr;
- (void)setKfContactLocalSearchMgr:(id)arg1;
- (id)minimizeTaskLocalSearchMgr;
- (void)setMinimizeTaskLocalSearchMgr:(id)arg1;
- (id)ftsWeShopMgr;
- (void)setFtsWeShopMgr:(id)arg1;
- (id)ftsIndexEngine;
- (void)setFtsIndexEngine:(id)arg1;
- (id)ftsReportMgr;
- (void)setFtsReportMgr:(id)arg1;
- (id)localSearchId;
- (long long)i64LocalSessionId;
- (long long)i64LocalSearchId;
- (long long)i64LocalDetailSearchId;
- (long long)i64LocalSubSearchId;
- (id)dynConfig;
- (void)setDynConfig:(id)arg1;
- (BOOL)hasReportNoRedotExposeForSearch;
- (void)setHasReportNoRedotExposeForSearch:(BOOL)arg1;
- (BOOL)useAPITestLocalH5;
- (void)setUseAPITestLocalH5:(BOOL)arg1;
- (void).cxx_destruct;
@end
