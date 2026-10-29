@interface WeMagicBuiltInPkgMeta : NSObject
{
    void * url; // +0x8
    void * md5; // +0x18
    void * pkgVersion; // +0x28
}
- (id)url;
- (id)md5;
- (id)pkgVersion;
- (id)initWithUrl:(id)arg1 md5:(id)arg2 pkgVersion:(id)arg3;
- (id)init;
- (void).cxx_destruct;
@end
