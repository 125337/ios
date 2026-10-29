@interface MMAlbumFilterOptions : NSObject
{
    BOOL _shouldIncludeVideo; // +0x8
    BOOL _isOnlyShowVideo; // +0x9
    BOOL _isOnlyShowAssetWithLocation; // +0xa
    long long _livePhotoMode; // +0x10
}
- (BOOL)shouldIncludeVideo;
- (void)setShouldIncludeVideo:(BOOL)arg1;
- (BOOL)isOnlyShowVideo;
- (void)setIsOnlyShowVideo:(BOOL)arg1;
- (BOOL)isOnlyShowAssetWithLocation;
- (void)setIsOnlyShowAssetWithLocation:(BOOL)arg1;
- (long long)livePhotoMode;
- (void)setLivePhotoMode:(long long)arg1;
@end

