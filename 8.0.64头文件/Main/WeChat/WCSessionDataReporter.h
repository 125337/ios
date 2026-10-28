@interface WCSessionDataReporter : MMUserService <SessionSwitchExt, MMServiceProtocol>
{
    NSMutableArray * queue; // +0x8
    BOOL * entryRedDotInfo; // +0x10
    BOOL * entryRedDotInfoCopy; // +0x18
    WCFinderTrigger * m_finderTrigger; // +0x20
    NSArray * weChatTabRedDotArray; // +0x28
    WeChatTabRedDotStruct * copyFindFriendsTabStruct; // +0x30
    NSString * currSessionId; // +0x38
    NSString * lastTwoSessionId; // +0x40
    unsigned long long lastTwoSessionStayTimeMs; // +0x48
    NSSet * needReportReddotUnExpPaths; // +0x50
    NSMutableDictionary * needReportReddotUnExpStructs; // +0x58
    unsigned long long entrySwitch; // +0x60
    unsigned long long lastGetNetTypeTimeMs; // +0x68
    unsigned int lastNetType; // +0x70
    unsigned long long lastGetBatteryTimeMs; // +0x78
    unsigned int lastBatteryLevel; // +0x80
    NSString * _k1kRedDotReportJson; // +0x88
    NSString * _finderRedDotReportJson; // +0x90
    NSString * _finderLiveRedDotReportJson; // +0x98
}
+ (int)formatStringToNumber:(id)arg1;
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (unsigned long long)getDsEnterToFrontFirstTimeMs;
- (void)setDsEnterToFrontFirstTimeMs;
- (void)onServiceEnterForeground;
- (void)checkToReqGetLiveTipsConfig;
- (void)onServiceEnterBackground;
- (void)resetInfo;
- (id)checkToReturnAiFinderInfo;
- (int)getCurrSessionId;
- (int)getLastTwoSessionId;
- (unsigned long long)getLastTwoSessionStayTimeMs;
- (void)onSessionEnter:(id)arg1 withTime:(unsigned long long)arg2;
- (void)noteFindFriendEntryRedDot:(long long)arg1 andHadRedDot:(BOOL)arg2;
- (void)noteTabBarBadge:(BOOL)arg1 andTotalCount:(long long)arg2 andTabIndex:(unsigned int)arg3;
- (BOOL)isFindFriendsTabHadRedDot;
- (void)handleSessionEvent:(id)arg1 withEnterTime:(unsigned long long)arg2;
- (void)copyEntryRedDotInfo;
- (id)getCopyEntryRedDotInfo;
- (void)copyFindFriendTabStruct;
- (void)checkSessionData;
- (void)reportFindFrindEntry:(id)arg1 andNext:(id)arg2 andLast:(id)arg3;
- (void)handleNewMainFrameViewController:(id)arg1 andCurr:(id)arg2 andNext:(id)arg3;
- (void)handleFindFriendEntryController:(id)arg1 andCurr:(id)arg2 andNext:(id)arg3;
- (void)enterNewMainFrameViewController:(id)arg1 andCurr:(id)arg2 andNext:(id)arg3;
- (void)quitNewMainFrameViewController:(id)arg1 andCurr:(id)arg2 andNext:(id)arg3;
- (void)enterFindFriendEntryController:(id)arg1 andCurr:(id)arg2 andNext:(id)arg3;
- (void)quitFindFriendEntryController:(id)arg1 andCurr:(id)arg2 andNext:(id)arg3;
- (void)noteFinderRedDotReportJson;
- (id)getFinderRedDotJson:(id)arg1;
- (void)finderRedDotLogic;
- (void)triggerSyncAction;
- (BOOL)noteFinderRedDotExpose;
- (BOOL)checkRedDotIfInColdTimeWhenEnter;
- (BOOL)checkRedDotExposeLimitWhenEnter;
- (BOOL)checkRedDotExposeLimitWhenEnterForNewLifeSync;
- (BOOL)checkRedDotExposeLimitWhenEnterForSearchSync;
- (BOOL)checkRedDotExposeLimitWhenEnterForPath:(id)arg1;
- (BOOL)checkRedDotExposeLimitWhenEnterForTing;
- (void)checkRedDotExposeLimitWhenQuit:(id)arg1;
- (void)finderSync;
- (void)disposeRedDotAtPath:(id)arg1;
- (BOOL)checkRedDotColdTimeWhenEnter:(id)arg1;
- (BOOL)checkRedDotExposeLimitWhenEnter:(id)arg1;
- (void)checkRedDotExposeLimitWhenQuit:(id)arg1 andToSid:(id)arg2 andIgnoreSid:(unsigned int)arg3;
- (void)checkRedDotExposeLimitWithPath:(id)arg1;
- (unsigned int)checkFinderTipsShowInfo:(id)arg1;
- (void)reportExposeLimitStrategy:(id)arg1 andAction:(unsigned int)arg2;
- (unsigned int)genDayStr:(unsigned long long)arg1;
- (void)reportReddotExpTimeOnExposurePath:(id)arg1 andShowInfo:(id)arg2 andCtrlInfo:(id)arg3;
- (void)reportReddotExpTimeOnUnExposePath:(id)arg1 andTipsUuid:(id)arg2;
- (void)onFindFriendRedDotEvent:(id)arg1;
- (unsigned int)getCacheNetType;
- (unsigned int)getCacheBatteryLevel;
- (unsigned long long)getFindFriendEntrySwitch;
- (void)resetFindFriendEntrySwitch;
- (void)noteFindFriendEntry:(long long)arg1 andSwitch:(BOOL)arg2;
- (unsigned long long)getFindFriendEntryReddotEnabledInfo;
- (unsigned int)getWeSportHKStepCount;
- (unsigned int)getWeSportM7StepCount;
- (id)k1kRedDotReportJson;
- (void)setK1kRedDotReportJson:(id)arg1;
- (id)finderRedDotReportJson;
- (void)setFinderRedDotReportJson:(id)arg1;
- (id)finderLiveRedDotReportJson;
- (void)setFinderLiveRedDotReportJson:(id)arg1;
- (void).cxx_destruct;
@end
