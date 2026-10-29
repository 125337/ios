@interface WCFinderLRUCacheItem : NSObject
{
    id _data; // +0x8
    unsigned long long _cost; // +0x10
}
- (id)initWithData:(id)arg1 cost:(unsigned long long)arg2;
- (id)description;
- (id)data;
- (void)setData:(id)arg1;
- (unsigned long long)cost;
- (void)setCost:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

