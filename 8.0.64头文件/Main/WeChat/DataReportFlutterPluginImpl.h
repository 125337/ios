@interface DataReportFlutterPluginImpl : NSObject <MMUIViewControllerExt, DataReportPageEventExt, MMFlutterPlugin, FlutterDataReportHost>
{
    FlutterDataReportFlutter * m_flutterAPI; // +0x8
    NSMutableDictionary * m_flutterSessionIdMap; // +0x10
}
+ (void)reportCustomCgiEventTime:(id)arg1 eventId:(id)arg2 params:(id)arg3 bizId:(id)arg4 isBatchReport:(id)arg5 curPageInfo:(id)arg6 sourcePageInfo:(id)arg7;
+ (id)handleJParams:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)nativeAppIn;
- (void)nativeAppOut;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)MMUIViewControllerDidDisappear:(id)arg1;
- (void)onPageEventAppear:(id)arg1;
- (void)onPageEventDisappear:(id)arg1;
- (void)sessionInPageHash:(long long)arg1 pageId:(long long)arg2 pageName:(id)arg3 params:(id)arg4 error:(id *)arg5;
- (void)sessionOutPageHash:(long long)arg1 pageId:(long long)arg2 pageName:(id)arg3 params:(id)arg4 error:(id *)arg5;
- (void)pageInPageHash:(long long)arg1 pageId:(long long)arg2 pageName:(id)arg3 params:(id)arg4 error:(id *)arg5;
- (void)pageOutPageHash:(long long)arg1 pageId:(long long)arg2 pageName:(id)arg3 params:(id)arg4 error:(id *)arg5;
- (void)viewClickViewId:(id)arg1 params:(id)arg2 curPageInfo:(id)arg3 sourcePageInfo:(id)arg4 error:(id *)arg5;
- (void)viewExpViewId:(id)arg1 params:(id)arg2 curPageInfo:(id)arg3 sourcePageInfo:(id)arg4 error:(id *)arg5;
- (void)viewUnexpViewId:(id)arg1 params:(id)arg2 curPageInfo:(id)arg3 sourcePageInfo:(id)arg4 error:(id *)arg5;
- (void)reportCustomCgiEventTime:(long long)arg1 eventId:(id)arg2 params:(id)arg3 bizId:(long long)arg4 isBatchReport:(BOOL)arg5 curPageInfo:(id)arg6 sourcePageInfo:(id)arg7 error:(id *)arg8;
- (void)reportCustomEventTime:(long long)arg1 eventId:(id)arg2 params:(id)arg3 routeRule:(long long)arg4 curPageInfo:(id)arg5 sourcePageInfo:(id)arg6 error:(id *)arg7;
- (void)reportStandardPageEventTime:(long long)arg1 eventId:(id)arg2 pageHash:(long long)arg3 pageId:(long long)arg4 pageName:(id)arg5 params:(id)arg6 routeRules:(id)arg7 sourcePageInfo:(id)arg8 error:(id *)arg9;
- (void)reportStandardViewEventTime:(long long)arg1 eventId:(id)arg2 viewId:(id)arg3 params:(id)arg4 routeRules:(id)arg5 curPageInfo:(id)arg6 sourcePageInfo:(id)arg7 error:(id *)arg8;
- (void)reportAllOutEventTime:(long long)arg1 pageId:(long long)arg2 eventId:(id)arg3 pageName:(id)arg4 params:(id)arg5 sourcePageInfo:(id)arg6 error:(id *)arg7;
- (BOOL)isFlutterPage:(id)arg1;
- (void).cxx_destruct;
@end
