@interface TXCAudioSessionManagerDelegateAdapter : NSObject <TXCAudioSessionManagerDelegate>
{
    AudioSessionObserver * _observer; // +0x8
    scoped_refptr<lite_base::SingleThreadTaskRunner> _taskRunner; // +0x10
}
- (id)initWithObserver:(AudioSessionObserver *)arg1 taskRunner:(scoped_refptr<lite_base::SingleThreadTaskRunner>)arg2;
- (void)audioSessionDidBeginInterruption:(id)arg1;
- (void)audioSessionDidEndInterruption:(id)arg1 shouldResumeSession:(BOOL)arg2;
- (void)audioSessionDidChangeRoute:(id)arg1 reason:(unsigned long long)arg2 previousRoute:(id)arg3;
- (void)audioSessionMediaServerTerminated:(id)arg1;
- (void)audioSessionMediaServerReset:(id)arg1;
- (void)audioSession:(id)arg1 didChangeOutputVolume:(int)arg2;
- (void)audioSession:(id)arg1 didChangeOtherAppPlayoutState:(BOOL)arg2;
- (void)deviceOrientationDidChange;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

