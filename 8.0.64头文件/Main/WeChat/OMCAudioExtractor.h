@interface OMCAudioExtractor : NSObject
+ (BOOL)extractPCMWithFilePath:(id)arg1 timeRange:(struct)arg2 sampleRate:(unsigned long long)arg3 sampleFormat:(unsigned long long)arg4 channelCount:(unsigned long long)arg5 progressHandler:(id /* block */)arg6 pcmFrameHandler:(id /* block */)arg7;
@end
