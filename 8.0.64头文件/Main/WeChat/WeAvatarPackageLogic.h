@interface WeAvatarPackageLogic : NSObject
{
    BOOL _isDebugMode; // +0x8
    NSObject<IWeAvatarResPackageLogic> * _resPackageLogic; // +0x10
    NSObject<IWeAvatarCodePackageLogic> * _codePackageLogic; // +0x18
}
- (id)init;
- (void)dealloc;
- (BOOL)checkPackageExist;
- (void)unpack;
- (void)checkUpdate:(id /* block */)arg1 fail:(id /* block */)arg2;
- (id)getFileData:(id)arg1;
- (BOOL)isDebugMode;
- (id)resPackageLogic;
- (void)setResPackageLogic:(id)arg1;
- (id)codePackageLogic;
- (void)setCodePackageLogic:(id)arg1;
- (void).cxx_destruct;
@end
