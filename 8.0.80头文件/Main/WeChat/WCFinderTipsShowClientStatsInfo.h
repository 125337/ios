@interface WCFinderTipsShowClientStatsInfo : NSObject <PBCoding>
{
    BOOL _hadSyncColdTime; // +0x8
    unsigned int _exposeCount; // +0xc
    unsigned int _showLine; // +0x10
    NSString * _tipsUuid; // +0x18
    NSString * _oob; // +0x20
    unsigned long long _firstExposeTime; // +0x28
    unsigned long long _receTime; // +0x30
    unsigned long long _lastExposeTimeStamp; // +0x38
    unsigned long long _lastEndExposeTimeStamp; // +0x40
    unsigned long long _lastReportTimeStamp; // +0x48
    unsigned long long _exposeInterval; // +0x50
    unsigned long long _lastReportExposeInterval; // +0x58
}
+ (void)PBArrayAdd_exposeCount;
+ (void)PBArrayAdd_oob;
+ (void)PBArrayAdd_firstExposeTime;
+ (void)PBArrayAdd_receTime;
+ (void)PBArrayAdd_hadSyncColdTime;
+ (void)PBArrayAdd_lastExposeTimeStamp;
+ (void)PBArrayAdd_lastReportTimeStamp;
+ (void)PBArrayAdd_exposeInterval;
+ (void)PBArrayAdd_lastEndExposeTimeStamp;
+ (void)PBArrayAdd_tipsUuid;
+ (void)PBArrayAdd_lastReportExposeInterval;
+ (void)initialize;
+ (id)clientStatsInfo:(id)arg1 bindTipsUuid:(id)arg2;
- (id)getPBPropertyTable;
- (id)init;
- (id)generateFinderClientStatsInfo;
- (long long)timeIntervalByLastEndExposeTs;
- (long long)getReportExposeInterval;
- (id)description;
- (long long)getLastExposeTimeIntervalBy:(unsigned long long)arg1;
- (id)tipsUuid;
- (void)setTipsUuid:(id)arg1;
- (unsigned int)exposeCount;
- (void)setExposeCount:(unsigned int)arg1;
- (id)oob;
- (void)setOob:(id)arg1;
- (unsigned long long)firstExposeTime;
- (void)setFirstExposeTime:(unsigned long long)arg1;
- (unsigned long long)receTime;
- (void)setReceTime:(unsigned long long)arg1;
- (BOOL)hadSyncColdTime;
- (void)setHadSyncColdTime:(BOOL)arg1;
- (unsigned long long)lastExposeTimeStamp;
- (void)setLastExposeTimeStamp:(unsigned long long)arg1;
- (unsigned long long)lastEndExposeTimeStamp;
- (void)setLastEndExposeTimeStamp:(unsigned long long)arg1;
- (unsigned long long)lastReportTimeStamp;
- (void)setLastReportTimeStamp:(unsigned long long)arg1;
- (unsigned long long)exposeInterval;
- (void)setExposeInterval:(unsigned long long)arg1;
- (unsigned long long)lastReportExposeInterval;
- (void)setLastReportExposeInterval:(unsigned long long)arg1;
- (unsigned int)showLine;
- (void)setShowLine:(unsigned int)arg1;
- (void).cxx_destruct;
@end
