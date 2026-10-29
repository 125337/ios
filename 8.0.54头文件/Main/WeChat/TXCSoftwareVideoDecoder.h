@interface TXCSoftwareVideoDecoder : TXCVideoBindableObject <TXIVideoDecoderInterface>
{
    id <TXIVideoDecoderSupervisorInterface> supervisor; // +0x8
}
+ (BOOL)isSupported;
- (id)initWithQueue:(id)arg1 config:(id)arg2;
- (void)resetDecoderOnComplete:(id /* block */)arg1;
- (id)supervisor;
- (void)setSupervisor:(id)arg1;
- (void).cxx_destruct;
@end

