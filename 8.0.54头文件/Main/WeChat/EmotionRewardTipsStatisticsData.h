@interface EmotionRewardTipsStatisticsData : MMObject <PBCoding>
{
    unsigned int _lastPidContiousSendTimes; // +0x8
    NSString * _lastSendPid; // +0x10
    NSMutableDictionary * _sendedPidCountWrapDic; // +0x18
}
+ (void)PBArrayAdd_lastSendPid;
+ (void)PBArrayAdd_lastPidContiousSendTimes;
+ (void)PBArrayAdd_sendedPidCountWrapDic;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)lastSendPid;
- (void)setLastSendPid:(id)arg1;
- (unsigned int)lastPidContiousSendTimes;
- (void)setLastPidContiousSendTimes:(unsigned int)arg1;
- (id)sendedPidCountWrapDic;
- (void)setSendedPidCountWrapDic:(id)arg1;
- (void).cxx_destruct;
@end

