@interface _TtC6WeChat21MagicPkgConfigService : MMUserService <MMServiceProtocol>
- (id)getPkgConfigWithBizName:(id)arg1;
- (id)getVersionFromAppConfigWithBizName:(id)arg1;
- (id)getAppConfigWithInstanceVersionWithBizNameOrInstanceName:(id)arg1 version:(int)arg2;
- (id)getVersionFromAppConfigWithInstanceVersionWithBizNameOrInstanceName:(id)arg1 version:(int)arg2;
- (id)saveDebugPkgAppConfigWithAppId:(id)arg1;
- (void)removeDebugKvWithBizName:(id)arg1;
- (id)saveUdrPkgAppConfigAndVersionWithLowerBizName:(id)arg1 resource:(id)arg2;
- (id)saveBootPkgAppConfigAndVersionWithLowerBizName:(id)arg1 version:(int)arg2;
- (id)init;
@end

