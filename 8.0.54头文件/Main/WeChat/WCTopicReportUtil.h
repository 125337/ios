@interface WCTopicReportUtil : MMUserService <WCFacadeExt, MMServiceProtocol>
{
    WCTopicReportSessionInputItem * _reportSessionInputItem; // +0x8
    NSString * _timelineTopicActionSessionId; // +0x10
}
+ (void)reportTopicSearchVCAction:(long long)arg1 actionSourceType:(long long)arg2 reportItem:(id)arg3;
+ (void)reportTopicSearchVCAction:(long long)arg1 actionSourceType:(long long)arg2 dismissReason:(long long)arg3 reportItem:(id)arg4;
+ (void)reportTopicSearchShareAction:(long long)arg1 resultType:(long long)arg2 query:(id)arg3 reportItem:(id)arg4;
+ (void)reportTopicTagClick:(id)arg1 reportItem:(id)arg2;
+ (void)reportTopicTipClick:(id)arg1;
+ (id)topicReportFeedItemWithDataItem:(id)arg1;
+ (void)reportWCFeedTopicInputAction:(long long)arg1 reportItem:(id)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)resetData;
- (void)reportCurrentSessionInputItem;
- (id)genKvReportItem21174;
- (void)genNewWCTopicActionSessionId;
- (void)genNewWCTopicActionSessionIdWithPrefix:(id)arg1;
- (id)requestWCTopicActionSessionId;
- (void)onSnsNewCommitFinished:(id)arg1 task:(id)arg2;
- (void)onCommentReturn:(id)arg1 comment:(id)arg2;
- (void)onAdvertiseCommentReturn:(id)arg1 comment:(id)arg2;
- (void)reportWCFeedCommentSendFinish:(id)arg1 comment:(id)arg2;
- (id)reportSessionInputItem;
- (id)timelineTopicActionSessionId;
- (void)setTimelineTopicActionSessionId:(id)arg1;
- (void).cxx_destruct;
@end

