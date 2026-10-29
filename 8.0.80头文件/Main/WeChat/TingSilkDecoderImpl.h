@interface TingSilkDecoderImpl : UnitRCObjcBaseClass <TingSilkDecoder>
{
    StreamAudioDecoder * mCodec; // +0x8
    int _mSampleRate; // +0x10
}
- (id)initWithSampleRate:(int)arg1;
- (void)dealloc;
- (id)decode:(id)arg1 isLastFrame:(BOOL)arg2;
- (int)mSampleRate;
- (void)setMSampleRate:(int)arg1;
@end
