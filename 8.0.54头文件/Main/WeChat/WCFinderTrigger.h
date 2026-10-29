@interface WCFinderTrigger : MMObject <IExptServiceExt, IEdgeComputingDataSourceExt>
{
    DiscoverExposeEdgeArgs * edgeArgs; // +0x8
    CalendarStatisticsArgs * finderCalendarArgs; // +0x10
}
- (id)init;
- (void)onSendKV:(id)arg1 withReportID:(unsigned int)arg2;
- (void)enterFindFriendEntryController:(id)arg1 andStayTimeMs:(unsigned long long)arg2;
- (void)quitFindFriendEntryController:(id)arg1 andNext:(id)arg2 andStayTimeMs:(unsigned long long)arg3;
- (id)checkToReturnAiFinderInfo;
- (void)finder19943:(id)arg1;
- (void).cxx_destruct;
@end

