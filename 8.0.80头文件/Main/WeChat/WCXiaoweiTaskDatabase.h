@interface WCXiaoweiTaskDatabase : NSObject
{
    WCTDatabase * _database; // +0x8
    WCTTable * _taskTable; // +0x10
}
- (id)init;
- (void)closeDatabase;
- (void)reloadDatabase;
- (id)dbTaskFromInfo:(id)arg1;
- (id)infoFromDbTask:(id)arg1;
- (id)encodeTimeRanges:(id)arg1;
- (id)decodeTimeRanges:(id)arg1;
- (BOOL)insertOrReplaceTask:(id)arg1;
- (BOOL)deleteTaskWithId:(id)arg1;
- (id)getAllTasks;
- (id)getTaskById:(id)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)taskTable;
- (void)setTaskTable:(id)arg1;
- (void).cxx_destruct;
@end
