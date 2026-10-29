@interface MMLiveBeautyResourcesDescriptor : NSObject
{
    MMLiveBeautyResourcePackageModel * _beautyResources; // +0x8
    MMLiveBeautyResourcePackageModel * _makeupResources; // +0x10
    MMLiveBeautyResourcePackageModel * _filterResources; // +0x18
}
+ (id)savedDescriptorWithScopeId:(id)arg1;
+ (id)savedPackageWithType:(unsigned long long)arg1 scopeId:(id)arg2;
- (BOOL)empty;
- (void)saveDescriptorWithScopeId:(id)arg1;
- (void)savePackage:(id)arg1 withScopeId:(id)arg2;
- (id)beautyResources;
- (void)setBeautyResources:(id)arg1;
- (id)makeupResources;
- (void)setMakeupResources:(id)arg1;
- (id)filterResources;
- (void)setFilterResources:(id)arg1;
- (void).cxx_destruct;
@end

