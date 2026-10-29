@interface MBBootsLocalPackageChecker : NSObject
{
    NSString * _bizName; // +0x8
    NSString * _fileName; // +0x10
    NSString * _originalName; // +0x18
    NSString * _version; // +0x20
    NSString * _md5; // +0x28
    NSString * _mbBundleFilePath; // +0x30
    NSString * _mbHardcodeWxaPkgFilePath; // +0x38
}
- (id)initWithBizName:(id)arg1 hardCodeFileName:(id)arg2 md5:(id)arg3 version:(id)arg4 suffix:(id)arg5;
- (id)process;
- (id)getWxaPkgFilePath;
- (void)makeWxaPkgDir:(id)arg1;
- (BOOL)copyHardcodePkg;
- (id)getBrotiData:(id)arg1;
- (id)bizName;
- (void)setBizName:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)originalName;
- (void)setOriginalName:(id)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)mbBundleFilePath;
- (void)setMbBundleFilePath:(id)arg1;
- (id)mbHardcodeWxaPkgFilePath;
- (void)setMbHardcodeWxaPkgFilePath:(id)arg1;
- (void).cxx_destruct;
@end
