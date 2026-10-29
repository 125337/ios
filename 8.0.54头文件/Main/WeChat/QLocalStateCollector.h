@interface QLocalStateCollector : NSObject
{
    QConfigManager * _configer; // +0x8
    QLocalErrorReporter * _reporter; // +0x10
    QConfigPreference * _configPreference; // +0x18
}
- (id)initWithConfigPreference:(id)arg1;
- (void)sendIndoorLocalLogWithMapState:(id)arg1 completion:(id /* block */)arg2;
- (id)configer;
- (void)setConfiger:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)configPreference;
- (void)setConfigPreference:(id)arg1;
- (void).cxx_destruct;
@end

