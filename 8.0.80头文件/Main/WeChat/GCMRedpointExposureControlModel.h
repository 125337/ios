@interface GCMRedpointExposureControlModel : NSObject
{
    BOOL _blockLog; // +0x8
    NSMutableDictionary * _controlInfoDict; // +0x10
    unsigned long long _logicType; // +0x18
}
- (id)initWithRedPointLogicType:(unsigned long long)arg1;
- (id)logicControlInfoKey;
- (void)updateLastRedPointDisppearTime;
- (void)saveRedPointTimeControlInfoDict;
- (BOOL)checkCanReExposureWithMaxCnt:(int)arg1 minIntervalClickRedPoint:(double)arg2;
- (BOOL)checkCanReExposureWithMaxCnt:(int)arg1 minIntervalClickRedPoint:(double)arg2 minIntervalBeforeLastShow:(double)arg3 lastExitTimeLimit:(unsigned int)arg4;
- (BOOL)checkIsOverLastShowInterval:(double)arg1;
- (BOOL)checkIsOverSameDayMaxCntLimit:(unsigned long long)arg1;
- (BOOL)checkIsOverLastExitTimeLimit:(unsigned int)arg1;
- (BOOL)checkOverMinIntervalClickRedPoint:(double)arg1;
- (void)logWithFormat:(id)arg1;
- (BOOL)checkCanReExposure;
- (BOOL)checkIsSameDay:(id)arg1 nowDate:(id)arg2;
- (void)didShowNewRedPoint;
- (id)controlInfoDict;
- (void)setControlInfoDict:(id)arg1;
- (unsigned long long)logicType;
- (void)setLogicType:(unsigned long long)arg1;
- (BOOL)blockLog;
- (void)setBlockLog:(BOOL)arg1;
- (void).cxx_destruct;
@end
