@interface AVAudioPlayerDelegateProxy : NSObject <AVAudioPlayerDelegate>
{
    id _target; // +0x8
}
+ (id)proxyWithTarget:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (id)target;
- (void)setTarget:(id)arg1;
- (void).cxx_destruct;
@end

