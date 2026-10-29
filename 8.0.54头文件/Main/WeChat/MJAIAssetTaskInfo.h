@interface MJAIAssetTaskInfo : NSObject
{
    BOOL _cdnUploadCacheEnabled; // +0x8
    unsigned long long _index; // +0x10
    OMJAssetInfo * _originalAssetInfo; // +0x18
    NSString * _assetFileKey; // +0x20
    NSString * _adjustedAssetFilePath; // +0x28
}
- (id)initWithIndex:(unsigned long long)arg1 originalAssetInfo:(id)arg2;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (id)originalAssetInfo;
- (void)setOriginalAssetInfo:(id)arg1;
- (id)assetFileKey;
- (void)setAssetFileKey:(id)arg1;
- (id)adjustedAssetFilePath;
- (void)setAdjustedAssetFilePath:(id)arg1;
- (BOOL)cdnUploadCacheEnabled;
- (void)setCdnUploadCacheEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

