@interface MMLocationPoiDetailDB : NSObject
{
    WCTDatabase * _database; // +0x8
    WCTTable * _table; // +0x10
}
- (id)init;
- (void)setupDatabase;
- (id)pathForDatabase;
- (void)closeDB;
- (id)getPoiDetail:(id)arg1;
- (BOOL)insertOrReplace:(id)arg1;
- (void)clearData;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)table;
- (void)setTable:(id)arg1;
- (void).cxx_destruct;
@end
