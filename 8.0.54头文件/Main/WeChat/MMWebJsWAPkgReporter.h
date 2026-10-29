@interface MMWebJsWAPkgReporter : NSObject
+ (void)reportReadPkg:(id)arg1 version:(long long)arg2 pkgType:(unsigned int)arg3;
+ (void)reportReadPkg:(id)arg1 numberVersion:(long long)arg2 pkgType:(unsigned int)arg3 strVersion:(id)arg4;
+ (void)reportTrigerDownloadPkg:(id)arg1;
+ (void)reportDownloadCallback:(id)arg1 numberVersion:(long long)arg2 strVersion:(id)arg3 ret:(unsigned int)arg4;
+ (void)reportCommenError:(id)arg1 ret:(unsigned int)arg2;
@end

