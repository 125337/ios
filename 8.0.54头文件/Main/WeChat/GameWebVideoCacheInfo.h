@interface GameWebVideoCacheInfo : NSObject <WCTTableCoding>
{
    BOOL _isRedDotPreload; // +0x8
    BOOL _isCdnPreload; // +0x9
    BOOL _isCdnPreloadSuccess; // +0xa
    unsigned int _updateTime; // +0xc
    unsigned int _failedCount; // +0x10
    NSString * _cacheIdentify; // +0x18
    NSString * _url; // +0x20
    NSString * _contentType; // +0x28
    unsigned long long _contentTotalLength; // +0x30
    NSString * _acceptRanges; // +0x38
    NSString * _resourceUrl; // +0x40
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)cacheIdentify;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_cacheIdentify;
+ (const void *)url;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_url;
+ (const void *)updateTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)contentType;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_contentType;
+ (const void *)contentTotalLength;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_contentTotalLength;
+ (const void *)acceptRanges;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_acceptRanges;
+ (const void *)isRedDotPreload;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_isRedDotPreload;
+ (const void *)failedCount;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_failedCount;
+ (const void *)resourceUrl;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_resourceUrl;
+ (const void *)isCdnPreload;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_isCdnPreload;
+ (const void *)isCdnPreloadSuccess;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_isCdnPreloadSuccess;
+ (void)__wcdb_column_constraint_11:(void *)arg1;
- (id)cacheIdentify;
- (void)setCacheIdentify:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
- (id)contentType;
- (void)setContentType:(id)arg1;
- (unsigned long long)contentTotalLength;
- (void)setContentTotalLength:(unsigned long long)arg1;
- (id)acceptRanges;
- (void)setAcceptRanges:(id)arg1;
- (BOOL)isRedDotPreload;
- (void)setIsRedDotPreload:(BOOL)arg1;
- (unsigned int)failedCount;
- (void)setFailedCount:(unsigned int)arg1;
- (id)resourceUrl;
- (void)setResourceUrl:(id)arg1;
- (BOOL)isCdnPreload;
- (void)setIsCdnPreload:(BOOL)arg1;
- (BOOL)isCdnPreloadSuccess;
- (void)setIsCdnPreloadSuccess:(BOOL)arg1;
- (void).cxx_destruct;
@end

