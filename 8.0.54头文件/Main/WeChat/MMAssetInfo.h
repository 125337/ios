@interface MMAssetInfo : NSObject
{
    NSURL * m_assetUrl; // +0x8
    BOOL _isHDImage; // +0x10
    BOOL _bShowInfo; // +0x11
    BOOL _bPreSelect; // +0x12
    int _index; // +0x14
    MMAsset * _asset; // +0x18
    NSString * _albumId; // +0x20
    WCFinderAlbumScrollViewParamModel * _previewScrollViewParamModel; // +0x28
    unsigned long long _originLimitSize; // +0x30
    unsigned long long _limitFileSize; // +0x38
    unsigned long long _fileSize; // +0x40
    double _duration; // +0x48
    MMAssetView * _assetView; // +0x50
    CGRect _previewFrame; // +0x58
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
- (id)asset;
- (id)albumId;
- (void)setAlbumId:(id)arg1;
- (int)index;
- (CGRect)previewFrame;
- (void)setPreviewFrame:(CGRect)arg1;
- (BOOL)isHDImage;
- (void)setIsHDImage:(BOOL)arg1;
- (id)previewScrollViewParamModel;
- (void)setPreviewScrollViewParamModel:(id)arg1;
- (BOOL)bShowInfo;
- (void)setBShowInfo:(BOOL)arg1;
- (BOOL)bPreSelect;
- (void)setBPreSelect:(BOOL)arg1;
- (unsigned long long)originLimitSize;
- (void)setOriginLimitSize:(unsigned long long)arg1;
- (unsigned long long)limitFileSize;
- (void)setLimitFileSize:(unsigned long long)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (id)assetView;
- (void)setAssetView:(id)arg1;
- (void).cxx_destruct;
@end

