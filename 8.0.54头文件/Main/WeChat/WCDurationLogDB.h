@interface WCDurationLogDB : MMObject
{
    NSString * _filePath; // +0x8
    WCTDatabase * _dataBase; // +0x10
    WCTTable * _table; // +0x18
}
- (BOOL)insertItem:(id)arg1;
- (id)getAllItems;
- (BOOL)deleteAllItems;
- (void)close;
- (id)dataBase;
- (id)table;
- (id)filePath;
- (void)setDataBase:(id)arg1;
- (void)setTable:(id)arg1;
- (void).cxx_destruct;
@end

