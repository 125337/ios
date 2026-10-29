@interface _TtC12WCMagicBrush19MBPkgManagementBase : NSObject <_TtP12WCMagicBrush20IMBPkgManagementBase_>
{
     fs; // +0x8
     _instanceName; // +0x10
     _lowerBizName; // +0x18
     wxaPkgPath; // +0x20
}
- (void)provideMainScript:(id /* block */)arg1;
- (id)init;
- (id)initWithInstanceName:(id)arg1;
- (id)provideFileSystem;
- (id)provideAppConfig;
- (id)getVersionInfo;
- (id)getPkgInfo;
- (void)destory;
- (void).cxx_destruct;
@end
