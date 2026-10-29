@interface WCFinderFeedDetailVCReporter : NSObject
{
    int _commentScene; // +0x8
    NSString * _originExtraInfo; // +0x10
    NSString * _feedID; // +0x18
    NSString * _traceID; // +0x20
}
- (void)setupWithFeedID:(id)arg1 commentScene:(int)arg2;
- (void)startupReportInfo;
- (void)endReportInfo;
- (id)originExtraInfo;
- (void)setOriginExtraInfo:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)traceID;
- (void)setTraceID:(id)arg1;
- (void).cxx_destruct;
@end
