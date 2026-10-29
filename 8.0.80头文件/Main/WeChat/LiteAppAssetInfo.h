@interface LiteAppAssetInfo : MMAssetInfo
{
    NSURL * m_assetUrl; // +0x8
    int _index; // +0x10
    LiteAppAssetView * _assetView; // +0x18
    MMAsset * _asset; // +0x20
    NSURL * _url; // +0x28
}
- (id)initWithAsset:(id)arg1 forIndex:(int)arg2;
- (id)url;
- (BOOL)isEqual:(id)arg1;
- (long long)compareAssetInfo:(id)arg1;
- (void)asyncAssetDuration:(id /* block */)arg1;
- (void)asyncAssetSize:(id /* block */)arg1;
- (unsigned long long)editedFileSize;
- (BOOL)isExceededOriginFileSizeLimit;
- (id)getOriginSizeLimitAlertContent;
- (BOOL)isExceededFileSizeLimit;
- (void)showOriginSizeLimitAlert;
- (id)assetView;
- (void)setAssetView:(id)arg1;
- (id)asset;
- (int)index;
- (void)setIndex:(int)arg1;
- (void).cxx_destruct;
@end
