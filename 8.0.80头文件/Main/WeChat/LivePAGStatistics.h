@interface LivePAGStatistics : NSObject
{
    MMLiveTaskId * _taskId; // +0x8
    NSMutableDictionary * _executeRecordDict; // +0x10
    NSMutableDictionary * _averFrameTimeRecordDict; // +0x18
}
- (id)initWithTaskId:(id)arg1;
- (void)initDefaultDatas;
- (void)onLivePAGExecute:(long long)arg1;
- (void)onLivePAG:(long long)arg1 averFrameTimeStat:(double)arg2;
- (void)onExitLive;
- (void)recordLivePAGExecute:(long long)arg1;
- (void)recordLivePAG:(long long)arg1 averFrameTime:(double)arg2;
- (int)getLivePAGExecuteCnt:(id)arg1;
- (double)getLivePAGAverFrameTime:(long long)arg1;
- (double)getLivePAGAverFrameTimeMax:(long long)arg1;
- (id)getLibPAGBusinessList;
- (id)getRfxPAGBusinessList;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)executeRecordDict;
- (void)setExecuteRecordDict:(id)arg1;
- (id)averFrameTimeRecordDict;
- (void)setAverFrameTimeRecordDict:(id)arg1;
- (void).cxx_destruct;
@end
