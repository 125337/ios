@interface MMFinderLiveGiftResCacheInfo : NSObject
{
    BOOL _purgeIfUnused; // +0x8
    BOOL _usageFlag; // +0x9
    NSString * _productId; // +0x10
    NSString * _fileMd5; // +0x18
}
- (id)productId;
- (void)setProductId:(id)arg1;
- (id)fileMd5;
- (void)setFileMd5:(id)arg1;
- (BOOL)purgeIfUnused;
- (void)setPurgeIfUnused:(BOOL)arg1;
- (BOOL)usageFlag;
- (void)setUsageFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
