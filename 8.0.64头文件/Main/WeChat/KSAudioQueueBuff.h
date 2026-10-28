@interface KSAudioQueueBuff : NSObject
{
    AudioQueueBuffer * _audioBuffer; // +0x8
    unsigned int _bufferSize; // +0x10
    AudioStreamPacketDescription[16] _packetDes; // +0x18
}
+ (unsigned int)packDesCnt;
- (id)initWithAudioBuf:(AudioQueueBuffer *)arg1 size:(unsigned int)arg2;
- (void)dealloc;
- (void)dispose:(OpaqueAudioQueue *)arg1;
- (AudioStreamPacketDescription *)audioDes;
- (AudioQueueBuffer *)audioBuffer;
- (unsigned int)bufSize;
@end
