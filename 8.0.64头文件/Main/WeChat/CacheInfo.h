@interface CacheInfo : NSObject
{
    id _data; // +0x8
    unsigned long long _cacheTime; // +0x10
}
- (id)initWithData:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (unsigned long long)cacheTime;
- (void)setCacheTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
