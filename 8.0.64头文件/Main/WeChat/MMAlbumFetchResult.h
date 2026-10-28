@interface MMAlbumFetchResult : NSObject
{
    BOOL _onlyShowAssetWithLocation; // +0x8
    PHFetchResult * _systemFetchResult; // +0x10
    NSMutableArray * _prefetchAssets; // +0x18
}
+ (id)fetchResult:(id)arg1 locationFilter:(BOOL)arg2;
- (void)updateFetchResults;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)lastObject;
- (id)systemFetchResult;
- (void)setSystemFetchResult:(id)arg1;
- (BOOL)onlyShowAssetWithLocation;
- (void)setOnlyShowAssetWithLocation:(BOOL)arg1;
- (id)prefetchAssets;
- (void)setPrefetchAssets:(id)arg1;
- (void).cxx_destruct;
@end
