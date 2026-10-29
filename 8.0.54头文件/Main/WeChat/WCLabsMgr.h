@interface WCLabsMgr : MMUserService <IExptServiceExt, MMServiceProtocol>
{
    NSMutableDictionary * _labsAppItemDic; // +0x8
    NSMutableArray * _onlineLabsItems; // +0x10
    NSMutableArray * _offlineLabItems; // +0x18
    WCLabsCommonInfo * _labsCommonInfo; // +0x20
    NSMutableArray * _clearedRedDotLabsAppidAryInLab; // +0x28
    NSMutableArray * _clearedRedDotLabsAppidAryInAppEntrance; // +0x30
    NSMutableArray * _redDotFromClientIdList; // +0x38
}
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)clearAllData;
- (void)loadData;
- (BOOL)isExpRunningWithLabAppid:(id)arg1;
- (BOOL)shouldShowEntranceWithLabAppid:(id)arg1;
- (void)markLabAppClickWithAppid:(id)arg1;
- (void)updateLabAppEntranceWithAppid:(id)arg1 switchValue:(BOOL)arg2 sync:(BOOL)arg3;
- (id)getLabsAppItemByAppid:(id)arg1;
- (BOOL)shouldShowWCLabEntrance;
- (id)getOnlineLabsItems;
- (id)getOfflineLabItems;
- (void)saveLabsAppItemDic;
- (void)markShowLabsTip;
- (BOOL)shouldShowRedDotInWechatLabEntrance;
- (BOOL)shouldShowRedDotInWechatLabsCellWithAppid:(id)arg1;
- (void)tryMarkClearRedDotInWechatLabsCellWithAppid:(id)arg1;
- (BOOL)shouldShowNewRedDotInWechatLabEntrance;
- (void)tryMarkClearNewRedDotInWechatLabEntrance;
- (void)updateOnlineOffLineLabItems;
- (id)getExpItemsArray;
- (void)onGetABTestExpLabsItems:(id)arg1 expiredExpids:(id)arg2 isAutoGet:(BOOL)arg3;
- (void)updateWCLabByXExpt:(id)arg1 deleteExptIds:(id)arg2 andExptFlag:(unsigned int)arg3 andAppIdList:(id)arg4;
- (void)updateRedpointForId:(id)arg1;
- (void).cxx_destruct;
@end

