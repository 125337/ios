@interface TPPlayerDataSource : NSObject
{
    TPUrlDataSource * _urlDataSource; // +0x8
    id <ITPMediaAsset> _mediaAsset; // +0x10
}
+ (id)dataSourceWithUrlDataSource:(id)arg1;
+ (id)dataSourceWithMediaAsset:(id)arg1;
- (BOOL)isValid;
- (id)urlDataSource;
- (void)setUrlDataSource:(id)arg1;
- (id)mediaAsset;
- (void)setMediaAsset:(id)arg1;
- (void).cxx_destruct;
@end
