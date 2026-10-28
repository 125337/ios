@interface CameraScanGoodsItemViewModel : MMObject
{
    unsigned int _scanType; // +0x8
    unsigned int _itemSource; // +0xc
    NSString * _detectSessionId; // +0x10
    NSNumber * _trackId; // +0x18
    NSData * _itemImageData; // +0x20
    UIImage * _itemCropImage; // +0x28
    NSString * _reqKey; // +0x30
    CameraScanGoodsItemExchangeInfo * _exchangeInfo; // +0x38
    CameraScanGoodsItemQualityInfo * _qualityInfo; // +0x40
    CameraScanGoodsItemPerformanceInfo * _performanceInfo; // +0x48
    long long _imageSource; // +0x50
    CameraScanGoodsExtensionDetectResult * _detResult; // +0x58
    UIImage * _detectAlbumImage; // +0x60
    NSString * _action; // +0x68
    NSData * _extraInfo; // +0x70
    CGRect _normalizeRect; // +0x78
    Mat _detectImage; // +0x98
}
+ (id)genDetectSessionId;
- (id)init;
- (void)printPerformance;
- (void)updateNormalizeRectWithGoodsObject:(id)arg1;
- (id)detectSessionId;
- (void)setDetectSessionId:(id)arg1;
- (id)trackId;
- (void)setTrackId:(id)arg1;
- (CGRect)normalizeRect;
- (void)setNormalizeRect:(CGRect)arg1;
- (id)itemImageData;
- (void)setItemImageData:(id)arg1;
- (id)itemCropImage;
- (void)setItemCropImage:(id)arg1;
- (id)reqKey;
- (void)setReqKey:(id)arg1;
- (id)exchangeInfo;
- (void)setExchangeInfo:(id)arg1;
- (id)qualityInfo;
- (void)setQualityInfo:(id)arg1;
- (id)performanceInfo;
- (void)setPerformanceInfo:(id)arg1;
- (unsigned int)scanType;
- (void)setScanType:(unsigned int)arg1;
- (long long)imageSource;
- (void)setImageSource:(long long)arg1;
- (unsigned int)itemSource;
- (void)setItemSource:(unsigned int)arg1;
- (Mat)detectImage;
- (void)setDetectImage:(Mat)arg1;
- (id)detResult;
- (void)setDetResult:(id)arg1;
- (id)detectAlbumImage;
- (void)setDetectAlbumImage:(id)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
