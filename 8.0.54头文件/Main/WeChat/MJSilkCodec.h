@interface MJSilkCodec : NSObject
{
    AudioCoder _encoder; // +0x8
}
+ (id)decodeToPCMFromSilkData:(id)arg1;
+ (id)decodeToAudioDataFromSilkData:(id)arg1;
+ (id)encodeToSilkFromPCMData:(id)arg1;
- (BOOL)initEncoder;
- (id)encodeFromPCMData:(id)arg1;
- (BOOL)uninitEncoder;
- (AudioCoder)encoder;
- (void)setEncoder:(AudioCoder)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

