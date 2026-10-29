@interface MMFinderLiveConcertTicketViewControllerReportingContext : NSObject
{
    WCFinderDataItem * _dataItem; // +0x8
    NSString * _commentScene; // +0x10
    NSString * _activityId; // +0x18
    unsigned long long _enterScene; // +0x20
    unsigned long long _enterTimestamp; // +0x28
}
- (id)initWithActivityId:(id)arg1 commentScene:(id)arg2 enterScene:(unsigned long long)arg3 finderDataItem:(id)arg4;
- (void)reportEntering;
- (void)reportLeaving;
- (void)reportShareButtonExposureWithResourceId:(id)arg1 contentType:(unsigned long long)arg2;
- (void)reportAlternativeShareButtonExposureWithResourceId:(id)arg1 contentType:(unsigned long long)arg2;
- (void)reportNextStyleButtonExposureWithResourceId:(id)arg1;
- (void)reportSaveImageButtonExposureWithResourceId:(id)arg1;
- (void)reportExternalNavigationExposureWithResourceId:(id)arg1;
- (void)reportShareButtonInvocationWithResourceId:(id)arg1 contentType:(unsigned long long)arg2;
- (void)reportAlternativeShareButtonInvocationWithResourceId:(id)arg1 contentType:(unsigned long long)arg2;
- (void)reportNextStyleButtonInvocationWithResourceId:(id)arg1;
- (void)reportSaveImageButtonInvocationWithResourceId:(id)arg1;
- (void)reportExternalNavigationInvocationWithResourceId:(id)arg1;
- (void)reportShareToChatSucceeded:(id)arg1 isRecentForward:(BOOL)arg2 resourceId:(id)arg3 contentType:(unsigned long long)arg4;
- (void)reportShareToMomentsSucceededWithResourceId:(id)arg1 contentType:(unsigned long long)arg2;
- (void)reportWithActionType:(unsigned long long)arg1 commentScene:(id)arg2 elementId:(id)arg3 eidUdfKv:(id)arg4;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)commentScene;
- (void)setCommentScene:(id)arg1;
- (id)activityId;
- (void)setActivityId:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (unsigned long long)enterTimestamp;
- (void)setEnterTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
