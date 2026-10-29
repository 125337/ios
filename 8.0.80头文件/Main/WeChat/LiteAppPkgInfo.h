@interface LiteAppPkgInfo : NSObject
{
    BOOL _isAutoCheck; // +0x8
    NSString * _appId; // +0x10
    NSString * _baseId; // +0x18
    NSString * _patchId; // +0x20
}
- (id)init:(id)arg1 baseId:(id)arg2;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)baseId;
- (void)setBaseId:(id)arg1;
- (id)patchId;
- (void)setPatchId:(id)arg1;
- (BOOL)isAutoCheck;
- (void)setIsAutoCheck:(BOOL)arg1;
- (void).cxx_destruct;
@end
