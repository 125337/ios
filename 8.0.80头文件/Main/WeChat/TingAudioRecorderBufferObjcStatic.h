@interface TingAudioRecorderBufferObjcStatic : NSObject
+ (id)convertForFormatKey:(id)arg1 buffer:(id)arg2;
+ (void)convertToPCMBuffer:(id)arg1 callback:(id /* block */)arg2 sampleRate:(unsigned int)arg3 audioFormat:(unsigned int)arg4 channels:(unsigned int)arg5;
+ (void)convertToPCMBuffer:(id)arg1 callback:(id /* block */)arg2 sampleRate:(unsigned int)arg3 audioFormat:(unsigned int)arg4;
+ (void)convertToPCMBuffer:(id)arg1 callback:(id /* block */)arg2 sampleRate:(unsigned int)arg3;
+ (void)convertToPCMBuffer:(id)arg1 callback:(id /* block */)arg2;
+ (id)convertAVAudioPCMBufferToNSData:(id)arg1;
+ (void)convertPCMBuffer:(id)arg1 targetFormat:(id)arg2 targetConverter:(id)arg3 completionHandler:(id /* block */)arg4;
@end
