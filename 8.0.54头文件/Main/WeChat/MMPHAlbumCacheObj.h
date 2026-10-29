@interface MMPHAlbumCacheObj : MMALbumForPHAssetFramework <PBCoding>
{
    BOOL _isThumbUpdated; // +0x8
    BOOL _isPhotoCountUpdated; // +0x9
    BOOL _isNameUpdated; // +0xa
    NSString * _identifier; // +0x10
    NSMutableDictionary * _assetsDic; // +0x18
    long long _albumPhotoCount; // +0x20
    NSString * _albumName; // +0x28
    UIImage * _thumbImage; // +0x30
}
+ (void)PBArrayAdd_identifier;
+ (void)PBArrayAdd_assetsDic;
+ (void)PBArrayAdd_albumPhotoCount;
+ (void)PBArrayAdd_albumName;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithIdentifier:(id)arg1;
- (void)onMemoryWarning;
- (id)fetchThumbImage;
- (void)updateThumbImage:(id)arg1;
- (void)updateAssetId:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)retriveCoverImageWithAsyncBlock:(id /* block */)arg1;
- (void)retrivePhotoCountWithAsyncBlock:(id /* block */)arg1;
- (id)albumId;
- (id)name;
- (id)coverImage;
- (unsigned long long)photosCount;
- (id)assetOfIndex:(unsigned long long)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)assetsDic;
- (void)setAssetsDic:(id)arg1;
- (long long)albumPhotoCount;
- (void)setAlbumPhotoCount:(long long)arg1;
- (id)albumName;
- (void)setAlbumName:(id)arg1;
- (BOOL)isThumbUpdated;
- (void)setIsThumbUpdated:(BOOL)arg1;
- (BOOL)isPhotoCountUpdated;
- (void)setIsPhotoCountUpdated:(BOOL)arg1;
- (BOOL)isNameUpdated;
- (void)setIsNameUpdated:(BOOL)arg1;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (void).cxx_destruct;
@end

