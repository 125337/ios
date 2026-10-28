@interface WebvViewWebComPublicLibInfo : MMObject
{
    unsigned int _libType; // +0x8
    long long _version; // +0x10
    NSString * _iframeUrlPattern; // +0x18
    NSArray * _arrIFrameMatrixFormat; // +0x20
    NSString * _wxTagJS; // +0x28
    NSString * _webcomptJS; // +0x30
    NSString * _webSkeletonHtmlString; // +0x38
    NSString * _webPrefetchJS; // +0x40
}
+ (id)newSessionPublicLibInfo;
+ (id)currentDebugPkgInfo;
+ (id)currentMMResInfo;
+ (id)currentBundlePublicInfoWithMMResVersion:(unsigned long long)arg1;
+ (id)publicInfoFromPkgFilePath:(id)arg1 minVersion:(long long)arg2;
+ (id)dataWithFileName:(id)arg1 unpackPkg:(void *)arg2;
- (long long)version;
- (void)setVersion:(long long)arg1;
- (id)iframeUrlPattern;
- (void)setIframeUrlPattern:(id)arg1;
- (id)arrIFrameMatrixFormat;
- (void)setArrIFrameMatrixFormat:(id)arg1;
- (id)wxTagJS;
- (void)setWxTagJS:(id)arg1;
- (id)webcomptJS;
- (void)setWebcomptJS:(id)arg1;
- (id)webSkeletonHtmlString;
- (void)setWebSkeletonHtmlString:(id)arg1;
- (id)webPrefetchJS;
- (void)setWebPrefetchJS:(id)arg1;
- (unsigned int)libType;
- (void)setLibType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
