@interface EdgeComputingDataCacheBase : NSObject <IEdgeComputingDataCacheProtocol>
{
    unsigned int _storageMode; // +0x8
    unsigned int _type; // +0xc
    id <IEdgeComputingCacheStrategyProtocol> _cacheStrategy; // +0x10
}
- (id)init;
- (void)reset;
- (void)close;
- (void)save:(id)arg1;
- (id)read:(id)arg1;
- (void)clear:(id)arg1;
- (void)deleteExpire:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)migrate;
- (id)cacheStrategy;
- (void)setCacheStrategy:(id)arg1;
- (unsigned int)storageMode;
- (void)setStorageMode:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

