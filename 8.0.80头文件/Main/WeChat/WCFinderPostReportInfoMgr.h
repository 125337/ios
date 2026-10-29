@interface WCFinderPostReportInfoMgr : NSObject
{
    NSMutableDictionary * _keyContainerDic; // +0x8
    NSMutableDictionary * _reportDic; // +0x10
    NSMutableSet * _currentLoadingModules; // +0x18
    NSMutableSet * _startLoadingIdSet; // +0x20
    NSMutableSet * _stopLoadingIdSet; // +0x28
    OMJAssetInfoStatistics * _assetInfoCollector; // +0x30
}
- (void)uniqueMarkStartLoadingAtPageName:(id)arg1 moduleName:(id)arg2 identification:(id)arg3;
- (void)uniqueMarkEndLoadingAtPageName:(id)arg1 moduleName:(id)arg2 identification:(id)arg3 endReasonType:(unsigned long long)arg4;
- (void)uniqueMarkStartLoadingAsModule:(id)arg1 identification:(id)arg2;
- (void)uniqueMarkEndLoadingAsModule:(id)arg1 identification:(id)arg2 endReasonType:(unsigned long long)arg3;
- (void)collectAssetsWithPaths:(id)arg1 fromScene:(unsigned long long)arg2 isFinal:(BOOL)arg3;
- (void)removeAssetsFromScene:(unsigned long long)arg1;
- (void)clearAllCollectedAssets;
- (void)restoreCollectedAssetsData:(id)arg1;
- (id)getAllCollectedAssetsData;
- (id)init;
- (void)markStartLoadingAtPageName:(id)arg1 moduleName:(id)arg2 identification:(id)arg3;
- (void)markEndLoadingAtPageName:(id)arg1 moduleName:(id)arg2 identification:(id)arg3 endReasonType:(unsigned long long)arg4;
- (void)markStartLoadingAsModule:(id)arg1 identification:(id)arg2;
- (void)markEndLoadingAsModule:(id)arg1 identification:(id)arg2 endReasonType:(unsigned long long)arg3;
- (void)_markStartLoadingWithModel:(id)arg1;
- (void)_markEndLoadingAtPageName:(id)arg1 moduleName:(id)arg2 identification:(id)arg3 endReasonType:(unsigned long long)arg4;
- (void)cleanReportInfo;
- (id)genReportInfo;
- (void)markPagePostSession:(id)arg1;
- (void)cleanPostSession;
- (void)checkAndReportPostSession;
- (id)startLoadingIdSet;
- (id)stopLoadingIdSet;
- (id)assetInfoCollector;
- (id)keyContainerDic;
- (void)setKeyContainerDic:(id)arg1;
- (id)reportDic;
- (void)setReportDic:(id)arg1;
- (id)currentLoadingModules;
- (void)setCurrentLoadingModules:(id)arg1;
- (void)setStartLoadingIdSet:(id)arg1;
- (void)setStopLoadingIdSet:(id)arg1;
- (void)setAssetInfoCollector:(id)arg1;
- (void).cxx_destruct;
@end
