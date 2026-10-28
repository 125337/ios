@interface WCFinderExtStatsReporter : NSObject
{
    int _commentScene; // +0x8
    NSString * _replayEnterScene; // +0x10
    NSMutableArray * _stats; // +0x18
    NSMutableSet * _exposeTidSet; // +0x20
}
+ (void)extStatReportWithType:(int)arg1 dataItem:(id)arg2 commentScene:(int)arg3 templateInfo:(id)arg4;
+ (void)extStatReportWithType:(int)arg1 dataItem:(id)arg2 commentScene:(int)arg3 liveNoticeInfo:(id)arg4;
- (void)addStatReportDataWithType:(int)arg1 dataItem:(id)arg2;
- (void)addStatReportDataWithType:(int)arg1 dataItem:(id)arg2 searchData:(id)arg3 resultList:(id)arg4 fromTab:(id)arg5 toTab:(id)arg6 value:(id)arg7 strValue:(id)arg8;
- (void)addExtStat:(id)arg1;
- (void)addExtStat:(id)arg1 withType:(int)arg2 tid:(id)arg3;
- (id)genExtStatsWithType:(int)arg1 dataItem:(id)arg2;
- (void)reportAndClearExistData;
- (id)stats;
- (id)exposeTidSet;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)replayEnterScene;
- (void)setReplayEnterScene:(id)arg1;
- (void)setStats:(id)arg1;
- (void)setExposeTidSet:(id)arg1;
- (void).cxx_destruct;
@end
