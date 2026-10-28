@interface TingDynamicConfigurationService : IUdrBizFeature
- (void)onServiceInit;
- (id)getProjectId;
- (id)getParameter;
- (void)checkUpdate;
- (id)getConfigurationResources;
- (id)jsonFormatConfiguration;
@end
