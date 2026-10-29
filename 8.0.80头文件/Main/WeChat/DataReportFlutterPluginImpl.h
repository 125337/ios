@interface DataReportFlutterPluginImpl : NSObject <MMUIViewControllerExt, DataReportPageEventExt, MMFlutterPlugin, FlutterDataReportHost>
{
    FlutterDataReportFlutter * m_flutterAPI; // +0x8
    NSMutableDictionary * m_flutterSessionIdMap; // +0x10
}
+ (void)reportCustomCgiEventTime:(id)arg1 eventId:(id)arg2 params:(id)arg3 bizId:(id)arg4 isBatchReport:(id)arg5 curPageInfo:(id)arg6 sourcePageInfo:(id)arg7;
+ (id)handleJParams:(id)arg1;
+ (BOOL)isPageEvent:(id)arg1;
- (BOOL)isDebug;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)nativeAppIn;
- (void)nativeAppOut;
- (void)onAmoebaDebugViewSwitchChanged:(id)arg1;
- (void)onAmoebaPrintDebugLogSwitchChanged:(id)arg1;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)MMUIViewControllerDidDisappear:(id)arg1;
- (void)onPageEventAppear:(id)arg1;
- (void)onPageEventDisappear:(id)arg1;
- (void)reportCustomCgiEventTime:(long long)arg1 eventId:(id)arg2 params:(id)arg3 bizId:(long long)arg4 isBatchReport:(BOOL)arg5 curPageInfo:(id)arg6 sourcePageInfo:(id)arg7 error:(id *)arg8;
- (void)reportCustomEventTime:(long long)arg1 eventId:(id)arg2 params:(id)arg3 routeRule:(long long)arg4 curPageInfo:(id)arg5 sourcePageInfo:(id)arg6 error:(id *)arg7;
- (void)reportStandardPageEventTime:(long long)arg1 eventId:(id)arg2 pageHash:(long long)arg3 pageId:(long long)arg4 pageName:(id)arg5 params:(id)arg6 routeRules:(id)arg7 sourcePageInfo:(id)arg8 error:(id *)arg9;
- (void)reportStandardViewEventTime:(long long)arg1 eventId:(id)arg2 viewId:(id)arg3 params:(id)arg4 routeRules:(id)arg5 curPageInfo:(id)arg6 sourcePageInfo:(id)arg7 error:(id *)arg8;
- (void)reportAllOutEventTime:(long long)arg1 pageId:(long long)arg2 eventId:(id)arg3 pageName:(id)arg4 params:(id)arg5 sourcePageInfo:(id)arg6 error:(id *)arg7;
- (id)getParentViewController:(id)arg1;
- (void).cxx_destruct;
@end
