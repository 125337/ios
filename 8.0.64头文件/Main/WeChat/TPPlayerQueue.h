@interface TPPlayerQueue : NSObject
{
    void * _playingQueueKey; // +0x8
    NSObject<OS_dispatch_queue> * _playingQueue; // +0x10
}
- (id)initWithPlayingQueue:(id)arg1;
- (id)initWithPlayingQueue:(id)arg1 queueName:(id)arg2;
- (id)init;
- (void *)playingQueueKey;
- (id)playingQueue;
- (void)setPlayingQueue:(id)arg1;
- (void).cxx_destruct;
@end
