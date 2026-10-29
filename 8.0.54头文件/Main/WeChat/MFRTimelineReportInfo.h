@interface MFRTimelineReportInfo : NSObject
{
    BOOL _isFirstEnteringTimeline; // +0x8
    MFRItemReportInfo * _currentItemReportInfo; // +0x10
    NSMutableArray * _exposureItemReportInfos; // +0x18
    NSMutableArray * _unexposureItemReportInfos; // +0x20
    unsigned long long _finderRecommendationDisplayedCount; // +0x28
    unsigned long long _finderRecommendationClickedCount; // +0x30
    NSString * _timelineSessionID; // +0x38
    WCDataItem * _badgeDataItem; // +0x40
    WCDataItem * _lastDisplayedDataItem; // +0x48
    unsigned long long _missReadDisplayedCount; // +0x50
    unsigned long long _missReadClickedCount; // +0x58
    unsigned long long _currentSessionIndex; // +0x60
}
- (id)init;
- (void)beginNewSession:(BOOL)arg1;
- (void)endLastSession;
- (id)generateUnexposureInfo;
- (id)currentItemReportInfo;
- (void)setCurrentItemReportInfo:(id)arg1;
- (id)exposureItemReportInfos;
- (id)unexposureItemReportInfos;
- (unsigned long long)finderRecommendationDisplayedCount;
- (void)setFinderRecommendationDisplayedCount:(unsigned long long)arg1;
- (unsigned long long)finderRecommendationClickedCount;
- (void)setFinderRecommendationClickedCount:(unsigned long long)arg1;
- (BOOL)isFirstEnteringTimeline;
- (void)setIsFirstEnteringTimeline:(BOOL)arg1;
- (id)timelineSessionID;
- (void)setTimelineSessionID:(id)arg1;
- (id)badgeDataItem;
- (void)setBadgeDataItem:(id)arg1;
- (id)lastDisplayedDataItem;
- (void)setLastDisplayedDataItem:(id)arg1;
- (unsigned long long)missReadDisplayedCount;
- (void)setMissReadDisplayedCount:(unsigned long long)arg1;
- (unsigned long long)missReadClickedCount;
- (void)setMissReadClickedCount:(unsigned long long)arg1;
- (unsigned long long)currentSessionIndex;
- (void).cxx_destruct;
@end

