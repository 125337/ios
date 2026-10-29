@interface WSTemplatePackageManager : NSObject
{
    WSTemplatePackage * _updatedResourcePackage; // +0x8
    WSTemplatePackage * _devResourcePackage; // +0x10
    WSTemplatePackage * _appResourcePackage; // +0x18
}
- (id)initWithZipResourcePath:(id)arg1 privateResourcePath:(id)arg2 packageName:(id)arg3 bizType:(unsigned long long)arg4;
- (id)activePackage;
- (id)updatedResourcePackage;
- (void)setUpdatedResourcePackage:(id)arg1;
- (id)devResourcePackage;
- (void)setDevResourcePackage:(id)arg1;
- (id)appResourcePackage;
- (void)setAppResourcePackage:(id)arg1;
- (void).cxx_destruct;
@end

