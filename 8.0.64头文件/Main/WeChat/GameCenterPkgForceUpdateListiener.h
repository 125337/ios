@interface GameCenterPkgForceUpdateListiener : NSObject
{
    BOOL _successUpdate; // +0x8
    NSString * _pkgId; // +0x10
    id /* block */ _didCompleteBlock; // +0x18
    NSString * _errorDesc; // +0x20
    GameCenterPkgForceUpdateListiener * _selfRef; // +0x28
}
- (id)initWithTargetPkgId:(id)arg1 didCompleteBlock:(id /* block */)arg2;
- (void)updatePkg;
- (void)onWekgOperateSuccess:(id)arg1;
- (void)onPkgUpdateComplete:(id)arg1 result:(BOOL)arg2 errorStr:(id)arg3;
- (void)onWekgUpdateFailed:(id)arg1 errorStr:(id)arg2;
- (void)onWepkgNoNeedUpdate:(id)arg1 version:(id)arg2;
- (id)pkgId;
- (void)setPkgId:(id)arg1;
- (id /* block */)didCompleteBlock;
- (void)setDidCompleteBlock:(id /* block */)arg1;
- (id)errorDesc;
- (void)setErrorDesc:(id)arg1;
- (BOOL)successUpdate;
- (void)setSuccessUpdate:(BOOL)arg1;
- (id)selfRef;
- (void)setSelfRef:(id)arg1;
- (void).cxx_destruct;
@end
