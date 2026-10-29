@interface MMFinderLiveAppMsgInfoCacheLogic : NSObject <MMLiveTaskMgrExt>
{
    MMLiveTaskId * _liveTaskId; // +0x8
    NSMutableArray * _appMsgInfoCacheArray; // +0x10
}
- (id)initWithTaskId:(id)arg1;
- (void)addAppMsgInfoCache:(id)arg1;
- (void)processAllAppMsgInfoCache;
- (void)onMinimizeWindowDidHide:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)appMsgInfoCacheArray;
- (void)setAppMsgInfoCacheArray:(id)arg1;
- (void).cxx_destruct;
@end

