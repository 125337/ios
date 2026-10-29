@interface QDataCacheBase : NSObject
{
    NSString * _version; // +0x8
    NSString * _basePath; // +0x10
}
+ (void)clearCache;
- (int)tileType;
- (BOOL)putCacheData:(id)arg1;
- (id)getCacheData:(id)arg1;
- (id)initWithVersion:(id)arg1;
- (id)version;
- (void)setVersion:(id)arg1;
- (id)basePath;
- (void)setBasePath:(id)arg1;
- (void).cxx_destruct;
@end

