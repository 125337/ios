@interface WCFinderFollowTabDetailVCReporter : NSObject
{
    int _commentScene; // +0x8
    NSString * _originExtraInfo; // +0x10
    NSString * _firstFeedId; // +0x18
    NSString * _firstTraceId; // +0x20
}
- (void)setupFirstFeedID:(id)arg1;
- (void)startupReportInfo;
- (void)endReportInfo;
- (id)originExtraInfo;
- (void)setOriginExtraInfo:(id)arg1;
- (id)firstFeedId;
- (void)setFirstFeedId:(id)arg1;
- (id)firstTraceId;
- (void)setFirstTraceId:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (void).cxx_destruct;
@end
