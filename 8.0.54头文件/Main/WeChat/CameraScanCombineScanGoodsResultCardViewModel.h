@interface CameraScanCombineScanGoodsResultCardViewModel : NSObject
{
    BOOL _isFail; // +0x8
    unsigned int _reportType; // +0xc
    UIImage * _image; // +0x10
    NSString * _title; // +0x18
    NSString * _reqKey; // +0x20
    NSNumber * _trackId; // +0x28
    CameraScanGoodsItemViewModel * _originViewModel; // +0x30
    CGRect _normalizedRect; // +0x38
}
- (id)initWithItemViewModel:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)reqKey;
- (void)setReqKey:(id)arg1;
- (id)trackId;
- (void)setTrackId:(id)arg1;
- (id)originViewModel;
- (void)setOriginViewModel:(id)arg1;
- (BOOL)isFail;
- (void)setIsFail:(BOOL)arg1;
- (CGRect)normalizedRect;
- (void)setNormalizedRect:(CGRect)arg1;
- (unsigned int)reportType;
- (void)setReportType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

