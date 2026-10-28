@interface MMALbumForPHAssetFramework : MMAlbumForiOS8Plus
{
    BOOL _m_shouldIncludeVideo; // +0x8
    BOOL _m_isOnlyShowVideo; // +0x9
    BOOL _isOnlyShowAssetWithLocation; // +0xa
    PHAssetCollection * m_collection; // +0x10
    MMAlbumFetchResult * m_fetchResult; // +0x18
    NSMutableDictionary * m_assetDic; // +0x20
    NSArray * _m_imagesArray; // +0x28
    NSDictionary * _m_indexInAllToIndexInImages; // +0x30
    long long _m_livePhotoMode; // +0x38
}
- (void)dealloc;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)init;
- (id)initWithPHAssetCollection:(id)arg1 options:(id)arg2;
- (id)getFetchResult;
- (void)updateFetchResult:(id)arg1;
- (id)albumId;
- (id)name;
- (unsigned long long)photosCount;
- (id)coverImage;
- (id)assetOfIndex:(unsigned long long)arg1;
- (id)assetForPHAssset:(id)arg1;
- (void)stopICloudActivity;
- (void)retriveCoverImageWithAsyncBlock:(id /* block */)arg1;
- (void)retrivePhotoCountWithAsyncBlock:(id /* block */)arg1;
- (void)setM_collection:(id)arg1;
- (id)m_collection;
- (id)m_fetchResult;
- (void)setM_fetchResult:(id)arg1;
- (id)m_assetDic;
- (void)setM_assetDic:(id)arg1;
- (id)m_imagesArray;
- (void)setM_imagesArray:(id)arg1;
- (id)m_indexInAllToIndexInImages;
- (void)setM_indexInAllToIndexInImages:(id)arg1;
- (BOOL)m_shouldIncludeVideo;
- (void)setM_shouldIncludeVideo:(BOOL)arg1;
- (BOOL)m_isOnlyShowVideo;
- (void)setM_isOnlyShowVideo:(BOOL)arg1;
- (BOOL)isOnlyShowAssetWithLocation;
- (void)setIsOnlyShowAssetWithLocation:(BOOL)arg1;
- (long long)m_livePhotoMode;
- (void)setM_livePhotoMode:(long long)arg1;
- (void).cxx_destruct;
@end
