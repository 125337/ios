@interface WebRecordDB : MMObject
{
    WCTDatabase * _db; // +0x8
    WCTTable * _webRecordTable; // +0x10
}
- (BOOL)initDB;
- (void)closeDB;
- (BOOL)db_DeleteAllRecord;
- (unsigned int)db_GetRecordCount;
- (id)db_GetAllRecordInfoData;
- (id)db_GetRecordInfoDataByUrl:(id)arg1;
- (BOOL)db_InsertOrUpdateRecordInfoData:(id)arg1;
- (void)deleteRedundent;
- (BOOL)db_DeleteRecordInfoDataByUrl:(id)arg1;
- (BOOL)db_tryDeleteOutOfDateLink;
- (id)db;
- (void)setDb:(id)arg1;
- (id)webRecordTable;
- (void)setWebRecordTable:(id)arg1;
- (void).cxx_destruct;
@end

