@interface WABackgroundFetchMgr : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * _dicPrefechDataMemoryStore; // +0x8
    NSMutableDictionary * _dicPeriodDataMemoryStore; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)fetchPeriodData;
- (void)periodFetchData:(id)arg1;
- (BOOL)asyncPreFetchDataIfNeed:(id)arg1 RelativeURL:(id)arg2 EnterScene:(unsigned int)arg3;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)handlePreFetchResponse:(id)arg1 Request:(id)arg2;
- (void)handlePeriodFetchResponse:(id)arg1;
- (void)tryDeleteUnstarData;
- (void)tryDeleteExpiredData;
- (id)getPreFetchData:(id)arg1;
- (id)getPeriodFetchData:(id)arg1;
- (void)cleanPreFetchDataCache:(id)arg1;
- (void)cleanPeriodFetchDataCache:(id)arg1;
- (id)dicPrefechDataMemoryStore;
- (void)setDicPrefechDataMemoryStore:(id)arg1;
- (id)dicPeriodDataMemoryStore;
- (void)setDicPeriodDataMemoryStore:(id)arg1;
- (void).cxx_destruct;
@end

