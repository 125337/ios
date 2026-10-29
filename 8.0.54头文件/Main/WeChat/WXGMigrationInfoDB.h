@interface WXGMigrationInfoDB : NSObject
{
    WCTDatabase * _infoDB; // +0x8
}
- (id)infoDB;
- (void)dealloc;
- (void)closeDB;
- (void)createSessionLastTimeTableWithDeviceID:(id)arg1;
- (void)insertSession:(id)arg1 withLastTime:(unsigned int)arg2 withDeviceID:(id)arg3;
- (void)insertSession:(id)arg1 withBeginTime:(unsigned int)arg2 withEndTime:(unsigned int)arg3 withDeviceID:(id)arg4;
- (unsigned int)getSessionLastTime:(id)arg1 withDeviceID:(id)arg2;
- (id)getSessionInfoResultResultArrayWithDataInfo:(id)arg1 withTmpLastTime:(unsigned int)arg2 withDeviceID:(id)arg3;
- (BOOL)hasMigrationWithDeviceID:(id)arg1;
- (BOOL)hasMigrationWithDeviceID:(id)arg1 withSessionName:(id)arg2;
- (id)p_getSessionLastTimeTableWithDeviceID:(id)arg1;
- (id)p_getSessionTimeIntervalTableWithDeviceID:(id)arg1;
- (void)p_mergeTheTimeIntervalArray:(id)arg1;
- (void)setInfoDB:(id)arg1;
- (void).cxx_destruct;
@end

