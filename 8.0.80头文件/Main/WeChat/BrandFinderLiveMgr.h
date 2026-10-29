@interface BrandFinderLiveMgr : MMUserService <MMLiveTaskMgrExt, MMServiceProtocol, PBMessageObserverDelegate>
{
    BOOL _mainBizCellBrandLiveVisible; // +0x8
    BOOL _redDotNotifyPullEnable; // +0x9
    MemoryMappedKV * _brandFinderLiveInfoSlotKV; // +0x10
    MemoryMappedKV * _brandFinderLiveClickFeedKV; // +0x18
    MemoryMappedKV * _feedExportIdSlotKV; // +0x20
    NSMutableSet * _setRequestingUsername; // +0x28
    MemoryMappedKV * _brandLiveBarExposedKV; // +0x30
    MemoryMappedKV * _brandFinderLiveCellRedDotInfo; // +0x38
    CMessageWrap * _enterTimeLineBizLiveMsg; // +0x40
    unsigned long long _enterTimeMills; // +0x48
    NSMutableSet * _setWaitingUsername; // +0x50
    MemoryMappedKV * _brandLiveExposedDateKV; // +0x58
    MemoryMappedKV * _mappedKV; // +0x60
    BizDigestFinderLiveInfo _digestFinderLiveInfoFromAff; // +0x68
}
+ (unsigned int)defValueForLiveStatusControl;
+ (BOOL)isBizProfileSwitchOpen;
+ (BOOL)isWebViewTopBarSwitchOpen;
+ (BOOL)isBrandLiveABTestSwitchOpen;
+ (BOOL)isOftenReadBarSwitchOpen;
+ (BOOL)isLiveBarSwitchOpen;
+ (BOOL)isMsgCardSwitchOpen;
+ (BOOL)isSessionSwitchOpen;
+ (long long)brandLiveNotifyTimePerDay;
+ (long long)brandLiveBarShowTimePerDay;
+ (id)getTodayDateStr;
+ (id)getUrlKey:(id)arg1;
- (unsigned int)brandLiveControlInfoBit;
- (void)updateBrandLiveControlInfo:(id)arg1;
- (BOOL)brandOftenReadSvrSwitchOpen;
- (void)updateBrandOftenReadSvrSwitch:(BOOL)arg1;
- (void)handleBizLiveNotifyNewXml:(id)arg1;
- (unsigned int)parseOpFlagFromContent:(id)arg1;
- (void)handleFinderLiveRedDotNotify:(id)arg1;
- (void)updateMainCellLiveInfoWithResp:(id)arg1;
- (BOOL)hasBrandLiveNotifyRedDot;
- (id)getBrandLiveNotifyRedDotInfo;
- (void)onBizMainCellVisibleChanged:(BOOL)arg1;
- (void)startPullRedDotBrandLiveInfoIfNeed;
- (void)__pullRedDotBrandliveInfoDelay;
- (void)stopPullRedDotBrandLiveInfo;
- (void)pullRedDotBrandLiveInfo;
- (void)handleRedDotPullResp:(id)arg1;
- (void)setEnterBizTimeLineMsg:(id)arg1 enterTimeMills:(unsigned long long)arg2;
- (BOOL)isForcePreposedOftenReadBrandLiving:(id)arg1;
- (void)clearBizLiveNotifyInfo;
- (void)markOftenReadBarLiveExposed:(id)arg1 liveExportId:(id)arg2;
- (BOOL)isBizLiveInfoExposedInOftenReadBar:(id)arg1 liveExportId:(id)arg2;
- (void)updateBrandLiveBarShowTimeToday:(id)arg1 liveExportId:(id)arg2;
- (void)updateBrandRedDotNotifyTimeToday:(id)arg1;
- (BOOL)hasReachedBrandBarShowTimeTimeToday:(id)arg1 liveExportId:(id)arg2;
- (BOOL)hasReachedBrandRedDotNotifyTimeToday:(id)arg1;
- (void)onServiceInit;
- (void)dealloc;
- (BOOL)isBrandLiving:(id)arg1;
- (void)asyncGetBrandLiveInfo:(id)arg1 scene:(unsigned int)arg2;
- (void)asyncGetBrandLiveInfoMayDelayByRefreshInterval:(id)arg1 scene:(unsigned int)arg2;
- (void)batchAsyncGetBrandLiveInfo:(id)arg1 scene:(unsigned int)arg2;
- (void)openLiveWithUsername:(id)arg1 liveInfo:(id)arg2 fromVC:(id)arg3 scene:(unsigned int)arg4 replayEntryType:(id)arg5 openParam:(id)arg6;
- (void)openLiveWithUsername:(id)arg1 liveInfo:(id)arg2 feedExportIdArray:(id)arg3 selectedIdIndex:(long long)arg4 fromVC:(id)arg5 scene:(unsigned int)arg6 replayEntryType:(id)arg7;
- (void)openLiveWithUsername:(id)arg1 liveInfo:(id)arg2 feedExportIdArray:(id)arg3 selectedIdIndex:(long long)arg4 fromVC:(id)arg5 scene:(unsigned int)arg6 replayEntryType:(id)arg7 openParam:(id)arg8;
- (void)openLiveWithUsername:(id)arg1 fromVC:(id)arg2 scene:(unsigned int)arg3 replayEntryType:(id)arg4;
- (void)openLiveWithUsername:(id)arg1 fromVC:(id)arg2 scene:(unsigned int)arg3 replayEntryType:(id)arg4 openParam:(id)arg5;
- (void)getFinderDataItem:(id)arg1 completion:(id /* block */)arg2;
- (void)openLiveWithUsername:(id)arg1 feedExportIdArray:(id)arg2 selectedIdIndex:(long long)arg3 fromVC:(id)arg4 extraData:(id)arg5 replayEntryType:(id)arg6 completion:(id /* block */)arg7;
- (void)openLiveWithFinderLiveDataWrapper:(id)arg1 fromVC:(id)arg2 bizUsername:(id)arg3 bizReportExtraDataDict:(id)arg4 elementIdForReport:(id)arg5 eidUdfKv:(id)arg6 replayEntryType:(id)arg7;
- (BOOL)updateBrandLive:(id)arg1 withFeedExportId:(id)arg2 refreshInterval:(unsigned int)arg3 liveSquareTitle:(id)arg4 liveSquareScene:(unsigned int)arg5 coverUrl:(id)arg6 userWeApp:(BOOL)arg7 weAppData:(id)arg8;
- (void)batchUpdateBrandLiveWithResp:(id)arg1;
- (void)resetLiveInfoFeedExportId:(id)arg1;
- (unsigned int)refreshIntervalForUsername:(id)arg1;
- (unsigned int)refreshIntervalForLiveInfo:(id)arg1;
- (void)tryFetchBrandLiveBarList;
- (void)forceFetchBrandLiveBarList;
- (void)__fetchBrandLiveBarList;
- (void)setBrandLiveBarClickLiveInfo:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportFinderLiveCgiResp:(id)arg1 succ:(BOOL)arg2;
- (void)handleBrandLiveListResp:(id)arg1;
- (id)getValidLiveBarLiveInfoArrFromResp:(id)arg1;
- (BOOL)isLiveInfoValidForLiveBar:(id)arg1;
- (void)handleSpecificBrandLiveResp:(id)arg1;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (id)finderLiveInfoWithUserName:(id)arg1;
- (void)tryPrefetchBrandLiveBarList;
- (id)getCachedValidLiveBarLiveInfoArr;
- (void)handlePreloadLiveBarResp:(id)arg1;
- (void)saveListBarResp:(id)arg1;
- (void)markBrandLiveBarLiveExposed:(id)arg1 liveExportId:(id)arg2;
- (BOOL)isBizLiveInfoExposedInLiveBar:(id)arg1 liveExportId:(id)arg2;
- (id)getMainCacheMainColorFromLiveCoverUrl:(id)arg1;
- (void)saveMainColor:(id)arg1 forLiveCoverUrl:(id)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)updateUsername:(id)arg1 withLiveExportId:(id)arg2;
- (id)getUsernameWithLiveExportId:(id)arg1;
- (void)updateDigestFinderLiveInfoFromAff:(BizDigestFinderLiveInfo)arg1;
- (BizDigestFinderLiveInfo)getAffDigestFinderLiveInfo;
- (BOOL)isDigestFinderLiveInfoChanged:(BizDigestFinderLiveInfo)arg1;
- (BizDigestFinderLiveInfo)digestFinderLiveInfoFromAff;
- (void)setDigestFinderLiveInfoFromAff:(BizDigestFinderLiveInfo)arg1;
- (id)brandFinderLiveInfoSlotKV;
- (void)setBrandFinderLiveInfoSlotKV:(id)arg1;
- (id)brandFinderLiveClickFeedKV;
- (void)setBrandFinderLiveClickFeedKV:(id)arg1;
- (id)feedExportIdSlotKV;
- (void)setFeedExportIdSlotKV:(id)arg1;
- (id)setRequestingUsername;
- (void)setSetRequestingUsername:(id)arg1;
- (id)brandLiveBarExposedKV;
- (void)setBrandLiveBarExposedKV:(id)arg1;
- (id)brandFinderLiveCellRedDotInfo;
- (void)setBrandFinderLiveCellRedDotInfo:(id)arg1;
- (BOOL)mainBizCellBrandLiveVisible;
- (void)setMainBizCellBrandLiveVisible:(BOOL)arg1;
- (BOOL)redDotNotifyPullEnable;
- (void)setRedDotNotifyPullEnable:(BOOL)arg1;
- (id)enterTimeLineBizLiveMsg;
- (void)setEnterTimeLineBizLiveMsg:(id)arg1;
- (unsigned long long)enterTimeMills;
- (void)setEnterTimeMills:(unsigned long long)arg1;
- (id)setWaitingUsername;
- (void)setSetWaitingUsername:(id)arg1;
- (id)brandLiveExposedDateKV;
- (void)setBrandLiveExposedDateKV:(id)arg1;
- (id)mappedKV;
- (void)setMappedKV:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
