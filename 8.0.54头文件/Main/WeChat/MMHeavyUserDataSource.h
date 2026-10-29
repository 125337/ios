@interface MMHeavyUserDataSource : NSObject
{
    MemoryMappedKV * m_memoryMappedKV; // +0x8
    unsigned long long m_heavyUserType; // +0x10
    unsigned long long m_heavyUserPoint; // +0x18
    unsigned long long m_contactCount; // +0x20
    unsigned long long m_sessionCount; // +0x28
    unsigned long long m_wechatSize; // +0x30
    unsigned long long m_yesterdayDumpCount; // +0x38
    double m_finderAEC; // +0x40
    NSMutableArray * m_effectiveWatchLiveDays; // +0x48
    unsigned long long m_todayWatchLiveTotalTime; // +0x50
    NSDate * m_liveLastDate; // +0x58
    id <MMHeavyUserDataSourceDelegate> _delegate; // +0x60
}
- (id)init;
- (void)loadData;
- (id)currentUserMemmoryMappedKey;
- (id)get14606KVString;
- (BOOL)isFirstScanThisWeek;
- (void)saveTodayHasScanned;
- (BOOL)isFirstReportHeavyUserTypeToday;
- (void)updateNextReportTimestamp;
- (void)updateHeavyUserType:(unsigned long long)arg1;
- (void)saveLastReportHeavyUserType:(unsigned long long)arg1;
- (unsigned long long)getLastReportHeavyUserType;
- (unsigned long long)getHeavyUserType;
- (BOOL)isFirstReportHeavyUserPointToday;
- (void)saveLastReportHeavyUserPointTime;
- (unsigned long long)getHeavyUserPoint;
- (void)updateHeavyUserPoint:(unsigned long long)arg1;
- (void)beginStackReport;
- (void)finishStackReport;
- (BOOL)checkIfNeedRetryStackReport;
- (unsigned long long)getContactCount;
- (void)updateContactCount:(unsigned long long)arg1;
- (unsigned long long)getSessionCount;
- (void)updateSessionCount:(unsigned long long)arg1;
- (unsigned long long)getWeChatSize;
- (void)updateWeChatSize:(unsigned long long)arg1;
- (unsigned long long)getDumpCount;
- (unsigned long long)p_getYesterDayDumpCount;
- (void)addDumpCount;
- (double)getFinderAEC;
- (void)updateFinderAEC:(double)arg1;
- (void)updateLiveTime:(unsigned long long)arg1;
- (void)updateEffectiveWatchLiveDaysArray;
- (double)getLiveWatchRate;
- (void)clearAll;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

