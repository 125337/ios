@interface WCPowerConsumeStackCollector : NSObject
{
    id <WCPowerConsumeStackCollectorDelegate> _delegate; // +0x8
    WCStackTracePool * _stackTracePool; // +0x10
}
- (id)initWithCPULimit:(float)arg1;
- (void)dealloc;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)makeConclusion;
- (float)getCPUUsageAndPowerConsumeStack;
- (BOOL)isCPUHighBlock;
- (float)getCPUUsageAndCPUBlockStack;
- (int)getCurrentCpuHighStackNumber;
- (KSStackCursor * *)getCPUStackCursor;
- (float *)getCpuHighThreadValueArray;
- (float)getTotCpuWithCostCpuThreadArray:(id)arg1 andThreadCount:(unsigned int *)arg2;
- (StackInfo)getStackInfoWithThreadCount:(unsigned int)arg1 costCpuThreadList:(unsigned int *)arg2 costCpuValueList:(float *)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)stackTracePool;
- (void)setStackTracePool:(id)arg1;
- (void).cxx_destruct;
@end

