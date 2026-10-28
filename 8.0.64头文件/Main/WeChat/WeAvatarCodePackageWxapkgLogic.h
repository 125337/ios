@interface WeAvatarCodePackageWxapkgLogic : NSObject <IWeAvatarCodePackageLogic>
{
    MBPackageLogic * _pkg; // +0x8
    id <IWeAvatarResPackageLogic> _resLogic; // +0x10
}
- (id)initWithResPackage:(id)arg1;
- (void)dealloc;
- (void)unpack;
- (id)getResPackageData;
- (BOOL)copyToDestPath:(id)arg1 fromSrcData:(id)arg2;
- (id)getFileData:(id)arg1;
- (id)pkg;
- (void)setPkg:(id)arg1;
- (id)resLogic;
- (void)setResLogic:(id)arg1;
- (void).cxx_destruct;
@end
