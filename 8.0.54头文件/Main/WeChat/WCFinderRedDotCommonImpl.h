@interface WCFinderRedDotCommonImpl : NSObject <WCFinderSelfContactExt, MMNewTipsMgrExt>
{
    BOOL _lockFinderEntranceRedDot; // +0x8
    NSString * _nativeCurrentUseFinderUsername; // +0x10
    NSString * _lastExchangeFinderUsername; // +0x18
    NSMutableArray * _nativePiplineFilters; // +0x20
    WCFinderBaseCgi * _prefetchSnsBubbleInfoCgi; // +0x28
    NSMutableDictionary * _periodRedDotDic; // +0x30
    NSMutableArray * _allRegisterCurrentExposePath; // +0x38
    unsigned long long _nativeFilterRedDotFlag; // +0x40
}
+ (BOOL)willCheckAbortPrefetchFromActionType:(unsigned long long)arg1 subReasonType:(unsigned long long)arg2;
+ (BOOL)shouldAbortAllRedDotFromActionType:(unsigned long long)arg1 subReasonType:(unsigned long long)arg2 fromCtrlInfo:(id)arg3;
+ (BOOL)isUnreadRedDotCtrlInfoType:(unsigned long long)arg1;
+ (id)genEntryRedDotPathFromBusinessType:(unsigned long long)arg1;
+ (id)getShouldClearTimelineRedDotPath:(id)arg1;
+ (unsigned long long)redDotDataModule:(unsigned long long)arg1;
+ (BOOL)isRedDotDataFinderModule:(unsigned long long)arg1;
+ (BOOL)isRedDotDataDiscoveryLiveModule:(unsigned long long)arg1;
+ (BOOL)isRedDotDataNewLifeModule:(unsigned long long)arg1;
+ (BOOL)isRedDotDataLbsLifeModule:(unsigned long long)arg1;
+ (BOOL)isRedDotDataFinderPurchasedContentModule:(unsigned long long)arg1;
+ (BOOL)isRedDotDataLongVideoModule:(unsigned long long)arg1;
+ (BOOL)isRedDotDataTingModule:(unsigned long long)arg1;
+ (BOOL)isReddotK1KModule:(unsigned long long)arg1;
+ (BOOL)isReddotSearchModule:(unsigned long long)arg1;
+ (BOOL)isRedDotDataNearbyModule:(unsigned long long)arg1;
+ (BOOL)isEnterRedCtrlTypeNeedSwitchTab:(unsigned long long)arg1;
+ (BOOL)isEnterRedCtrlTypeNeedCtrlInfo:(id)arg1;
+ (unsigned long long)redDotEntryBusinessType:(id)arg1;
+ (BOOL)isServerFriendTabRedDotCtrl:(unsigned long long)arg1;
+ (BOOL)isJumpFirendTabRedDotCtrl:(unsigned long long)arg1;
+ (BOOL)isServerFollowTabRedDotCtrl:(unsigned long long)arg1;
+ (BOOL)isJumpFollowTabRedDotCtrl:(unsigned long long)arg1;
+ (BOOL)isServerHotTabRedDotCtrl:(unsigned long long)arg1;
+ (BOOL)isJumpHotTabRedDotCtrlForFilter:(unsigned long long)arg1;
+ (BOOL)isJumpHotTabRedDotCtrl:(unsigned long long)arg1;
+ (BOOL)isJumpNearbyPeopleCtrlType:(unsigned long long)arg1;
+ (BOOL)isJumpNearbyLiveCtrlType:(unsigned long long)arg1;
+ (BOOL)isServerNearbyLiveCtrlType:(unsigned long long)arg1;
+ (BOOL)isFinderRedDotCtrlType:(unsigned long long)arg1;
+ (BOOL)containTargetPath:(id)arg1 ctrlInfo:(id)arg2;
+ (long long)getTabTypeWithEntranceRedDotCtrlInfoType:(id)arg1;
- (void)checkShouldAbortFinderPrefetchFromActionType:(unsigned long long)arg1 subReasonType:(unsigned long long)arg2 fromCtrlInfo:(id)arg3;
- (id)init;
- (id)allRegisterCurrentExposePath;
- (id)periodRedDotDic;
- (void)addFinderRedDotInfoToPeriodRedDotDic:(id)arg1;
- (id)getTargetRedDotArrayByPath:(id)arg1;
- (unsigned int)increaseRedDotExpose:(id)arg1;
- (id)currentShowInfoAtPath:(id)arg1;
- (void)clearTimelineAllRedDot;
- (void)cleanPeriodRedDotListAsScene:(int)arg1 targetPath:(id)arg2;
- (id)currentUseFinderUsername;
- (void)setCurrentUseFinderUsername:(id)arg1;
- (void)resetToDefaultUsername;
- (void)setNativeCurrentUseFinderUsername:(id)arg1;
- (id)nativeCurrentUseFinderUsername;
- (void)updateLastExchangeFinderUsername:(id)arg1;
- (void)exchangeRedDotSystemToFinderUsername:(id)arg1;
- (void)cleanPrefetchFeedInfoByTipsUuidArray:(id)arg1;
- (void)syncRedDotUnreadChainInfo;
- (long long)getCurWXUnreadCount;
- (long long)getWXPrivateMsgUnreadCount;
- (long long)getCurFinderUnreadCountByUsername:(id)arg1 fromRedDotPath:(BOOL)arg2;
- (unsigned long long)filterRedDotFlag;
- (void)setFilterRedDotFlag:(unsigned long long)arg1;
- (id)piplineFilters;
- (void)setPiplineFilters:(id)arg1;
- (long long)getCurFinderPrivateMsgCountByUsername:(id)arg1 fromRedDotPath:(BOOL)arg2;
- (long long)getCurMemberUnreadCountByUsername:(id)arg1 fromRedDotPath:(BOOL)arg2;
- (void)updateRedDotExposeAppear:(BOOL)arg1 targetPath:(id)arg2;
- (void)updateRedDotExposeAppear:(BOOL)arg1 showInfo:(id)arg2;
- (BOOL)shouldRevokeRedDotPathInfo:(id)arg1 isOnlyWhiteList:(BOOL)arg2 whiteListTips:(id)arg3;
- (id)filterRedDotInfoBeforeAddAction:(id)arg1;
- (BOOL)forbidRedDotBeforeAddAction:(id)arg1;
- (void)handleRedDotAfterAddActon:(id)arg1;
- (void)notifyRedDotAsActionType:(unsigned long long)arg1 subReasonType:(unsigned long long)arg2 fromCtrlInfo:(id)arg3 toCtrlInfo:(id)arg4 disposePath:(id)arg5;
- (void)checkSimulRedDotConflictFromActionType:(unsigned long long)arg1 toCtrlInfo:(id)arg2;
- (void)prefetchRedDotAttachInfoByCtrlInfo:(id)arg1;
- (BOOL)enableUseMaxPriorityCtrlInfo:(id)arg1 atPath:(id)arg2 ignoreNMFrequency:(BOOL)arg3;
- (void)redDotHasDisposeAtPath:(id)arg1 atCtrlInfo:(id)arg2;
- (BOOL)updateShowInfoTreeReddotCounTraversally:(id)arg1;
- (BOOL)updateShowInfoTreeReddotCount:(id)arg1;
- (BOOL)enableRedDotDisposeAtPath:(id)arg1;
- (void)checkCtrlInfo:(id)arg1;
- (void)pretreatmentRedDot:(id)arg1;
- (void)priorityOverwriteReport:(id)arg1;
- (void)preHandleRedDot:(id)arg1;
- (void)onChangeSelectedFinderUsername:(id)arg1;
- (void)clearAllCurentExposeRedDotPath;
- (void)addExposeRedDotPath:(id)arg1;
- (void)removeExposeRedDotPath:(id)arg1;
- (void)resetCurentExposeRedDotPath:(id)arg1;
- (BOOL)isCurrentExposeRedDotPath:(id)arg1;
- (void)handleFinderUsernameChangeLogic;
- (id)currentCtrlInfoAtPath:(id)arg1;
- (id)ctrlInfoWithTipsUuid:(id)arg1;
- (void)disposeRedDotIgnoreClearTypeAtPath:(id)arg1;
- (void)addNewRedDotCtrlInfo:(id)arg1;
- (id)ctrlInfoWithType:(unsigned long long)arg1;
- (void)clearSameTypeCtrlInfoType:(unsigned long long)arg1;
- (BOOL)disposeRedDotAtPath:(id)arg1;
- (void)disposeRedDotCtrlInfoByTipsUuid:(id)arg1;
- (id)lastExchangeFinderUsername;
- (void)setLastExchangeFinderUsername:(id)arg1;
- (BOOL)lockFinderEntranceRedDot;
- (void)setLockFinderEntranceRedDot:(BOOL)arg1;
- (id)nativePiplineFilters;
- (void)setNativePiplineFilters:(id)arg1;
- (id)prefetchSnsBubbleInfoCgi;
- (void)setPrefetchSnsBubbleInfoCgi:(id)arg1;
- (void)setPeriodRedDotDic:(id)arg1;
- (void)setAllRegisterCurrentExposePath:(id)arg1;
- (unsigned long long)nativeFilterRedDotFlag;
- (void)setNativeFilterRedDotFlag:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

