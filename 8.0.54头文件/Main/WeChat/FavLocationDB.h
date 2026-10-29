@interface FavLocationDB : MMObject
{
    WCTDatabase * m_db; // +0x8
    WCTTable * m_table; // +0x10
}
- (id)init;
- (id)pathForDatabase;
- (void)setupDatabase;
- (void)closeDB;
- (void)clearData;
- (void)closeDBBeforeInit;
- (id)getAddressByLocation:(CLLocationCoordinate2D)arg1;
- (BOOL)setAddress:(id)arg1 ByLocation:(CLLocationCoordinate2D)arg2 ByLanguage:(id)arg3;
- (id)m_db;
- (void)setM_db:(id)arg1;
- (id)m_table;
- (void)setM_table:(id)arg1;
- (void).cxx_destruct;
@end

