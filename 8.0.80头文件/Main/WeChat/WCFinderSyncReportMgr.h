@interface WCFinderSyncReportMgr : MMUserService <MMServiceProtocol>
{
    unsigned int _lastEnterMomentsTs; // +0x8
    unsigned int _lastEnterFinderTs; // +0xc
    unsigned int _lastEnterLiveTs; // +0x10
    unsigned int _lastEnterFinderEntryTs; // +0x14
    EntranceExposeContent_ExposeRecord * _momentsRecord; // +0x18
    EntranceExposeContent_ExposeRecord * _finderRecord; // +0x20
    EntranceExposeContent_ExposeRecord * _liveRecord; // +0x28
}
- (id)genExposeRecord;
- (void)updateSyncRecord:(unsigned long long)arg1 scene:(unsigned long long)arg2;
- (void)cleanData;
- (void)updateEntranceTime:(unsigned long long)arg1 isEnter:(BOOL)arg2;
- (unsigned int)lastEnterEntranceTime:(unsigned long long)arg1;
- (id)currentEntranceRecord:(unsigned long long)arg1;
- (long long)getStayFinderTimelineInterval;
- (id)momentsRecord;
- (id)finderRecord;
- (id)liveRecord;
- (void)setMomentsRecord:(id)arg1;
- (unsigned int)lastEnterMomentsTs;
- (void)setLastEnterMomentsTs:(unsigned int)arg1;
- (void)setFinderRecord:(id)arg1;
- (unsigned int)lastEnterFinderTs;
- (void)setLastEnterFinderTs:(unsigned int)arg1;
- (void)setLiveRecord:(id)arg1;
- (unsigned int)lastEnterLiveTs;
- (void)setLastEnterLiveTs:(unsigned int)arg1;
- (unsigned int)lastEnterFinderEntryTs;
- (void)setLastEnterFinderEntryTs:(unsigned int)arg1;
- (void).cxx_destruct;
@end
