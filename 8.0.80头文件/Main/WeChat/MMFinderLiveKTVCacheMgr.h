@interface MMFinderLiveKTVCacheMgr : MMUserService <MMLiveCDNPlayerItemExt, MMFinderLiveKTVBoxExt, MMServiceProtocol>
{
    NSMutableDictionary * _ktvCacheDict; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initDatas;
- (void)clearDatas;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (id)cacheKTVContainer:(id)arg1 ktvBox:(id)arg2;
- (void)clearKTVCache:(id)arg1;
- (id)getKTVCache:(id)arg1;
- (id)getKTVCacheWithTaskId:(id)arg1;
- (void)onLiveCDNPlayerItem:(id)arg1 customExtraPramDestroy:(id)arg2;
- (void)onUniqueTaskId:(id)arg1 transitionBegin:(id)arg2 box:(id)arg3 contextId:(id)arg4;
- (void)onUniqueTaskId:(id)arg1 transitionEnd:(id)arg2 box:(id)arg3 contextId:(id)arg4;
- (id)ktvCacheDict;
- (void)setKtvCacheDict:(id)arg1;
- (void).cxx_destruct;
@end
