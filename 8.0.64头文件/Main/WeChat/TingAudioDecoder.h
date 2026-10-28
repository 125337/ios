@interface TingAudioDecoder : NSObject
+ (vector<float, std::allocator<float>>)decodeAndResampleAudioToPCMFloatData:(id)arg1 resampleRate:(double)arg2 duration:(double)arg3;
@end
