@interface TXCVideoDecodeConfig : NSObject
{
    BOOL _isRealtime; // +0x8
    int _strategy; // +0xc
    id <TXLiteAVDecoderFactoryInterface> _decoderFactory; // +0x10
}
- (id)init;
- (BOOL)isRealtime;
- (void)setIsRealtime:(BOOL)arg1;
- (int)strategy;
- (void)setStrategy:(int)arg1;
- (id)decoderFactory;
- (void)setDecoderFactory:(id)arg1;
- (void).cxx_destruct;
@end

