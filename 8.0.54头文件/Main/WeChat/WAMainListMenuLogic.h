@interface WAMainListMenuLogic : NSObject <PBMessageObserverDelegate, WAMainListNearByLocationLogicDelegate>
{
    id /* block */ _menuInfoRespAction; // +0x8
    NSMutableArray * _entranceInfoList; // +0x10
    WAMainListNearByLocationLogic * _locationLogic; // +0x18
}
- (id)init;
- (void)requestMainListMenuInfoWithCompleteAction:(id /* block */)arg1;
- (void)requestWithLocation:(id)arg1;
- (id)entranceInfoById:(int)arg1;
- (void)onGetLocationSuccess:(id)arg1;
- (void)onGetLocationFailedWithReason:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)updateEntranceInfoCache:(id)arg1;
- (id)entranceInfoCache;
- (id /* block */)menuInfoRespAction;
- (void)setMenuInfoRespAction:(id /* block */)arg1;
- (id)entranceInfoList;
- (void)setEntranceInfoList:(id)arg1;
- (id)locationLogic;
- (void)setLocationLogic:(id)arg1;
- (void).cxx_destruct;
@end

