@interface MMBGMAssetClassfyResult : NSObject
{
    NSData * _assetClassfyResult; // +0x8
    id /* block */ _getClassfyBlock; // +0x10
}
- (BOOL)hasGetClassfyResult;
- (BOOL)needCheckClassfyResult;
- (void)setCheckClassfyResultBlock:(id /* block */)arg1;
- (void)asyncCheckClassfyResult:(id /* block */)arg1;
- (id)assetClassfyResult;
- (void)setAssetClassfyResult:(id)arg1;
- (id /* block */)getClassfyBlock;
- (void)setGetClassfyBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

