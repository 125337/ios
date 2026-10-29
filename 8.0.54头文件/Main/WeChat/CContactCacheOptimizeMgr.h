@interface CContactCacheOptimizeMgr : MMObject <MMKernelExt>
{
    WCContactCacheSliceRecordInfo * m_contactCacheSliceRecordInfo; // +0x8
    WCContactCacheOptimizeInfo * m_contactCacheOptimizeInfo; // +0x10
    NSRecursiveLock * m_lock; // +0x18
    BOOL m_isContactCacheOptimizeSwitch; // +0x20
    NSMutableDictionary * m_dicStateMachine; // +0x28
    unsigned int m_isContactCacheOptimizeMinMemCount; // +0x30
    NSRecursiveLock * m_recordUseLock; // +0x38
}
- (id)init;
- (void)initData;
- (void)dealloc;
- (void)registerMethod;
- (BOOL)isOpenContactCacheOptimize;
- (id)getContactCacheOptimizeBestLoadArrUserName;
- (void)recordUseContactUserName:(id)arg1;
- (void)asyncRecordUseContactUserName:(id)arg1;
- (void)recordContactCacheOptimizeStrategy;
- (void)syncFTSContactDataProviderInit;
- (void)doRecordContactCacheOptimizeStrategy;
- (void)doSaveSliceRecordInfoDataToDB;
- (void)clearBestLoadArrUserName;
- (id)genContactCacheOptimizeFeatureWithUserName:(id)arg1 operateTime:(unsigned int)arg2;
- (id)genContactCacheAccessUserFeatureRecrodWithUserName:(id)arg1 operateTime:(unsigned int)arg2 cacheOptimizeFeature:(id)arg3;
- (unsigned int)parseCondValueWithStrategyFeature:(id)arg1 condtion:(unsigned long long)arg2;
- (id)coverSearchGroupFeatureToStrategyFeature:(id)arg1;
- (id)getBestCacheOptimizeStrategyFeature:(double)arg1;
- (id)accordGroupUserNameListWithBestCacheOptimizeStrategyFeature:(id)arg1 operateTime:(unsigned int)arg2 listScale:(id *)arg3;
- (BOOL)isCheckContactCacheOptimizeFeatureIsMatchBestCacheOptimizeStrategyFeature:(id)arg1 bestCacheOptimizeStrategyFeature:(id)arg2;
- (void)removeOverdueRecordEveryDay:(unsigned int)arg1;
- (BOOL)checkEnoughRecordCacheOptimizeInfoWithCurrentTimeDayZero:(unsigned int)arg1;
- (unsigned int)getMaxDayInterval;
- (unsigned int)getMinRecordDayInterval;
- (unsigned int)getAllChatRoomStrangerCountSwitch;
- (void)calculateAllChatRoomStrangerCountEveryDay;
- (void)calculateFirstRecordCacheOptimizeInfoEveryDay;
- (id)getContactCacheOptimizeInfo;
- (id)p_getContactCacheOptimizeDirPath;
- (id)p_getContactCacheOptimizeSliceRecordInfoDataPathWithDateStr:(id)arg1;
- (void)p_loadContactCacheOptimizeSliceRecordInfoInternal;
- (void)p_saveContactCacheOptimizeSliceRecordInfoToDataFileInternal;
- (id)p_getContactCacheOptimizeInfoPath;
- (void)p_loadContactCacheOptimizeInfoInternal;
- (void)p_saveContactCacheOptimizeInfoToDataFileInternal;
- (id)p_getRemoveOverdueEveryDayId;
- (id)p_getCalculateAllChatRoomStrangerCountEveryDayId;
- (id)p_getFirstRecordCacheOptimizeInfoEveryDayId;
- (void)p_reportIDKeyChatRoomListScale;
- (void)applicationDidEnterBackground;
- (void)applicationWillTerminate:(id)arg1;
- (void)onKickQuit;
- (void)onPreQuit;
- (void)onManulLogOut;
- (void).cxx_destruct;
@end

