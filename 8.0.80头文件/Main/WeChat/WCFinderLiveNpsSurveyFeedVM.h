@interface WCFinderLiveNpsSurveyFeedVM : WCFinderLiveGenericFeedVM
{
    unsigned long long _selectOptionIndex; // +0x8
    MMLiveQcPoll * _qcPollInfo; // +0x10
    MMLiveQcPollActivityFeed * _activityFeed; // +0x18
}
- (id)initWithModel:(id)arg1 scene:(int)arg2 sessionExtraKey:(id)arg3 containerId:(unsigned long long)arg4 ctx:(id)arg5;
- (void)commitActivity;
- (void)resetActivity;
- (id)leadingQuestion;
- (id)customElementReportDict:(unsigned long long)arg1;
- (unsigned long long)selectOptionIndex;
- (void)setSelectOptionIndex:(unsigned long long)arg1;
- (id)qcPollInfo;
- (void)setQcPollInfo:(id)arg1;
- (id)activityFeed;
- (void)setActivityFeed:(id)arg1;
- (void).cxx_destruct;
@end
