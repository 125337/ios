@interface MJPHAssetsAnalyzer : NSObject
{
    BOOL _isAssetEdited; // +0x8
    BOOL _isScreedshotAsset; // +0x9
    long long _realShotAssetCount; // +0x10
    long long _totalAssetCount; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)initImpl;
- (void)analyzeWithContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)analyzeWithOriginAssets:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)checkAssetEditingFlagWithAssets:(id)arg1;
- (void)analyzeMetadataWithPHAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)analyzeImageWithPHAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)analyzeVideoWithPHAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleSuccessWithResult:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleFailWithCompletionHandler:(id /* block */)arg1;
- (BOOL)isAssetEdited;
- (void)setIsAssetEdited:(BOOL)arg1;
- (BOOL)isScreedshotAsset;
- (void)setIsScreedshotAsset:(BOOL)arg1;
- (long long)realShotAssetCount;
- (void)setRealShotAssetCount:(long long)arg1;
- (long long)totalAssetCount;
- (void)setTotalAssetCount:(long long)arg1;
@end
