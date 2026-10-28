@interface MMAlbum : MMObject <NSCopying>
- (id)albumId;
- (id)name;
- (unsigned long long)photosCount;
- (id)coverImage;
- (void)shouldIncludeVideoAsset:(BOOL)arg1;
- (id)assetOfIndex:(unsigned long long)arg1;
- (void)stopICloudActivity;
- (void)retrivePhotoCountWithAsyncBlock:(id /* block */)arg1;
- (void)retriveCoverImageWithAsyncBlock:(id /* block */)arg1;
- (id)lastAssetWithSecond:(double)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
@end
