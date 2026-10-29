@interface JSC2CodeCacheWrap : NSObject
{
    NSString * _source; // +0x8
    NSURL * _sourceURL; // +0x10
    id <IJSC2CodeCacheSource> _codeCacheSource; // +0x18
    NSString * _name; // +0x20
    NSURL * _cachePathURL; // +0x28
    unsigned long long _version; // +0x30
}
- (BOOL)isEmpty;
- (id)source;
- (void)setSource:(id)arg1;
- (id)sourceURL;
- (void)setSourceURL:(id)arg1;
- (id)codeCacheSource;
- (void)setCodeCacheSource:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)cachePathURL;
- (void)setCachePathURL:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

