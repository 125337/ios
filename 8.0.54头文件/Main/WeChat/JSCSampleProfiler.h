@interface JSCSampleProfiler : NSObject
{
    NSMutableDictionary * _lastProfileLogs; // +0x8
    NSMutableDictionary * _currProfileLogs; // +0x10
    NSMutableDictionary * _timers; // +0x18
    NSMutableArray * _contexts; // +0x20
}
+ (id)sharedInstance;
- (id)init;
- (void)startSampleProfile:(id)arg1;
- (void)stopSampleProfile:(id)arg1;
- (void)captureSamplesNow:(id /* block */)arg1;
- (void)jscScriptProfilerStartTracking:(id)arg1;
- (void)jscScriptProfilerStopTracking:(id)arg1;
- (void)updateSampleData:(id)arg1 contextName:(id)arg2;
- (id)contextName:(id)arg1;
- (void).cxx_destruct;
@end

