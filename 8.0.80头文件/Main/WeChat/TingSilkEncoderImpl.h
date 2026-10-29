@interface TingSilkEncoderImpl : UnitRCObjcBaseClass <TingSilkEncoder>
{
    AudioCoder * mCodec; // +0x8
    int _mSampleRate; // +0x10
    int _mEncBitRate; // +0x14
    int _mEncLimitLen; // +0x18
    int _mLeftLen; // +0x1c
    NSMutableData * _mOutputCache; // +0x20
    NSMutableData * _mLeftData; // +0x28
}
- (id)initWithSampleRate:(int)arg1;
- (void)dealloc;
- (id)encode:(id)arg1 isLastFrame:(BOOL)arg2;
- (int)mSampleRate;
- (void)setMSampleRate:(int)arg1;
- (int)mEncBitRate;
- (void)setMEncBitRate:(int)arg1;
- (int)mEncLimitLen;
- (void)setMEncLimitLen:(int)arg1;
- (id)mOutputCache;
- (void)setMOutputCache:(id)arg1;
- (id)mLeftData;
- (void)setMLeftData:(id)arg1;
- (int)mLeftLen;
- (void)setMLeftLen:(int)arg1;
- (void).cxx_destruct;
@end
