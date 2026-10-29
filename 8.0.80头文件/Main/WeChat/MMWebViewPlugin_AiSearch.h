@interface MMWebViewPlugin_AiSearch : MMWebViewPluginBase <PBMessageObserverDelegate>
{
    id /* block */ _completion; // +0x8
    MMWebViewAISearchConfigData * _aiSearchConfigData; // +0x10
}
+ (unsigned long long)menuTypeForConfigType:(unsigned long long)arg1;
+ (BOOL)shouldUrlUseMPConfig:(id)arg1;
- (id)init;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)requestAiSearchConfigWithType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)mainthread_requestAiSearchConfigWithType:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleAISummarySearchConfigResponse:(id)arg1;
- (void)dealloc;
- (id)configForType:(unsigned long long)arg1;
- (id)configForType:(unsigned long long)arg1 contextId:(id)arg2;
- (BOOL)isConfigTypeRequesting:(unsigned long long)arg1;
- (void)setConfigTypeRequestingState:(BOOL)arg1 configType:(unsigned long long)arg2;
- (id)configPathForType:(unsigned long long)arg1;
- (void)saveConfig;
- (void)saveConfigForType:(unsigned long long)arg1;
- (void)loadConfig;
- (void)loadConfigForType:(unsigned long long)arg1;
- (id)aiSearchConfigData;
- (void)setAiSearchConfigData:(id)arg1;
- (void).cxx_destruct;
@end
