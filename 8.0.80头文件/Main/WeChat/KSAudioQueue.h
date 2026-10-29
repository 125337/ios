@interface KSAudioQueue : NSObject
{
    AudioStreamBasicDescription _format; // +0x8
    unsigned int _maxPacktSize; // +0x30
    NSMutableArray * _canUseQueueBuf; // +0x38
    NSMutableArray * _allQueueBuf; // +0x40
    NSError * _error; // +0x48
    float _volume; // +0x50
    float _playRate; // +0x54
    unsigned int _bufferCount; // +0x58
    id <KSAudioQueueDelegate> _delegate; // +0x60
    NSData * _magicCookie; // +0x68
    OpaqueAudioQueue * _audioQueue; // +0x70
    unsigned long long _status; // +0x78
}
- (id)initWithFormat:(AudioStreamBasicDescription *)arg1 maxPacketSize:(unsigned int)arg2 bufferCount:(unsigned int)arg3;
- (void)dealloc;
- (void)setError:(id)arg1;
- (BOOL)playedTime:(double *)arg1;
- (BOOL)prepareAudioQueue;
- (id)acquireQueueBuf:(unsigned long long *)arg1;
- (unsigned int)acquireQueueBufCnt;
- (void)returnQueueBuf:(id)arg1;
- (BOOL)enqueueBuf:(id)arg1 desNum:(unsigned int)arg2;
- (BOOL)startQueue;
- (void)stop;
- (void)pauseBeforeStopAudioQueue;
- (void)prepareStop;
- (void)playEnd;
- (BOOL)pause;
- (BOOL)resume;
- (BOOL)reset;
- (BOOL)tryStartQueue;
- (BOOL)setVolume:(float)arg1;
- (float)getCurrentVolume;
- (BOOL)setPlayRate:(float)arg1;
- (float)getCurrentPlayRate;
- (void)disposeAudioQueue;
- (void)clearData;
- (int)startAudioQueue;
- (void)handleAudioQueueOutputCallBack:(OpaqueAudioQueue *)arg1 buffer:(AudioQueueBuffer *)arg2;
- (void)handleAudioQueuePropertyCallBack:(OpaqueAudioQueue *)arg1 property:(unsigned int)arg2;
- (id)error;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)bufferCount;
- (id)magicCookie;
- (void)setMagicCookie:(id)arg1;
- (OpaqueAudioQueue *)audioQueue;
- (void)setAudioQueue:(OpaqueAudioQueue *)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
