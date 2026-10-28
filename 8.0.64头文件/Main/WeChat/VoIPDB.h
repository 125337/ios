@interface VoIPDB : MMObject
{
    WCTDatabase * m_db; // +0x8
    WCTTable * m_table; // +0x10
    WCTTable * m_tableVoIPMessageHistory; // +0x18
}
- (id)init;
- (id)pathForDatabase;
- (void)setupDatabase;
- (id)internalCreateTable:(id)arg1 tableClass:(Class)arg2;
- (void)closeDB;
- (void)clearData;
- (void)closeDBBeforeInit;
- (BOOL)setIlinkStatus:(id)arg1 sdkMode:(unsigned int)arg2 expireTime:(unsigned int)arg3 liveTime:(unsigned int)arg4;
- (unsigned int)getSDKModeForContact:(id)arg1;
- (unsigned int)getExpireTimeForContact:(id)arg1;
- (BOOL)InsertVoIPMessageHistory:(id)arg1 isFromServer:(BOOL)arg2;
- (id)getVoIPMesageHistoryByLimit:(long long)arg1;
- (id)getVoIPMesageHistoryWhere:(const void *)arg1 order:(const void *)arg2 limit:(long long)arg3;
- (BOOL)deleteVoIpMessageHistoryWhere:(const void *)arg1;
- (void)onDelMsg:(id)arg1 msgList:(id)arg2 deleteAll:(BOOL)arg3;
- (id)m_db;
- (void)setM_db:(id)arg1;
- (id)m_table;
- (void)setM_table:(id)arg1;
- (id)m_tableVoIPMessageHistory;
- (void)setM_tableVoIPMessageHistory:(id)arg1;
- (void).cxx_destruct;
@end
