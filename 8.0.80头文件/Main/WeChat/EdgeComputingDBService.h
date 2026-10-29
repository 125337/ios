@interface EdgeComputingDBService : MMObject
{
    NSMutableDictionary * _dBMgrCache; // +0x8
}
- (id)init;
- (id)getOrCreateDBMgr:(id)arg1;
- (id)queryDataBySQL:(id)arg1 withSQL:(id)arg2;
- (BOOL)saveDatasToDB:(id)arg1 withTable:(id)arg2 withFields:(id)arg3 withDatas:(id)arg4;
- (BOOL)checkTableExist:(id)arg1 withDB:(id)arg2;
- (BOOL)createTable:(id)arg1 withFields:(id)arg2 withDBManager:(id)arg3;
- (void)clear;
- (void).cxx_destruct;
@end
