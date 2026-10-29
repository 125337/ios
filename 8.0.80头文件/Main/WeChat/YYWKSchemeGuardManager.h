@interface YYWKSchemeGuardManager : NSObject
{
    BOOL _ignoreGuardCheck; // +0x8
    YYWKSchemeGuardModel * _guardModel; // +0x10
    NSMapTable * _visibleWebViewStateTable; // +0x18
}
+ (id)sharedInstance;
+ (id)getAvailableCapacityControl;
+ (id)getSharedUrlCache;
+ (id)sharedCustomUrlCache;
+ (double)getValueForKey:(id)arg1 defaultValue:(double)arg2;
- (id)init;
- (id)guardModelFromKV;
- (id)modelJsonStr;
- (void)clearGuardModel;
- (BOOL)canUseHttpScheme;
- (void)checkLastCrash;
- (void)checkRequest:(id)arg1;
- (void)markNonGameHostRequest:(id)arg1;
- (void)markEnableCustomSchemeFailed;
- (void)markRegisterSchemeFailed;
- (BOOL)isWebViewGameHost:(id)arg1;
- (BOOL)isSchemeWKGameWebView:(id)arg1;
- (void)handleWebView:(id)arg1 state:(unsigned long long)arg2;
- (id)anyVisibleSchemeGameWkWebView;
- (void)syncAndReport;
- (void)report;
- (void)syncToKV;
- (BOOL)ignoreGuardCheck;
- (void)setIgnoreGuardCheck:(BOOL)arg1;
- (id)guardModel;
- (void)setGuardModel:(id)arg1;
- (id)visibleWebViewStateTable;
- (void)setVisibleWebViewStateTable:(id)arg1;
- (void).cxx_destruct;
@end
