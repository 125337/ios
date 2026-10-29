@interface MMWebImageRequest : NSObject
{
    BOOL _forceUpdate; // +0x8
    BOOL _disableCacheWrite; // +0x9
    BOOL _syncReadDiskCache; // +0xa
    BOOL _onlyNeedData; // +0xb
    NSURL * _url; // +0x10
    long long _scene; // +0x18
    NSURL * _customIdentifier; // +0x20
    NSURL * _darkModeUrl; // +0x28
    NSURL * _darkModeCustomIdentifier; // +0x30
    MMImageLoaderReqContext * _context; // +0x38
}
- (id)initWith:(id)arg1 scene:(long long)arg2;
- (id)initWithString:(id)arg1 scene:(long long)arg2;
- (void)setContext:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)customIdentifier;
- (void)setCustomIdentifier:(id)arg1;
- (id)darkModeUrl;
- (void)setDarkModeUrl:(id)arg1;
- (id)darkModeCustomIdentifier;
- (void)setDarkModeCustomIdentifier:(id)arg1;
- (BOOL)forceUpdate;
- (void)setForceUpdate:(BOOL)arg1;
- (BOOL)disableCacheWrite;
- (void)setDisableCacheWrite:(BOOL)arg1;
- (BOOL)syncReadDiskCache;
- (void)setSyncReadDiskCache:(BOOL)arg1;
- (BOOL)onlyNeedData;
- (void)setOnlyNeedData:(BOOL)arg1;
- (id)context;
- (void).cxx_destruct;
@end

