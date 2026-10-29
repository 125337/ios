@interface MMLocationDB : NSObject
{
    WCTDatabase * m_db; // +0x8
    WCTTable * m_table; // +0x10
}
+ (long long)getIntegerNumber:(double)arg1;
- (id)init;
- (id)pathForDatabase;
- (void)setupDatabase;
- (void)closeDB;
- (void)clearData;
- (void)closeDBBeforeInit;
- (id)getAddressByLocation:(CLLocationCoordinate2D)arg1 floorName:(id)arg2 type:(long long)arg3 language:(unsigned long long)arg4;
- (BOOL)setAddress:(id)arg1 ByLocation:(CLLocationCoordinate2D)arg2 type:(long long)arg3 languageName:(id)arg4;
- (id)m_db;
- (void)setM_db:(id)arg1;
- (id)m_table;
- (void)setM_table:(id)arg1;
- (void).cxx_destruct;
@end

