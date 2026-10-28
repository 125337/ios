@interface TingPlatformStreamPlayer : NSObject <TingStreamPlayer>
{
    TingPlatformStreamPlayerContext mContext; // +0x8
    BOOL _mForceStop; // +0x50
    int _mSampleRate; // +0x54
    int _mSampleFormat; // +0x58
    int _mChannels; // +0x5c
    int _mAQBufferStopCount; // +0x60
    int _mBufferHasMore; // +0x64
    int _mAudioDataOff; // +0x68
    int _mBufferWaterLevel; // +0x6c
    int _mBufferCount; // +0x70
    NSMutableArray * _mDataArray; // +0x78
    NSCondition * _mArrayCondition; // +0x80
    AVAudioFormat * _mAudioFormat; // +0x88
    NSData * _mAudioData; // +0x90
    id <TingStreamPlayerListener> _mListener; // +0x98
    TingPlatformStreamPlayerStateMachine * _mStateMachine; // +0xa0
}
- (id)init;
- (void)dealloc;
- (void)releaseAudioQueueInner;
- (void)releaseAudioQueue;
- (void)setMetaInfo:(int)arg1 sampleRate:(int)arg2 sampleFormat:(int)arg3 channelCount:(int)arg4;
- (BOOL)initAudioQueueWithsampleRate:(int)arg1 sampleFormat:(int)arg2 channelCount:(int)arg3;
- (void)enqueueBuffer:(id)arg1 hasMore:(BOOL)arg2;
- (id)dequeueBuffer;
- (void)clearQueue;
- (void)startInner;
- (void)start;
- (void)pauseInner;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)resetInner;
- (void)reset;
- (void)setVolume:(float)arg1;
- (void)setStreamPlayerListener:(id)arg1;
- (BOOL)tryDoOp:(unsigned long long)arg1;
- (id)mDataArray;
- (void)setMDataArray:(id)arg1;
- (id)mArrayCondition;
- (void)setMArrayCondition:(id)arg1;
- (id)mAudioFormat;
- (void)setMAudioFormat:(id)arg1;
- (int)mSampleRate;
- (void)setMSampleRate:(int)arg1;
- (int)mSampleFormat;
- (void)setMSampleFormat:(int)arg1;
- (int)mChannels;
- (void)setMChannels:(int)arg1;
- (BOOL)mForceStop;
- (void)setMForceStop:(BOOL)arg1;
- (int)mAQBufferStopCount;
- (void)setMAQBufferStopCount:(int)arg1;
- (int)mBufferHasMore;
- (void)setMBufferHasMore:(int)arg1;
- (id)mAudioData;
- (void)setMAudioData:(id)arg1;
- (int)mAudioDataOff;
- (void)setMAudioDataOff:(int)arg1;
- (int)mBufferWaterLevel;
- (void)setMBufferWaterLevel:(int)arg1;
- (int)mBufferCount;
- (void)setMBufferCount:(int)arg1;
- (id)mListener;
- (void)setMListener:(id)arg1;
- (id)mStateMachine;
- (void)setMStateMachine:(id)arg1;
- (void).cxx_destruct;
@end
