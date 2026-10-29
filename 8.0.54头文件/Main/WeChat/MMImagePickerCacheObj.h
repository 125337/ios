@interface MMImagePickerCacheObj : NSObject <PBCoding>
{
    NSMutableArray * _albums; // +0x8
    NSMutableArray * _imageOnlyAlbums; // +0x10
    NSMutableArray * _VideoOnlyAlbums; // +0x18
    NSMutableDictionary * _assets; // +0x20
    NSMutableArray * _assetKeys; // +0x28
    NSString * _lastAlbumId; // +0x30
}
+ (void)PBArrayAdd_albums;
+ (void)PBArrayAdd_assets;
+ (void)PBArrayAdd_lastAlbumId;
+ (void)PBArrayAdd_imageOnlyAlbums;
+ (void)PBArrayAdd_VideoOnlyAlbums;
+ (void)PBArrayAdd_assetKeys;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)albums;
- (void)setAlbums:(id)arg1;
- (id)imageOnlyAlbums;
- (void)setImageOnlyAlbums:(id)arg1;
- (id)VideoOnlyAlbums;
- (void)setVideoOnlyAlbums:(id)arg1;
- (id)assets;
- (void)setAssets:(id)arg1;
- (id)assetKeys;
- (void)setAssetKeys:(id)arg1;
- (id)lastAlbumId;
- (void)setLastAlbumId:(id)arg1;
- (void).cxx_destruct;
@end

