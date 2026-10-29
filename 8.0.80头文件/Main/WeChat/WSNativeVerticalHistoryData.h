@interface WSNativeVerticalHistoryData : MMObject
{
    BOOL _loaded; // +0x8
    unsigned long long _businessType; // +0x10
    NSMutableArray * _historyList; // +0x18
}
- (id)initWithBusinessType:(unsigned long long)arg1;
- (void)dealloc;
- (id)historyKey;
- (id)historyItems;
- (void)saveClickHistory:(id)arg1;
- (void)tryLoadClickHistory:(BOOL)arg1;
- (id)getClickHistoryItems;
- (id)getClickHistoryItemByIdx:(unsigned long long)arg1;
- (void)addSearchClickHistory:(id)arg1 isLocal:(BOOL)arg2 scene:(int)arg3 businesstype:(int)arg4 requestId:(id)arg5;
- (void)removeSearchClickHistoryByIdx:(unsigned long long)arg1;
- (void)removeSearchClickHistoryByWord:(id)arg1;
- (void)removeSearchClickHistoryByItem:(id)arg1;
- (void)clearSearchClickHistory;
- (unsigned long long)businessType;
- (void)setBusinessType:(unsigned long long)arg1;
- (id)historyList;
- (void)setHistoryList:(id)arg1;
- (BOOL)loaded;
- (void)setLoaded:(BOOL)arg1;
- (void).cxx_destruct;
@end
