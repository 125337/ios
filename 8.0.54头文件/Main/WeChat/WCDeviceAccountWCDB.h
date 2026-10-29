@interface WCDeviceAccountWCDB : MMObject
{
    WCTDatabase * m_db; // +0x8
    WCTTable * m_tableAccount; // +0x10
    WCTTable * m_tableAirKiss; // +0x18
}
- (BOOL)setupDB;
- (id)getDeviceBrandAccountWCDBPath;
- (id)getAllDeviceInfosInAccount;
- (unsigned int)getCountOfDeviceInfosInAccountForUser:(id)arg1;
- (id)getAllDeviceInfosInAccountForUser:(id)arg1;
- (id)getDeviceInfoInAccountForUser:(id)arg1 AndDeviceId:(id)arg2;
- (id)getDeviceInfoInAccountForMd5Str:(id)arg1;
- (id)getDeviceInfoInAccountForDID:(long long)arg1;
- (BOOL)insertOrUpdateDeviceInfoInAccount:(id)arg1;
- (void)delDeviceInfosInAccountForUser:(id)arg1;
- (void)delDeviceInfoInAccountForUser:(id)arg1 AndDeviceId:(id)arg2;
- (id)getDataInAirKissForKey:(id)arg1;
- (BOOL)insertOrUpdateInAirKissForKey:(id)arg1 WithData:(id)arg2;
- (id)m_db;
- (void)setM_db:(id)arg1;
- (id)m_tableAccount;
- (void)setM_tableAccount:(id)arg1;
- (id)m_tableAirKiss;
- (void)setM_tableAirKiss:(id)arg1;
- (void).cxx_destruct;
@end

