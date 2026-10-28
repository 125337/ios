@interface MagicGameLoadingStatus : NSObject
{
    BOOL _isWxPkgLoading; // +0x8
    BOOL _isJsLoading; // +0x9
    NSNumber * _loadingSpeed; // +0x10
    NSString * _requestKey; // +0x18
    NSString * _appId; // +0x20
}
- (BOOL)isWxPkgLoading;
- (void)setIsWxPkgLoading:(BOOL)arg1;
- (BOOL)isJsLoading;
- (void)setIsJsLoading:(BOOL)arg1;
- (id)loadingSpeed;
- (void)setLoadingSpeed:(id)arg1;
- (id)requestKey;
- (void)setRequestKey:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (void).cxx_destruct;
@end
