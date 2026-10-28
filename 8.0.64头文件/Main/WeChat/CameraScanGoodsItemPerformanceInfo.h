@interface CameraScanGoodsItemPerformanceInfo : NSObject
{
    unsigned long long _detectDurantion; // +0x8
    unsigned long long _imageCropDurantion; // +0x10
    unsigned long long _compressDurantion; // +0x18
    unsigned long long _encodeSize; // +0x20
    unsigned long long _encodeType; // +0x28
    unsigned long long _queueDurantion; // +0x30
    unsigned long long _uploadDurantion; // +0x38
    unsigned long long _exchangeDurantion; // +0x40
    unsigned long long _frameIndex; // +0x48
    unsigned long long _stableFrameIndex; // +0x50
}
- (unsigned long long)detectDurantion;
- (void)setDetectDurantion:(unsigned long long)arg1;
- (unsigned long long)imageCropDurantion;
- (void)setImageCropDurantion:(unsigned long long)arg1;
- (unsigned long long)compressDurantion;
- (void)setCompressDurantion:(unsigned long long)arg1;
- (unsigned long long)encodeSize;
- (void)setEncodeSize:(unsigned long long)arg1;
- (unsigned long long)encodeType;
- (void)setEncodeType:(unsigned long long)arg1;
- (unsigned long long)queueDurantion;
- (void)setQueueDurantion:(unsigned long long)arg1;
- (unsigned long long)uploadDurantion;
- (void)setUploadDurantion:(unsigned long long)arg1;
- (unsigned long long)exchangeDurantion;
- (void)setExchangeDurantion:(unsigned long long)arg1;
- (unsigned long long)frameIndex;
- (void)setFrameIndex:(unsigned long long)arg1;
- (unsigned long long)stableFrameIndex;
- (void)setStableFrameIndex:(unsigned long long)arg1;
@end
