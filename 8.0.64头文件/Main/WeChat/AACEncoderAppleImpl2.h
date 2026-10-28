@interface AACEncoderAppleImpl2 : NSObject
{
    OpaqueAudioConverter * converterRef_; // +0x8
    AudioEncodeParams params_; // +0x10
    CopyOnWriteBuffer buffer_; // +0x40
    unsigned int current_bitrate_bps_; // +0x58
}
- (id)init;
- (void)dealloc;
- (void)disposeConverter;
- (BOOL)createAudioConverterWithParams:(const AudioEncodeParams *)arg1;
- (unsigned int)getProperBitrate:(int)arg1 channels:(int)arg2 inputBitrateBps:(int)arg3;
- (BOOL)setBitrateInBPS:(unsigned long long)arg1;
- (int)Encode:(span<const unsigned char, 18446744073709551615UL>)arg1;
- (shared_ptr<liteav::audio::AudioFrame>)encodeAudioFrame:(shared_ptr<liteav::audio::AudioFrame>)arg1;
- (unsigned long long)frameLengthInBytes;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
