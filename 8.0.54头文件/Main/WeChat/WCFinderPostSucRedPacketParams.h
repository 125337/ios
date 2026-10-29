@interface WCFinderPostSucRedPacketParams : NSObject
{
    NSString * _exportId; // +0x8
    NSString * _nonceId; // +0x10
    NSString * _templateId; // +0x18
    NSString * _thumbUrl; // +0x20
    double _startAtSeconds; // +0x28
    double _durationMaxLimit; // +0x30
    WCFinderRedPacketVideoEditCropRectModel * _cropRectModel; // +0x38
}
+ (id)genParamsByDataItem:(id)arg1;
- (id)init;
- (id)exportId;
- (void)setExportId:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (double)startAtSeconds;
- (void)setStartAtSeconds:(double)arg1;
- (double)durationMaxLimit;
- (void)setDurationMaxLimit:(double)arg1;
- (id)cropRectModel;
- (void)setCropRectModel:(id)arg1;
- (void).cxx_destruct;
@end

