@interface EdgeComputingConfigBreaker : MMObject
{
    NSMutableDictionary * scriptConfigRecorder; // +0x8
    NSMutableDictionary * sqlConfigRecorder; // +0x10
    NSMutableDictionary * scriptConfigRecorderBackup; // +0x18
    NSMutableDictionary * sqlConfigRecorderBackup; // +0x20
}
- (id)init;
- (void)recordScriptConfig:(id)arg1;
- (void)removeScriptConfig:(id)arg1;
- (BOOL)isErrorScriptConfig:(id)arg1;
- (void)recordSqlConfig:(id)arg1;
- (void)removeSqlConfig:(id)arg1;
- (void)initRecorder;
- (void)saveRecorder;
- (void).cxx_destruct;
@end
