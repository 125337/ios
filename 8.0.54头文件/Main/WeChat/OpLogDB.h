@interface OpLogDB : NSObject
{
    WCTDatabase * m_db; // +0x8
    WCTTable * m_table; // +0x10
}
- (void)dealloc;
- (BOOL)ConfigWithDir:(id)arg1;
- (void)CloseDB;
- (BOOL)InsertOplogInDB:(id)arg1;
- (id)GetOplogsAfterOplogId:(unsigned int)arg1 limit:(int)arg2;
- (BOOL)DeleteOplogInDB:(unsigned int)arg1;
- (void).cxx_destruct;
@end

