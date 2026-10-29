@interface AACDecoderAppleImpl : NSObject
{
    OpaqueAudioConverter * _audioConverter; // +0x8
    AudioStreamBasicDescription _audioStreamBasicDescription; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)setupAudioConverter:(int)arg1 SampleRate:(int)arg2 outChannel:(int)arg3 outSamplerate:(int)arg4 Bit:(int)arg5 profile:(int)arg6;
- (id)decodeAudioFrame:(void *)arg1 withLength:(int)arg2 Pts:(long long)arg3;
@end
