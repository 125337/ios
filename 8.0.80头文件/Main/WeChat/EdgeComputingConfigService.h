@interface EdgeComputingConfigService : MMObject <IExptServiceExt>
{
    NSMutableDictionary * scriptConfigModels; // +0x8
    NSMutableDictionary * sqlConfigModels; // +0x10
    EdgeComputingConfigParser * configParser; // +0x18
}
- (void)onInit;
- (void)onClearData;
- (void)initConfig;
- (id)getScriptConfigModels;
- (id)getSqlConfigModels;
- (void)removeSqlConfigModel:(id)arg1;
- (void)onNewEdgeComputingScriptConfigUpdate:(unsigned int)arg1 andExptItem:(id)arg2;
- (void)onNewEdgeComputingScriptConfigDelete:(unsigned int)arg1;
- (void)onNewEdgeComputingSqlConfigUpdate:(unsigned int)arg1 andExptItem:(id)arg2;
- (void)onNewEdgeComputingSqlConfigDelete:(unsigned int)arg1;
- (void)onSessionEdgeComputingScriptConfigChange:(id)arg1 isDel:(BOOL)arg2 andSessionPageId:(unsigned int)arg3;
- (void)onSessionEdgeComputingSqlConfigChange:(id)arg1 isDel:(BOOL)arg2 andSessionPageId:(unsigned int)arg3;
- (void)tryToDownloadScript;
- (void).cxx_destruct;
@end
