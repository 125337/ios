@interface _TtC6WeChat22MagicSclServiceManager : MMUserService <MMServiceProtocol>
{
     sclService; // +0x8
     sclDelegate; // +0x10
}
- (id)getSClPublicService;
- (id)createSCLPublicService;
- (void)registerSclDelegateWithBizName:(id)arg1 delegate:(id)arg2;
- (void)unregisterSclDelegateWithBizName:(id)arg1;
- (id)getSclDelegateWithBizName:(id)arg1;
- (id)getPkgVersion;
- (id)getPkgInfo;
- (id)init;
- (void).cxx_destruct;
@end
