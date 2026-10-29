@interface WeAvatarResPackageWeAppImpl : NSObject <IWeAvatarResPackageLogic>
{
    BOOL _isDownloadFinish; // +0x8
    MBPackageLogic * _pkg; // +0x10
}
- (id)initWithConfString:(id)arg1;
- (void)dealloc;
- (BOOL)checkPackageExist;
- (void)tryUpdatePackage:(id /* block */)arg1 failBlock:(id /* block */)arg2;
- (id)getCodePackageData;
- (id)getCodePackagePath;
- (id)getCodePackageMD5;
- (id)pkg;
- (void)setPkg:(id)arg1;
- (BOOL)isDownloadFinish;
- (void)setIsDownloadFinish:(BOOL)arg1;
- (void).cxx_destruct;
@end

