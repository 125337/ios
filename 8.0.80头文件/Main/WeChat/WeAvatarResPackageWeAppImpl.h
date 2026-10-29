@interface WeAvatarResPackageWeAppImpl : NSObject <IWeAvatarResPackageLogic>
{
    BOOL _isDownloadFinish; // +0x8
}
- (id)initWithConfString:(id)arg1;
- (void)dealloc;
- (BOOL)checkPackageExist;
- (void)tryUpdatePackage:(id /* block */)arg1 failBlock:(id /* block */)arg2;
- (id)getCodePackageData;
- (id)getCodePackagePath;
- (id)getCodePackageMD5;
- (BOOL)isDownloadFinish;
- (void)setIsDownloadFinish:(BOOL)arg1;
@end
