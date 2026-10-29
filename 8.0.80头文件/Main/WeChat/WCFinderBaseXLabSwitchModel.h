@interface WCFinderBaseXLabSwitchModel : NSObject
{
    BOOL _forbidReport; // +0x8
    WCFinderRedDotThreadSafeDictionary * _stableConfigCache; // +0x10
}
- (id)init;
- (void)_updateXLabConfig;
- (void)updateXLabConfigOnce;
- (id)bootHitReportKeys;
- (id)reportTimestampKey;
- (unsigned int)reportLogID;
- (BOOL)_getBoolXlabKey:(id)arg1 defaultValue:(BOOL)arg2 getterReport:(BOOL)arg3;
- (BOOL)_getBoolXlabKey:(id)arg1 defaultValue:(BOOL)arg2 debugValue:(BOOL)arg3 useDebug:(BOOL)arg4 getterReport:(BOOL)arg5;
- (long long)_getIntXlabKey:(id)arg1 defaultValue:(long long)arg2 getterReport:(BOOL)arg3;
- (long long)_getIntXlabKey:(id)arg1 defaultValue:(long long)arg2 debugValue:(long long)arg3 useDebug:(BOOL)arg4 getterReport:(BOOL)arg5;
- (double)_getFloatXlabKey:(id)arg1 defaultValue:(double)arg2 getterReport:(BOOL)arg3;
- (double)_getFloatXlabKey:(id)arg1 defaultValue:(double)arg2 debugValue:(double)arg3 useDebug:(BOOL)arg4 getterReport:(BOOL)arg5;
- (id)_getStringXlabKey:(id)arg1 defaultValue:(id)arg2 getterReport:(BOOL)arg3;
- (BOOL)_getStableBoolXlabKey:(id)arg1 defaultValue:(BOOL)arg2 getterReport:(BOOL)arg3;
- (BOOL)_getStableBoolXlabKey:(id)arg1 defaultValue:(BOOL)arg2 debugValue:(BOOL)arg3 useDebug:(BOOL)arg4 getterReport:(BOOL)arg5;
- (long long)_getStableIntXlabKey:(id)arg1 defaultValue:(long long)arg2 getterReport:(BOOL)arg3;
- (long long)_getStableIntXlabKey:(id)arg1 defaultValue:(long long)arg2 debugValue:(long long)arg3 useDebug:(BOOL)arg4 getterReport:(BOOL)arg5;
- (double)_getStableFloatXlabKey:(id)arg1 defaultValue:(double)arg2 getterReport:(BOOL)arg3;
- (double)_getStableFloatXlabKey:(id)arg1 defaultValue:(double)arg2 debugValue:(double)arg3 useDebug:(BOOL)arg4 getterReport:(BOOL)arg5;
- (void)clearStableConfigCache;
- (void)updateXLabConfig;
- (void)reportFinderSwitchType;
- (void)bootHitReport;
- (void)reportExptKey:(id)arg1;
- (BOOL)targetXlabKeyHitExpt:(id)arg1;
- (void).cxx_destruct;
@end
