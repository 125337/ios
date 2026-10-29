@interface WAPackageDownloadUrlPrefetchResultInfo : NSObject
{
    BOOL _isPatch; // +0x8
    BOOL _isZstd; // +0x9
    NSString * _url; // +0x10
}
- (id)url;
- (void)setUrl:(id)arg1;
- (BOOL)isPatch;
- (void)setIsPatch:(BOOL)arg1;
- (BOOL)isZstd;
- (void)setIsZstd:(BOOL)arg1;
- (void).cxx_destruct;
@end
