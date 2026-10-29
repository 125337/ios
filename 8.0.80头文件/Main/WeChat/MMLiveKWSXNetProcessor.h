@interface MMLiveKWSXNetProcessor : NSObject <MMLiveKWSEngine>
{
    void * _engine; // +0x8
    BOOL _isSessionActive; // +0x10
    int _dropCount; // +0x14
    id <MMLiveKWSEngineDelegate> _delegate; // +0x18
    NSObject<OS_dispatch_semaphore> * _frameSemaphore; // +0x20
    NSObject<OS_dispatch_queue> * _processQueue; // +0x28
}
- (id)initWithDelegate:(id)arg1;
- (BOOL)isEngineReady;
- (id)findFileInDir:(id)arg1 name:(id)arg2;
- (BOOL)loadResourceWithPath:(id)arg1 resName:(id)arg2;
- (void)processAudioData:(id)arg1 channels:(int)arg2 sampleRate:(int)arg3;
- (void)_processAudioDataImpl:(id)arg1 channels:(int)arg2 sampleRate:(int)arg3;
- (void)feedSamplesToEngine:(const short *)arg1 count:(unsigned long long)arg2;
- (void)releaseEngine;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isSessionActive;
- (void)setIsSessionActive:(BOOL)arg1;
- (int)dropCount;
- (void)setDropCount:(int)arg1;
- (id)frameSemaphore;
- (void)setFrameSemaphore:(id)arg1;
- (id)processQueue;
- (void)setProcessQueue:(id)arg1;
- (void).cxx_destruct;
@end
