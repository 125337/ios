@interface WCPayFaceHBConfig : NSObject <PBCoding>
{
    unsigned int _resourceVersion; // +0x8
    unsigned int _uiTotalCount; // +0xc
    unsigned long long _uiTotalMount; // +0x10
}
+ (void)PBArrayAdd_resourceVersion;
+ (void)PBArrayAdd_uiTotalMount;
+ (void)PBArrayAdd_uiTotalCount;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (unsigned int)resourceVersion;
- (void)setResourceVersion:(unsigned int)arg1;
- (unsigned long long)uiTotalMount;
- (void)setUiTotalMount:(unsigned long long)arg1;
- (unsigned int)uiTotalCount;
- (void)setUiTotalCount:(unsigned int)arg1;
@end
