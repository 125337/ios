@interface EmoticonSentSessionCache : NSObject
{
    BOOL _deepScanned; // +0x8
    unsigned int _watermarkCreateTime; // +0xc
    unsigned int _watermarkLocalId; // +0x10
    NSArray * _samples; // +0x18
}
- (id)samples;
- (void)setSamples:(id)arg1;
- (unsigned int)watermarkCreateTime;
- (void)setWatermarkCreateTime:(unsigned int)arg1;
- (unsigned int)watermarkLocalId;
- (void)setWatermarkLocalId:(unsigned int)arg1;
- (BOOL)deepScanned;
- (void)setDeepScanned:(BOOL)arg1;
- (void).cxx_destruct;
@end
