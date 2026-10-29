@interface NewLifeReporter : NSObject <IDataReportCgiCallback>
{
    NSMutableDictionary * _firstExpFeedCache; // +0x8
    NSMutableDictionary * _sdkReportParams; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)onInit;
- (void)onClear;
- (void)handleCgiReportParams:(id)arg1 andItemId:(id)arg2 andEventId:(id)arg3 andResultParams:(id)arg4;
- (void)handleFlutterParams:(id)arg1 andEventId:(id)arg2 andResultParams:(id)arg3;
- (void)reportNewLifeCgiEvent:(id)arg1 target:(id)arg2 params:(id)arg3 isBatchReport:(BOOL)arg4;
- (void)setNewLifeRedDotParams:(id)arg1 forEventId:(id)arg2;
- (id)checkToReturnCollectMapItem:(id)arg1 andEventId:(id)arg2;
- (void)setExpFeedIdWhenScrollEnd:(id)arg1 andScene:(unsigned int)arg2;
- (id)getFirstExpFeedIdByScene:(unsigned int)arg1;
- (void)setNewLifeSdkReportParams:(id)arg1 forKey:(id)arg2;
- (void)removeNewLifeSdkReportParamsforKey:(id)arg1;
- (void)resetNewLifeSdkReportParams:(id)arg1 forEventId:(id)arg2;
- (void)setFlutterReportSDKInfo:(id)arg1;
- (id)firstExpFeedCache;
- (void)setFirstExpFeedCache:(id)arg1;
- (id)sdkReportParams;
- (void)setSdkReportParams:(id)arg1;
- (void).cxx_destruct;
@end

