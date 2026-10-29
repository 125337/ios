@interface WeAvatarResPackageWePkgImpl : NSObject <IWePkgFacadeExt, IWeAvatarResPackageLogic>
{
    id /* block */ successBlock; // +0x8
    id /* block */ failBlock; // +0x10
    WePkgPackage * _pkg; // +0x18
}
- (id)init;
- (void)dealloc;
- (BOOL)checkPackageExist;
- (void)tryUpdatePackage:(id /* block */)arg1 failBlock:(id /* block */)arg2;
- (id)getCodePackageData;
- (id)getCodePackagePath;
- (id)getCodePackageMD5;
- (void)onWekgOperateSuccess:(id)arg1;
- (void)onWekgUpdateFailed:(id)arg1 errorStr:(id)arg2;
- (void)onWepkgNoNeedUpdate:(id)arg1 version:(id)arg2;
- (id)pkg;
- (void)setPkg:(id)arg1;
- (void).cxx_destruct;
@end

