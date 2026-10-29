@interface MMImagePickerCacheMgr : MMRootService <MMServiceProtocol>
{
    BOOL _isEnableCache; // +0x8
    MMImagePickerCacheObj * _cacheObj; // +0x10
    long long _currentOption; // +0x18
    NSRecursiveLock * _lock; // +0x20
    long long _maxAssetCacheCount; // +0x28
}
- (id)init;
- (void)onServiceMemoryWarning;
- (void)didEnterImagePickerWithOption:(long long)arg1;
- (void)didLeaveImagePicker;
- (void)setupMaxCacheAssetCount:(long long)arg1;
- (id)fetchAlbums;
- (void)updateLastEntryAlbum:(id)arg1;
- (id)fetchLastEntryAlbum;
- (void)updateAlbums:(id)arg1;
- (void)updateThumbImage:(id)arg1 forAlbum:(id)arg2;
- (void)updateThumbPhotoCount:(unsigned long long)arg1 forAlbum:(id)arg2;
- (void)updateTitle:(id)arg1 forAlbum:(id)arg2;
- (id)fetchAssetWithId:(id)arg1;
- (void)updateAsset:(id)arg1 inAlbum:(id)arg2 index:(unsigned long long)arg3;
- (void)updateThumbImage:(id)arg1 forAsset:(id)arg2;
- (void)updateIsVideo:(BOOL)arg1 isGif:(BOOL)arg2 videoDuration:(double)arg3 forAsset:(id)arg4;
- (void)saveToLocal;
- (void)tryLoadFromLocal;
- (id)findAlbumForIdentifier:(id)arg1;
- (id)albumsForCurrOption;
- (void)updateAlbumsForCurrOption:(id)arg1;
- (void)saveAssetForId:(id)arg1;
- (void)dispatchIOAction:(id /* block */)arg1;
- (BOOL)isEnableCache;
- (void)setIsEnableCache:(BOOL)arg1;
- (id)cacheObj;
- (void)setCacheObj:(id)arg1;
- (long long)currentOption;
- (void)setCurrentOption:(long long)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (long long)maxAssetCacheCount;
- (void)setMaxAssetCacheCount:(long long)arg1;
- (void).cxx_destruct;
@end
