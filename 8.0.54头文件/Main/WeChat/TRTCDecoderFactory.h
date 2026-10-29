@interface TRTCDecoderFactory : NSObject <TXLiteAVDecoderFactoryInterface>
- (void *)createHEVCDecoder;
- (void)destroyHEVCDecoder:(void *)arg1;
- (void *)createAVCDecoder;
- (void)destoryAVCDecoder:(void *)arg1;
@end

