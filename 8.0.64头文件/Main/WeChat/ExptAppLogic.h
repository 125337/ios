@interface ExptAppLogic : NSObject <PBMessageObserverDelegate>
{
    BOOL _needNoteHitInfo; // +0x8
    unsigned int _lastUpdateTime; // +0xc
    unsigned int _interval; // +0x10
    unsigned int _lastReportTime; // +0x14
    unsigned int _reportIntervalSec; // +0x18
    SafeMutableDictionary * _hitList; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)hit:(id)arg1;
- (void)getSvrExpt:(unsigned int)arg1;
- (void)checkToGetSvrExpt;
- (void)checkToReportConfig;
- (void)resetLastGetTimeSec:(unsigned int)arg1;
- (void)resetGetAppTime:(unsigned int)arg1 and:(unsigned int)arg2;
- (void)reportExptConfig;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleExptAppConfig:(id)arg1;
- (void)handleReportExptApp:(id)arg1;
- (id)respToLocalItem:(id)arg1;
- (void)saveToMMkv:(id)arg1 val:(id)arg2;
- (id)getFromMMkv:(id)arg1 def:(id)arg2;
- (void)saveToMMkv:(id)arg1 valInt:(unsigned int)arg2;
- (unsigned int)getFromMmkv:(id)arg1 defInt:(unsigned int)arg2;
- (void)saveReportList;
- (id)getReportListForMMkv;
- (void)deleteOldMMkvReportList;
- (unsigned long long)getReportOpTimeMs;
- (void)saveReportOpTimeMs;
- (id)createReportList;
- (id)getExptAppDeviceType;
- (unsigned int)getIntervalSec;
- (unsigned int)getLastGetTimeSec;
- (id)getGlobalSequence;
- (BOOL)needLocalList;
- (id)getLocalExptList;
- (id)getCgiReportList;
- (BOOL)OnReceNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)setNextGetExptAppIsIncrement:(BOOL)arg1;
- (BOOL)getNextGetExptAppIsIncrement;
- (void)noteLogStatIgnoreFreqLimitLogId;
- (unsigned int)lastUpdateTime;
- (void)setLastUpdateTime:(unsigned int)arg1;
- (unsigned int)interval;
- (void)setInterval:(unsigned int)arg1;
- (id)hitList;
- (void)setHitList:(id)arg1;
- (unsigned int)lastReportTime;
- (void)setLastReportTime:(unsigned int)arg1;
- (unsigned int)reportIntervalSec;
- (void)setReportIntervalSec:(unsigned int)arg1;
- (BOOL)needNoteHitInfo;
- (void)setNeedNoteHitInfo:(BOOL)arg1;
- (void).cxx_destruct;
@end
