@interface MMAlbumForGameHaowan : MMAlbum <GameVideoAlbumDataFetcherDelegate>
{
    NSArray * _albumInfos; // +0x8
    GameVideoAlbumDataFetcher * _dataFetcher; // +0x10
    BOOL _shouldInclude; // +0x18
    BOOL _isOnlyShowVideo; // +0x19
    BOOL _hasSetupLocalVideoList; // +0x1a
    int _onlineVideoEndIndex; // +0x1c
    unsigned long long _maxAskedIndex; // +0x20
    int _errorCount; // +0x28
    BOOL _hasReceiveCommonVideoList; // +0x2c
    NSArray * _recommendVideoList; // +0x30
    id <GameDataChangedObserver> _changedObserver; // +0x38
    NSMutableArray * _combinVideoList; // +0x40
}
- (id)initWithAlbumInfos:(id)arg1;
- (void)setupMMAlbumForGameHaowan;
- (unsigned long long)combinedVideoCount;
- (BOOL)hasOccurredFault;
- (id)albumId;
- (id)name;
- (unsigned long long)photosCount;
- (id)coverImage;
- (id)assetOfIndex:(unsigned long long)arg1;
- (void)stopICloudActivity;
- (unsigned long long)columnCount;
- (void)retrivePhotoCountWithAsyncBlock:(id /* block */)arg1;
- (void)retriveCoverImageWithAsyncBlock:(id /* block */)arg1;
- (id)lastAssetWithSecond:(double)arg1;
- (void)setupLocalVideoList;
- (void)appendLocalAssets:(id)arg1 albumInfo:(id)arg2;
- (id)fetchAssets:(id)arg1;
- (id)fetchAssetCollection:(id)arg1;
- (void)fetchOnlineVideoListIfNeed;
- (void)notifyGameDataChanged;
- (void)albumDataFetcher:(id)arg1 didReceivedRecommendVideoList:(id)arg2;
- (void)albumDataFetcher:(id)arg1 didReceivedVideoList:(id)arg2;
- (void)albumDataFetcher:(id)arg1 didFailedWithError:(id)arg2;
- (void)appendOnlineVideoList:(id)arg1;
- (unsigned long long)searchInsertPositionForOnlineVideo:(unsigned long long)arg1 beginIndex:(unsigned long long)arg2;
- (id)recommendVideoList;
- (void)setRecommendVideoList:(id)arg1;
- (id)changedObserver;
- (void)setChangedObserver:(id)arg1;
- (id)combinVideoList;
- (void)setCombinVideoList:(id)arg1;
- (BOOL)hasReceiveCommonVideoList;
- (void)setHasReceiveCommonVideoList:(BOOL)arg1;
- (void).cxx_destruct;
@end

