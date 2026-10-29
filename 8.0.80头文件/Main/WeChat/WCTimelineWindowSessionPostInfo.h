@interface WCTimelineWindowSessionPostInfo : NSObject
{
    NSString * _infoID; // +0x8
    WCMomentsPostReportSession * _postSession; // +0x10
}
- (id)init;
- (id)infoID;
- (void)setInfoID:(id)arg1;
- (id)postSession;
- (void)setPostSession:(id)arg1;
- (void).cxx_destruct;
@end
