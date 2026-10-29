@interface ScanHistoryLogicHelper : NSObject
{
    NSMutableDictionary * _dicItems; // +0x8
    NSMutableArray * _arrSortedKeyByTime; // +0x10
    NSMutableArray * _arrSortedItems; // +0x18
}
+ (BOOL)isExistScanHistory;
+ (id)GetCachePath;
- (id)init;
- (void)LoadDataFromFile;
- (void)SaveDataToFile;
- (void)addItem:(id)arg1 withDataID:(id)arg2 andType:(unsigned long long)arg3;
- (void)removeItem:(unsigned long long)arg1;
- (void)cleanAllData;
- (unsigned long long)historyCount;
- (id)arrHistoryItems;
- (void).cxx_destruct;
@end
