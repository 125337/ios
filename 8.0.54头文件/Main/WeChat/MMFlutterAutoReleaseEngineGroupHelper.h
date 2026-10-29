@interface MMFlutterAutoReleaseEngineGroupHelper : NSObject
{
    MMFlutterEngineGroup * _engineGroup; // +0x8
    long long _interval; // +0x10
    BOOL _isNeedReleaseEngineGroup; // +0x18
    id /* block */ _releaseCallback; // +0x20
}
- (id)initWithEngineGroup:(id)arg1 autoReleaseInterval:(long long)arg2 releaseEngineGroup:(BOOL)arg3 recreateEngineGroup:(BOOL)arg4 releaseCallback:(id /* block */)arg5;
- (void)delayReleaseEngineGroup;
- (void)freeEngineGroupMemory;
- (void)removeDelayReleaseEngineGroup;
- (void)releaseEngineGroup;
- (void)releaseEngineGroupRecreate:(BOOL)arg1;
- (void).cxx_destruct;
@end

