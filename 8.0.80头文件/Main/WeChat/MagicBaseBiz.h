@interface MagicBaseBiz : WeMagicMBDynamicBizContext <IMBLifecycleListener>
{
     rawEnvId; // +0x18
     jsAdapter; // +0x20
     vConsoleController; // +0x28
}
- (unsigned long long)envId;
- (void)initWithEnvId:(unsigned long long)arg1 jsAdapter:(id)arg2 vConsoleController:(id)arg3;
- (void)testEvaluateScript:(id)arg1 callback:(id /* block */)arg2;
- (void)loadDataFromUrl:(id)arg1 callback:(id /* block */)arg2;
- (void)saveWxFileWithPath:(id)arg1 data:(id)arg2 callback:(id /* block */)arg3;
- (void)physicalFilePath:(id)arg1 callback:(id /* block */)arg2;
- (void)onDestroy;
- (id)initWithBizName:(id)arg1;
- (void).cxx_destruct;
@end
