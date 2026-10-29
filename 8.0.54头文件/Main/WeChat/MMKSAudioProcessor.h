@interface MMKSAudioProcessor : NSObject <KSAudioProcessorProtocol>
- (BOOL)prepare:(AudioStreamBasicDescription *)arg1 err:(id *)arg2;
- (void)processLPCM:(void *)arg1 len:(unsigned int *)arg2 maxLen:(unsigned int)arg3 ioNum:(unsigned int *)arg4;
- (void)seek:(double)arg1;
- (void)dispose;
- (void)preparePCMOutPutWithMaxPacketSize:(unsigned int *)arg1 audioBufferCount:(unsigned int *)arg2;
@end

