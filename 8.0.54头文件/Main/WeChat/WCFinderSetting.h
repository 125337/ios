@interface WCFinderSetting : NSObject <PBCoding>
{
    BOOL _isSilencePlay; // +0x8
    BOOL _shouldReinitForce; // +0x9
    BOOL _showFinderRedDot; // +0xa
    BOOL _showLikeFriendsLikeGuideView; // +0xb
    unsigned int _latestReportNotificationStatusSecond; // +0xc
    NSString * _finderContactUsername; // +0x10
    NSString * _selectedFinderContactUsername; // +0x18
    NSString * _svrMasterUsername; // +0x20
    WCFinderUserMentionModel * _wxMentionModel; // +0x28
    unsigned long long _currentUserVersion; // +0x30
    unsigned long long _lastUserVersion; // +0x38
    long long _latestEnterSecond; // +0x40
    long long _latestLeaveSecond; // +0x48
    long long _fastLeaveTimes; // +0x50
    long long _latestInteractionRedDotDisplaySecond; // +0x58
    long long _latestRefreshPrefetchSecond; // +0x60
    long long _latestFollowRedDotDisappearSecond; // +0x68
    WCFinderTipsShowEntranceExtInfo * _entranceShowInfoExtInfo; // +0x70
    unsigned long long _doubleClickRefreshTipsShowCount; // +0x78
    NSDictionary * _tabInfoDict; // +0x80
    long long _latestRecommendRedDotDisappearSecond; // +0x88
    long long _findFinderPrefetchSecond; // +0x90
    FinderStreamPrefechTimeIntervalConf * _intervalConf; // +0x98
    FinderLiveAliasInfo * _aliasInfo; // +0xa0
    long long _naerbyLatestEnterSecond; // +0xa8
    long long _nearbyLatestLeaveSecond; // +0xb0
    long long _liveLatestEnterSecond; // +0xb8
    long long _liveLatestLeaveSecond; // +0xc0
    NSArray * _finderUsernameList; // +0xc8
    unsigned long long _antiAddictPassSeconds; // +0xd0
    unsigned long long _antiAddictLastLiftCurfewTimeStamp; // +0xd8
    unsigned long long _antiAddictPassUpdateTimeStamp; // +0xe0
    unsigned long long _antiSceneTotalWatchSeconds; // +0xe8
    unsigned long long _antiSceneTotalWatchUpdateTimeStamp; // +0xf0
    NSMutableArray * _slideUpGuideExposureInfos; // +0xf8
    long long _latestFinderRedDotExposeSecond; // +0x100
    long long _latestLiveRedDotExposeSecond; // +0x108
    long long _latestFinderRedDotGotSecond; // +0x110
    long long _latestLiveRedDotGotSecond; // +0x118
    NSArray * _slideUpGuideConfigArr; // +0x120
    NSArray * _notInterestedConfigArr; // +0x128
    unsigned long long _followingCount; // +0x130
    long long _followLatestLeaveSecond; // +0x138
    long long _recommendLatestLeaveSecond; // +0x140
    long long _machineLatestLeaveSecond; // +0x148
}
+ (void)PBArrayAdd_finderContactUsername;
+ (void)PBArrayAdd_isSilencePlay;
+ (void)PBArrayAdd_wxMentionModel;
+ (void)PBArrayAdd_currentUserVersion;
+ (void)PBArrayAdd_lastUserVersion;
+ (void)PBArrayAdd_showFinderRedDot;
+ (void)PBArrayAdd_latestEnterSecond;
+ (void)PBArrayAdd_latestLeaveSecond;
+ (void)PBArrayAdd_fastLeaveTimes;
+ (void)PBArrayAdd_latestInteractionRedDotDisplaySecond;
+ (void)PBArrayAdd_latestRefreshPrefetchSecond;
+ (void)PBArrayAdd_showLikeFriendsLikeGuideView;
+ (void)PBArrayAdd_latestFollowRedDotDisappearSecond;
+ (void)PBArrayAdd_entranceShowInfoExtInfo;
+ (void)PBArrayAdd_doubleClickRefreshTipsShowCount;
+ (void)PBArrayAdd_latestRecommendRedDotDisappearSecond;
+ (void)PBArrayAdd_shouldReinitForce;
+ (void)PBArrayAdd_intervalConf;
+ (void)PBArrayAdd_tabInfoDict;
+ (void)PBArrayAdd_naerbyLatestEnterSecond;
+ (void)PBArrayAdd_nearbyLatestLeaveSecond;
+ (void)PBArrayAdd_liveLatestEnterSecond;
+ (void)PBArrayAdd_liveLatestLeaveSecond;
+ (void)PBArrayAdd_aliasInfo;
+ (void)PBArrayAdd_finderUsernameList;
+ (void)PBArrayAdd_latestReportNotificationStatusSecond;
+ (void)PBArrayAdd_antiAddictPassSeconds;
+ (void)PBArrayAdd_antiAddictLastLiftCurfewTimeStamp;
+ (void)PBArrayAdd_antiAddictPassUpdateTimeStamp;
+ (void)PBArrayAdd_antiSceneTotalWatchSeconds;
+ (void)PBArrayAdd_antiSceneTotalWatchUpdateTimeStamp;
+ (void)PBArrayAdd_slideUpGuideExposureInfos;
+ (void)PBArrayAdd_latestFinderRedDotExposeSecond;
+ (void)PBArrayAdd_latestLiveRedDotExposeSecond;
+ (void)PBArrayAdd_latestFinderRedDotGotSecond;
+ (void)PBArrayAdd_latestLiveRedDotGotSecond;
+ (void)PBArrayAdd_slideUpGuideConfigArr;
+ (void)PBArrayAdd_notInterestedConfigArr;
+ (void)PBArrayAdd_selectedFinderContactUsername;
+ (void)PBArrayAdd_svrMasterUsername;
+ (void)PBArrayAdd_followingCount;
+ (void)initialize;
+ (BOOL)isSameDay:(long long)arg1 Time2:(long long)arg2;
- (id)getPBPropertyTable;
- (id)wxMentionModel;
- (id)slideUpGuideExposureInfos;
- (BOOL)needReinit;
- (void)updateCurLatestLeaveSecondByTabType:(long long)arg1;
- (long long)getLatestLeaveSecondByTabType:(long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)finderContactUsername;
- (void)setFinderContactUsername:(id)arg1;
- (id)selectedFinderContactUsername;
- (void)setSelectedFinderContactUsername:(id)arg1;
- (id)svrMasterUsername;
- (void)setSvrMasterUsername:(id)arg1;
- (BOOL)isSilencePlay;
- (void)setIsSilencePlay:(BOOL)arg1;
- (void)setWxMentionModel:(id)arg1;
- (unsigned long long)currentUserVersion;
- (void)setCurrentUserVersion:(unsigned long long)arg1;
- (unsigned long long)lastUserVersion;
- (void)setLastUserVersion:(unsigned long long)arg1;
- (BOOL)shouldReinitForce;
- (void)setShouldReinitForce:(BOOL)arg1;
- (BOOL)showFinderRedDot;
- (void)setShowFinderRedDot:(BOOL)arg1;
- (long long)latestEnterSecond;
- (void)setLatestEnterSecond:(long long)arg1;
- (long long)latestLeaveSecond;
- (void)setLatestLeaveSecond:(long long)arg1;
- (long long)fastLeaveTimes;
- (void)setFastLeaveTimes:(long long)arg1;
- (long long)latestInteractionRedDotDisplaySecond;
- (void)setLatestInteractionRedDotDisplaySecond:(long long)arg1;
- (long long)latestRefreshPrefetchSecond;
- (void)setLatestRefreshPrefetchSecond:(long long)arg1;
- (long long)latestFollowRedDotDisappearSecond;
- (void)setLatestFollowRedDotDisappearSecond:(long long)arg1;
- (BOOL)showLikeFriendsLikeGuideView;
- (void)setShowLikeFriendsLikeGuideView:(BOOL)arg1;
- (id)entranceShowInfoExtInfo;
- (void)setEntranceShowInfoExtInfo:(id)arg1;
- (unsigned long long)doubleClickRefreshTipsShowCount;
- (void)setDoubleClickRefreshTipsShowCount:(unsigned long long)arg1;
- (id)tabInfoDict;
- (void)setTabInfoDict:(id)arg1;
- (long long)latestRecommendRedDotDisappearSecond;
- (void)setLatestRecommendRedDotDisappearSecond:(long long)arg1;
- (long long)findFinderPrefetchSecond;
- (void)setFindFinderPrefetchSecond:(long long)arg1;
- (id)intervalConf;
- (void)setIntervalConf:(id)arg1;
- (id)aliasInfo;
- (void)setAliasInfo:(id)arg1;
- (long long)naerbyLatestEnterSecond;
- (void)setNaerbyLatestEnterSecond:(long long)arg1;
- (long long)nearbyLatestLeaveSecond;
- (void)setNearbyLatestLeaveSecond:(long long)arg1;
- (long long)liveLatestEnterSecond;
- (void)setLiveLatestEnterSecond:(long long)arg1;
- (long long)liveLatestLeaveSecond;
- (void)setLiveLatestLeaveSecond:(long long)arg1;
- (id)finderUsernameList;
- (void)setFinderUsernameList:(id)arg1;
- (unsigned int)latestReportNotificationStatusSecond;
- (void)setLatestReportNotificationStatusSecond:(unsigned int)arg1;
- (unsigned long long)antiAddictPassSeconds;
- (void)setAntiAddictPassSeconds:(unsigned long long)arg1;
- (unsigned long long)antiAddictLastLiftCurfewTimeStamp;
- (void)setAntiAddictLastLiftCurfewTimeStamp:(unsigned long long)arg1;
- (unsigned long long)antiAddictPassUpdateTimeStamp;
- (void)setAntiAddictPassUpdateTimeStamp:(unsigned long long)arg1;
- (unsigned long long)antiSceneTotalWatchSeconds;
- (void)setAntiSceneTotalWatchSeconds:(unsigned long long)arg1;
- (unsigned long long)antiSceneTotalWatchUpdateTimeStamp;
- (void)setAntiSceneTotalWatchUpdateTimeStamp:(unsigned long long)arg1;
- (void)setSlideUpGuideExposureInfos:(id)arg1;
- (long long)latestFinderRedDotExposeSecond;
- (void)setLatestFinderRedDotExposeSecond:(long long)arg1;
- (long long)latestLiveRedDotExposeSecond;
- (void)setLatestLiveRedDotExposeSecond:(long long)arg1;
- (long long)latestFinderRedDotGotSecond;
- (void)setLatestFinderRedDotGotSecond:(long long)arg1;
- (long long)latestLiveRedDotGotSecond;
- (void)setLatestLiveRedDotGotSecond:(long long)arg1;
- (id)slideUpGuideConfigArr;
- (void)setSlideUpGuideConfigArr:(id)arg1;
- (id)notInterestedConfigArr;
- (void)setNotInterestedConfigArr:(id)arg1;
- (unsigned long long)followingCount;
- (void)setFollowingCount:(unsigned long long)arg1;
- (long long)followLatestLeaveSecond;
- (void)setFollowLatestLeaveSecond:(long long)arg1;
- (long long)recommendLatestLeaveSecond;
- (void)setRecommendLatestLeaveSecond:(long long)arg1;
- (long long)machineLatestLeaveSecond;
- (void)setMachineLatestLeaveSecond:(long long)arg1;
- (void).cxx_destruct;
@end

