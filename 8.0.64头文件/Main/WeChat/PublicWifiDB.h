@interface PublicWifiDB : MMObject
{
    WCTDatabase * _m_db; // +0x8
    WCTTable * _m_table; // +0x10
}
- (void)initDB;
- (void)closeDB;
- (BOOL)cleanDB;
- (BOOL)saveApBase:(id)arg1;
- (BOOL)deleteApBase:(id)arg1;
- (id)getApBaseWithMac:(id)arg1;
- (id)getApBaseWithSsid:(id)arg1 opCode:(unsigned int)arg2;
- (id)m_db;
- (void)setM_db:(id)arg1;
- (id)m_table;
- (void)setM_table:(id)arg1;
- (void).cxx_destruct;
@end
