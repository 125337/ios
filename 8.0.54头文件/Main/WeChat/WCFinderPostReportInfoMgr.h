@interface WCFinderPostReportInfoMgr : NSObject
{
    NSMutableDictionary * _keyContainerDic; // +0x8
    NSMutableDictionary * _reportDic; // +0x10
    NSMutableSet * _currentLoadingModules; // +0x18
}
- (id)init;
- (void)markStartLoadingAtPageName:(id)arg1 moduleName:(id)arg2 identification:(id)arg3;
- (void)markEndLoadingAtPageName:(id)arg1 moduleName:(id)arg2 identification:(id)arg3 endReasonType:(int)arg4;
- (void)markStartLoadingAsModule:(id)arg1 identification:(id)arg2;
- (void)markEndLoadingAsModule:(id)arg1 identification:(id)arg2 endReasonType:(int)arg3;
- (void)cleanReportInfo;
- (id)genReportInfo;
- (void)markPagePostSession:(id)arg1;
- (void)cleanPostSession;
- (void)checkAndReportPostSession;
- (id)keyContainerDic;
- (void)setKeyContainerDic:(id)arg1;
- (id)reportDic;
- (void)setReportDic:(id)arg1;
- (id)currentLoadingModules;
- (void)setCurrentLoadingModules:(id)arg1;
- (void).cxx_destruct;
@end

