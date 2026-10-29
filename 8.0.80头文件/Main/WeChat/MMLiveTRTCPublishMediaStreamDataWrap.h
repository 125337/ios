@interface MMLiveTRTCPublishMediaStreamDataWrap : NSObject
{
    TRTCPublishTarget * _publishTarget; // +0x8
    TRTCStreamEncoderParam * _streamEncoderParam; // +0x10
    TRTCStreamMixingConfig * _streamMixingConfig; // +0x18
}
- (id)initWithPublishTarget:(id)arg1 encoderParam:(id)arg2 mixingConfig:(id)arg3;
- (id)publishTarget;
- (void)setPublishTarget:(id)arg1;
- (id)streamEncoderParam;
- (void)setStreamEncoderParam:(id)arg1;
- (id)streamMixingConfig;
- (void)setStreamMixingConfig:(id)arg1;
- (void).cxx_destruct;
@end
