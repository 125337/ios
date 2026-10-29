@interface WCAdvertiseLogDB : MMObject
{
    WCTDatabase * m_db; // +0x8
    WCTTable * m_table; // +0x10
}
- (id)initWithPath:(id)arg1;
- (BOOL)runTransaction:(id /* block */)arg1;
- (void)closeDB;
- (id)getLogTable;
- (unsigned int)getMaxLocalId;
- (BOOL)insertADLogItem:(id)arg1;
- (id)getADLogs:(unsigned int)arg1 toLocalId:(unsigned int)arg2 limit:(int)arg3;
- (BOOL)deleteADLogs:(unsigned int)arg1 toLocalId:(unsigned int)arg2;
- (void).cxx_destruct;
@end

