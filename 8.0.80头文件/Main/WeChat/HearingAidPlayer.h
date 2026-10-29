@interface HearingAidPlayer : NSObject <AVAudioPlayerDelegate>
{
    NSString * _playFile; // +0x8
    AVAudioPlayer * _audioPlayer; // +0x10
    id /* block */ _completionBlock; // +0x18
}
- (id)init;
- (void)dealloc;
- (BOOL)activeAudioSession;
- (BOOL)playWAVFromBundle:(id)arg1 onComplete:(id /* block */)arg2;
- (BOOL)playWAVFromPath:(id)arg1 isLoop:(BOOL)arg2 onComplete:(id /* block */)arg3;
- (BOOL)playWAVFromPath:(id)arg1 onComplete:(id /* block */)arg2;
- (BOOL)play;
- (void)stop;
- (void)setLoopingPlay:(unsigned char)arg1;
- (BOOL)isPlaying;
- (double)currentTime;
- (double)duration;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (id)playFile;
- (void)setPlayFile:(id)arg1;
- (id)audioPlayer;
- (void)setAudioPlayer:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
