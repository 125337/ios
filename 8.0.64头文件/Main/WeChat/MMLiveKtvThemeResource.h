@interface MMLiveKtvThemeResource : NSObject
{
    NSString * _uri; // +0x8
    NSString * _md5Hash; // +0x10
}
- (void)fetchResourcesWithCompletionBlock:(id /* block */)arg1;
- (id)uri;
- (void)setUri:(id)arg1;
- (id)md5Hash;
- (void)setMd5Hash:(id)arg1;
- (void).cxx_destruct;
@end
