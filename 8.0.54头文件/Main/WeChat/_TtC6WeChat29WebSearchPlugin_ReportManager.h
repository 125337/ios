@interface _TtC6WeChat29WebSearchPlugin_ReportManager : WebSearchPluginBase
{
     $__lazy_storage_$_featureReporter; // +0x8
     $__lazy_storage_$_stayTimeReporter; // +0x78
     $__lazy_storage_$_menuActionReporter; // +0xf8
}
- (void)updateWithSearchId:(id)arg1 requestId:(id)arg2;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (void)reportClickWithFeatureItem:(unsigned long long)arg1;
- (void)reportExposedWithFeatureItemsStr:(id)arg1;
- (void)reportExitWithType:(unsigned long long)arg1;
- (void)reportMenuActionWithType:(long long)arg1;
- (id)init;
- (void).cxx_destruct;
@end

