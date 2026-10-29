@interface EdgeComputingScriptService : MMObject
{
    EdgeComputingJSScriptEngine * scriptEngine; // +0x8
}
- (id)init;
- (id)executeScript:(id)arg1 withDatas:(id)arg2 withPeriodStartTime:(unsigned long long)arg3 withPeriodEndTime:(unsigned long long)arg4;
- (id)getScriptArgs:(unsigned int)arg1 withClientVersion:(unsigned int)arg2 withPeriodStartTime:(unsigned long long)arg3 withPeriodEndTime:(unsigned long long)arg4;
- (void)clear;
- (id)executePureScript:(id)arg1 andData:(id)arg2;
- (void).cxx_destruct;
@end
