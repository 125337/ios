@interface CameraScanGoodsItemViewModel : MMObject
{
    unsigned int _itemType; // +0x8
    unsigned int _textFilterType; // +0xc
    unsigned int _scanType; // +0x10
    unsigned int _itemSource; // +0x14
    unsigned int _mode; // +0x18
    long long _shadowFilterReason; // +0x20
    NSString * _detectSessionId; // +0x28
    NSNumber * _trackId; // +0x30
    NSData * _itemImageData; // +0x38
    UIImage * _itemCropImage; // +0x40
    NSString * _reqKey; // +0x48
    CameraScanGoodsItemExchangeInfo * _exchangeInfo; // +0x50
    CameraScanGoodsItemQualityInfo * _qualityInfo; // +0x58
    CameraScanGoodsItemPerformanceInfo * _performanceInfo; // +0x60
    long long _imageSource; // +0x68
    CameraScanGoodsExtensionDetectResult * _detResult; // +0x70
    UIImage * _detectAlbumImage; // +0x78
    NSString * _action; // +0x80
    NSData * _extraInfo; // +0x88
    CameraScanGoodsItemTranslateInfo * _translateInfo; // +0x90
    CGPoint _normalizeTapPoint; // +0x98
    CGRect _normalizeRect; // +0xa8
    Mat _detectImage; // +0xc8
}
+ (id)genDetectSessionId;
- (id)init;
- (void)printPerformance;
- (void)updateNormalizeRectWithGoodsObject:(id)arg1;
- (unsigned int)convertModeForIdentifyReason;
- (unsigned int)itemType;
- (void)setItemType:(unsigned int)arg1;
- (unsigned int)textFilterType;
- (void)setTextFilterType:(unsigned int)arg1;
- (long long)shadowFilterReason;
- (void)setShadowFilterReason:(long long)arg1;
- (id)detectSessionId;
- (void)setDetectSessionId:(id)arg1;
- (id)trackId;
- (void)setTrackId:(id)arg1;
- (CGRect)normalizeRect;
- (void)setNormalizeRect:(CGRect)arg1;
- (CGPoint)normalizeTapPoint;
- (void)setNormalizeTapPoint:(CGPoint)arg1;
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
- (unsigned int)mode;
- (void)setMode:(unsigned int)arg1;
- (id)translateInfo;
- (void)setTranslateInfo:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
