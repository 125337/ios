@interface WAAppTaskDB : NSObject
{
    NSString * _appID; // +0x8
    WCTDatabase * _db; // +0x10
    WCTTable * _tableLocalStorageMainInfo; // +0x18
    WCTTable * _tableLocalStorageDataInfo_1; // +0x20
    WCTTable * _tableLocalStorageLengthInfo; // +0x28
}
- (id)initWithAppID:(id)arg1;
- (void)dealloc;
- (void)open;
- (BOOL)runTransaction:(id /* block */)arg1;
- (void)close;
- (unsigned long long)getLocalStorageMainStorageLength;
- (BOOL)setLocalStorageMainStorageLength:(unsigned long long)arg1 lastModifyTime:(unsigned int)arg2;
- (void)getLocalStorageData:(id *)arg1 dataType:(id *)arg2 withKey:(id)arg3 storageId:(int)arg4;
- (void)batchGetLocalStorageDataList:(id *)arg1 dataTypeList:(id *)arg2 withKeyList:(id)arg3 storageId:(int)arg4;
- (unsigned int)getLocalStorageKeyAndDataLengthWithKey:(id)arg1 storageId:(int)arg2;
- (unsigned long long)getLocalStorageKeyAndDataLengthWithKeyList:(id)arg1 storageId:(int)arg2;
- (unsigned int)getLocalStorageKeyAndDataLengthWithStorageId:(int)arg1;
- (BOOL)setLocalStorageKeyAndDataLengthWithStorageId:(int)arg1 length:(unsigned long long)arg2 lastModifyTime:(unsigned int)arg3;
- (id)getLocalStorageAllKeys:(int)arg1;
- (BOOL)setLocalStorageData:(id)arg1 dataType:(id)arg2 withKey:(id)arg3 storageId:(int)arg4 lastModifyTime:(unsigned int)arg5;
- (BOOL)batchSetLocalStorageDataList:(id)arg1 dataTypeList:(id)arg2 withKeyList:(id)arg3 storageId:(int)arg4 lastModifyTime:(unsigned int)arg5 handle:(id)arg6;
- (BOOL)removeLocalStorageDataWithKey:(id)arg1 storageId:(int)arg2;
- (void)clearLocalStorage:(int)arg1;
- (void)openDB;
- (void)openTable;
- (void)updateTable;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)db;
- (void)setDb:(id)arg1;
- (id)tableLocalStorageMainInfo;
- (void)setTableLocalStorageMainInfo:(id)arg1;
- (id)tableLocalStorageDataInfo_1;
- (void)setTableLocalStorageDataInfo_1:(id)arg1;
- (id)tableLocalStorageLengthInfo;
- (void)setTableLocalStorageLengthInfo:(id)arg1;
- (void).cxx_destruct;
@end
