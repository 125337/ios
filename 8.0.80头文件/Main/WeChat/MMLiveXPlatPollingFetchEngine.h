@interface MMLiveXPlatPollingFetchEngine : NSObject <MMLivePollingFetchEngineInternal>
{
    id /* block */ _requestModelFactory; // +0x8
    id <LiveURLivePollingEngine> _core; // +0x10
    MMLiveXPlatPollingFetchArgumentsProvider * _argumentsProvider; // +0x18
    MMLiveXPlatPollingFetchConfigurationProvider * _configurationProvider; // +0x20
    MMLiveXPlatPollingFetchEngineObserver * _observer; // +0x28
}
- (id)initWithTaskId:(id)arg1 requestModelFactory:(id /* block */)arg2;
- (void)addTasksIfNotExistsWithCmdIdList:(id)arg1;
- (void)addTasksIfNotExistsWithCmdIdList:(id)arg1 waitingInfo:(id)arg2;
- (void)executeTasksByCmdIdList:(id)arg1;
- (void)executeTasksByExecuteModels:(id)arg1;
- (void)removeAllTasks;
- (void)removeTasksByCmdIdList:(id)arg1;
- (void)stop;
- (id /* block */)requestModelFactory;
- (void)setRequestModelFactory:(id /* block */)arg1;
- (id)core;
- (void)setCore:(id)arg1;
- (id)argumentsProvider;
- (void)setArgumentsProvider:(id)arg1;
- (id)configurationProvider;
- (void)setConfigurationProvider:(id)arg1;
- (id)observer;
- (void)setObserver:(id)arg1;
- (void).cxx_destruct;
@end
