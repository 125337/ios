@interface EnterpriseBrandAttrMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    EnterpriseBrandAttrDB * _db; // +0x8
    NSCache * _cache; // +0x10
    BannerTips * _bannerTips; // +0x18
    NSMutableSet * _attrFetchingSet; // +0x20
}
- (void)onServiceInit;
- (id)getAttrByUserName:(id)arg1;
- (id)getOrCreateAttrByUserName:(id)arg1;
- (unsigned int)getQyUinByUserName:(id)arg1;
- (BOOL)isBrandBlockMsg:(id)arg1;
- (BOOL)isBrandMuteMsg:(id)arg1;
- (unsigned int)getWwEntryType:(id)arg1;
- (BOOL)isHighLightWw:(id)arg1;
- (BOOL)setAttr:(id)arg1 onProperties:(const void *)arg2;
- (void)setCloseHighLightWw:(id)arg1;
- (void)incWwExposeTime:(id)arg1;
- (void)deleteAttr:(id)arg1;
- (id)getAttrCacheItem:(id)arg1;
- (void)removeAttrCacheItem:(id)arg1;
- (BOOL)setAttrToCache:(id)arg1;
- (BOOL)setUpdateTimeToCache:(id)arg1;
- (BOOL)needUpdate:(id)arg1;
- (void)onEnterpriseBrandContactDeleted:(id)arg1;
- (BOOL)updateAttrFromSvr:(id)arg1;
- (BOOL)forceUpdateAttrFromSvr:(id)arg1;
- (void)handleGetBizEnterpriseAttrFromSvr:(id)arg1;
- (id)handleBizEnterpriseAttr:(id)arg1;
- (id)getWeworkBannerTips:(long long)arg1;
- (id)getWeworkBannerIconUrl;
- (id)getWeworkBannerTipsColor;
- (id)getWeworkBannerJumpUrl;
- (id)colorFromARGB:(int)arg1;
- (void)updateBlockMsgFlagToSvr:(id)arg1 block:(BOOL)arg2;
- (void)updateBrandMuteFlagToSvr:(id)arg1 mute:(BOOL)arg2;
- (void)updateAttrToSvr:(id)arg1 mask:(unsigned int)arg2;
- (void)handleSetBizEnterpriseAttrToSvr:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void).cxx_destruct;
@end
