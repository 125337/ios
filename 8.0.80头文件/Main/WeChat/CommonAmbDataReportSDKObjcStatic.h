@interface CommonAmbDataReportSDKObjcStatic : NSObject
+ (void)reportStandardPageEvent:(unsigned long long)arg1 eventId:(id)arg2 pageId:(unsigned long long)arg3 pageName:(id)arg4 paramsKeys:(id)arg5 paramsValues:(id)arg6 routeType:(unsigned int)arg7 routeRule:(unsigned int)arg8 isBatchReport:(BOOL)arg9 sourcePageId:(unsigned int)arg10 sourcePageName:(id)arg11 sourcePageParamsKeys:(id)arg12 sourcePageParamsValues:(id)arg13;
+ (void)reportStandardViewEvent:(unsigned long long)arg1 eventId:(id)arg2 viewId:(id)arg3 paramsKeys:(id)arg4 paramsValues:(id)arg5 routeType:(unsigned int)arg6 routeRule:(unsigned int)arg7 isBatchReport:(BOOL)arg8 curPageId:(unsigned int)arg9 curPageName:(id)arg10 curPageParamsKeys:(id)arg11 curPageParamsValues:(id)arg12 sourcePageId:(unsigned int)arg13 sourcePageName:(id)arg14 sourcePageParamsKeys:(id)arg15 sourcePageParamsValues:(id)arg16;
+ (void)reportStandardPageEvents:(id)arg1;
+ (void)reportStandardViewEvents:(id)arg1;
+ (void)reportCustomEvents:(id)arg1;
+ (id)changeParamInfos:(id)arg1;
+ (id)handleJParamsValue:(id)arg1;
@end
