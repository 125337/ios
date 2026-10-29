@interface TXLiveExternalDecoderFactoryWrapper : NSObject <TXLiteAVDecoderFactoryInterface>
{
    id _decoderFactory; // +0x8
}
- (id)initWithDecoder:(id)arg1;
- (void *)createHEVCDecoder;
- (void)destroyHEVCDecoder:(void *)arg1;
- (void *)createAVCDecoder;
- (void)destoryAVCDecoder:(void *)arg1;
- (void).cxx_destruct;
@end

