@interface WePkgConfigMgr : MMObject
{
    WCTDatabase * _db; // +0x8
    WCTTable * _tablePkgRegularConfig; // +0x10
    WCTTable * _tablePkgUpdateConfig; // +0x18
    WCTTable * _tablePkgGlobalConfig; // +0x20
    WCTTable * _tablePkgNonAtomicSingleFileConfig; // +0x28
}
- (void)openDB;
- (void)closeDB;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (unsigned int)getLastCheckUpdateTimestamp:(id)arg1;
- (BOOL)updateLastCheckUpdateTimestamp:(id)arg1;
- (BOOL)updateLastCheckUpdateVersion:(id)arg1 Version:(id)arg2;
- (id)getLastCheckUpdateVersion:(id)arg1;
- (BOOL)insertOrUpdateRegularConfig:(id)arg1;
- (id)getRegularConfigByPkgId:(id)arg1;
- (BOOL)deleteRegularConfigByPkgId:(id)arg1;
- (id)getAllRegularConfigs;
- (BOOL)insertOrUpdateUpdateConfig:(id)arg1;
- (id)getUpdateConfigByPkgId:(id)arg1;
- (BOOL)deleteUpdateConfigByPkgId:(id)arg1;
- (id)getAllUpdateConfig;
- (BOOL)haveUpdateConfigFor:(id)arg1;
- (id)getNonAtomicSingFileConfigByPkgId:(id)arg1;
- (BOOL)insertOrUpdateNonAtomicSingFileConfig:(id)arg1;
- (BOOL)deleteNonAtomicSingleFileConfigByPkgId:(id)arg1;
- (id)getAllNonAtomicSingFileConfig;
- (id)getRegularConfigListByAppid:(id)arg1;
- (void)reportDBFail:(id)arg1 Version:(id)arg2 Reason:(id)arg3;
- (id)db;
- (void)setDb:(id)arg1;
- (id)tablePkgRegularConfig;
- (void)setTablePkgRegularConfig:(id)arg1;
- (id)tablePkgUpdateConfig;
- (void)setTablePkgUpdateConfig:(id)arg1;
- (id)tablePkgGlobalConfig;
- (void)setTablePkgGlobalConfig:(id)arg1;
- (id)tablePkgNonAtomicSingleFileConfig;
- (void)setTablePkgNonAtomicSingleFileConfig:(id)arg1;
- (void).cxx_destruct;
@end
