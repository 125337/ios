@interface AVAudioPlayWraper : MMUserService <MMServiceProtocol, AVAudioPlayerDelegate>
{
    AVAudioPlayer * audioPlayer; // +0x8
    id /* block */ _currentCompletion; // +0x10
}
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)playWithPath:(id)arg1;
- (void)playWithPath:(id)arg1 volume:(float)arg2;
- (void)playWithPath:(id)arg1 volume:(float)arg2 withCompletion:(id /* block */)arg3;
- (void).cxx_destruct;
@end
