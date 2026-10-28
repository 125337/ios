@interface WCFinderFullShareListTemplatePlugin : NSObject
{
    WCFInderJSAPIFeedReadReporter * _readReporter; // +0x8
    WCFinderJSAPIFeedListBehavior * _behavior; // +0x10
    NSString * _lastReportFocusTid; // +0x18
}
- (id)initWithBehavior:(id)arg1;
- (void)notifyFocusFeedChange:(id)arg1;
- (void)notifyDeletedFeed:(id)arg1;
- (void)notifyNegativeFeedback:(id)arg1;
- (id)readReporter;
- (id)readReporterWithoutCreate;
- (void)onShareListViewClose;
- (void)setReadReporter:(id)arg1;
- (id)behavior;
- (void)setBehavior:(id)arg1;
- (id)lastReportFocusTid;
- (void)setLastReportFocusTid:(id)arg1;
- (void).cxx_destruct;
@end
