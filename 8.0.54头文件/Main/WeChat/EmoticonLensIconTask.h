@interface EmoticonLensIconTask : MMObject
{
    LensIcon * _iconInfo; // +0x8
    NSString * _lensId; // +0x10
    NSString * _targetPath; // +0x18
    NSString * _tempPath; // +0x20
}
- (id)iconInfo;
- (void)setIconInfo:(id)arg1;
- (id)lensId;
- (void)setLensId:(id)arg1;
- (id)targetPath;
- (void)setTargetPath:(id)arg1;
- (id)tempPath;
- (void)setTempPath:(id)arg1;
- (void).cxx_destruct;
@end

