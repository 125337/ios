@interface BSTimelineFlutterResidentPlugin : AutoSetupBrandServiceResidentApi <BrandServiceResidentApi>
- (id)init;
- (void)getContactInfoUserName:(id)arg1 completion:(id /* block */)arg2;
- (id)getContactByUsername:(id)arg1;
- (id)genContactInfoFromContact:(id)arg1;
- (id)getTemplateMsgScopeItemUsername:(id)arg1 scopeId:(id)arg2 error:(id *)arg3;
- (id)getTemplateMsgScopeUsername:(id)arg1 error:(id *)arg2;
- (id)checkAndShowPushPermissionTipsDialogWithError:(id *)arg1;
- (id)getStrategyConfigWithError:(id *)arg1;
@end
