@interface MMWebPrefetchResPkgDownloadRequest : NSObject
{
    unsigned int _requestId; // +0x8
    unsigned int _scene; // +0xc
    unsigned int _subScene; // +0x10
    NSString * _packageIdentifier; // +0x18
    NSString * _packageUrl; // +0x20
    NSString * _packageMd5; // +0x28
    NSString * _packageVersion; // +0x30
    NSString * _packageCookie; // +0x38
}
- (id)packageIdentifier;
- (void)setPackageIdentifier:(id)arg1;
- (id)packageUrl;
- (void)setPackageUrl:(id)arg1;
- (id)packageMd5;
- (void)setPackageMd5:(id)arg1;
- (id)packageVersion;
- (void)setPackageVersion:(id)arg1;
- (unsigned int)requestId;
- (void)setRequestId:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)subScene;
- (void)setSubScene:(unsigned int)arg1;
- (id)packageCookie;
- (void)setPackageCookie:(id)arg1;
- (void).cxx_destruct;
@end
