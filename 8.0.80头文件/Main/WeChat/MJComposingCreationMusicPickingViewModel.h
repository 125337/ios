@interface MJComposingCreationMusicPickingViewModel : MJMusicPickingViewModel
+ (void)prepareRecommendContextWithParams:(id)arg1 effectLocalPaths:(id)arg2 completion:(id /* block */)arg3;
+ (void)prepareClassfyResultWithMJAssetInfos:(id)arg1 logName:(id)arg2 completion:(id /* block */)arg3;
+ (void)prepareAssetItemWithMJAssetInfo:(id)arg1 completion:(id /* block */)arg2;
+ (id)assetInfosForClassifyWithLocalFilePaths:(id)arg1;
+ (id)assetInfosForClassifyWithAssetInfos:(id)arg1;
- (id)initWithFollowMusicInfo:(id)arg1 assetClassfyResult:(id)arg2 publisherContext:(id)arg3 videoDuration:(unsigned long long)arg4 bgmListType:(unsigned long long)arg5;
- (id)initWithFollowMusicInfo:(id)arg1 assetClassfyResult:(id)arg2 publisherContext:(id)arg3 videoDuration:(unsigned long long)arg4 bgmListType:(unsigned long long)arg5 pictureCount:(unsigned int)arg6 recommendPrompt:(id)arg7 assetItems:(id)arg8;
- (void)fetchDefaultRecommendMusicWithCompletion:(id /* block */)arg1;
- (void)fetchAndDownloadDefaultMusicWithCompletion:(id /* block */)arg1;
@end
