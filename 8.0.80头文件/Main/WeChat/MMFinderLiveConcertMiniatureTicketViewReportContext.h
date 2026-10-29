@interface MMFinderLiveConcertMiniatureTicketViewReportContext : NSObject
{
    NSString * _activityId; // +0x8
    WCFinderDataItem * _dataItem; // +0x10
    NSString * _commentScene; // +0x18
}
- (id)initWithActivityId:(id)arg1 commentScene:(id)arg2 finderDataItem:(id)arg3;
- (void)reportGetTicketButtonExposure;
- (void)reportCloseButtonExposure;
- (void)reportGetTicketButtonInvocation;
- (void)reportCloseButtonInvocation;
- (id)liveId;
- (id)activityId;
- (void)setActivityId:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)commentScene;
- (void)setCommentScene:(id)arg1;
- (void).cxx_destruct;
@end
