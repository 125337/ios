@interface CBTDramaItemDataController : NSObject
{
    BOOL _hasMoreDrama; // +0x8
    BOOL _isCacheData; // +0x9
    BOOL _isFetchingData; // +0xa
    NSMutableArray * _dramaItems; // +0x10
    long long _currentPlayIndex; // +0x18
}
- (id)init;
- (void)loadMoreDrama;
- (id)dramaItems;
- (void)setDramaItems:(id)arg1;
- (BOOL)hasMoreDrama;
- (void)setHasMoreDrama:(BOOL)arg1;
- (long long)currentPlayIndex;
- (void)setCurrentPlayIndex:(long long)arg1;
- (BOOL)isCacheData;
- (void)setIsCacheData:(BOOL)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (void).cxx_destruct;
@end
