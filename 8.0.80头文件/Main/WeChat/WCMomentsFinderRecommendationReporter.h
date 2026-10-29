@interface WCMomentsFinderRecommendationReporter : MMUserService <MMServiceProtocol>
{
    MFRTimelineReportInfo * _timelineReportInfo; // +0x8
}
- (void)beginNewTimelineReportSession;
- (void)endLastTimelineReportSession;
- (void)didBeginNewSession:(BOOL)arg1;
- (void)updateCurrentItemReportInfoWithRecommendationInfo:(id)arg1;
- (void)updateCurrentItemReportInfoWithUnexposureReason:(long long)arg1 isFinalReason:(BOOL)arg2;
- (void)didClickFinderRecommendationButton:(int)arg1;
- (void)willEnterTimelineViewController:(id)arg1 cachedRecommendationInfo:(id)arg2;
- (void)didLeaveTimelineViewController:(id)arg1;
- (void)timelineViewControllerWillDisplayDataItem:(id)arg1;
- (void)didClickMissReadButton;
- (id)timelineReportInfo;
- (void).cxx_destruct;
@end
