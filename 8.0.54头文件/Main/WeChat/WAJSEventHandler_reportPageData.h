@interface WAJSEventHandler_reportPageData : WAJSEventHandler_BaseEvent <IReportMiniProgramDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)onReportSuccess:(long long)arg1;
- (void)onReportFail:(id)arg1;
@end

