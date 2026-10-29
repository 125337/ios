@interface FavForwardReportParam : NSObject
{
    BOOL _isSearchResult; // +0x8
    unsigned int _searchListIndex; // +0xc
    unsigned int _favListIndex; // +0x10
}
+ (id)paramWithIsSearchResult:(BOOL)arg1 searchListIndex:(unsigned int)arg2 favListIndex:(unsigned int)arg3;
- (BOOL)isSearchResult;
- (void)setIsSearchResult:(BOOL)arg1;
- (unsigned int)searchListIndex;
- (void)setSearchListIndex:(unsigned int)arg1;
- (unsigned int)favListIndex;
- (void)setFavListIndex:(unsigned int)arg1;
@end
