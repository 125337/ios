@interface MMWebViewPlugin_BrandLive : MMWebViewPluginBase
{
    BOOL _hasLiveTitleViewReport; // +0x8
    BOOL _hasProfileTitleViewLiveReport; // +0x9
    NSMutableDictionary * _customBrandLiveDict; // +0x10
}
- (id)init;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)configureCustomBrandLiveModel:(id)arg1;
- (void)updateAndFetchBrandLiveInfo;
- (void)updateLiveStatus:(BOOL)arg1;
- (void)tryfetchBrandLiveInfo;
- (void)pullBizLivingInfo;
- (BOOL)isCurrentPageBrandLiving;
- (void)openFinderLiveWithScene:(unsigned int)arg1;
- (id)getCustomModelForCurrentPage;
- (id)getBrandUserNameForCurrentPage;
- (void)onBrandLivingStatusChange:(id)arg1 isLiving:(BOOL)arg2 finderFeedExportId:(id)arg3;
- (void)reportProfileTitleViewLiveShow;
- (void)reportLiveTitleViewShow;
- (void)reportLiveTopBarAction:(BOOL)arg1 fromProfileTopBar:(BOOL)arg2;
- (BOOL)hasLiveTitleViewReport;
- (void)setHasLiveTitleViewReport:(BOOL)arg1;
- (BOOL)hasProfileTitleViewLiveReport;
- (void)setHasProfileTitleViewLiveReport:(BOOL)arg1;
- (id)customBrandLiveDict;
- (void)setCustomBrandLiveDict:(id)arg1;
- (void).cxx_destruct;
@end
