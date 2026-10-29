@interface EnterpriseRemoteSearchResult : NSObject
{
    BOOL _hasMore; // +0x8
    unsigned int _offset; // +0xc
    NSMutableArray * _items; // +0x10
}
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (unsigned int)offset;
- (void)setOffset:(unsigned int)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
