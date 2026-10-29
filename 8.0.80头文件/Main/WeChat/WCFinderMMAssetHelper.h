@interface WCFinderMMAssetHelper : NSObject
+ (id)fileNameForAssetId:(id)arg1 isLivePhoto:(BOOL)arg2;
+ (id)filePathForAssetID:(id)arg1 isLivePhoto:(BOOL)arg2;
+ (void)asyncGetPathWithAsset:(id)arg1 completion:(id /* block */)arg2;
+ (void)asyncGetPathsWithAssets:(id)arg1 completion:(id /* block */)arg2;
+ (void)asyncGetPathsWithAssetInfos:(id)arg1 completion:(id /* block */)arg2;
@end
