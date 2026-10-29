@interface AVAudioPlayWraper : MMUserService <MMServiceProtocol, AVAudioPlayerDelegate>
{
    AVAudioPlayer * audioPlayer; // +0x8
}
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)playWithPath:(id)arg1;
- (void)playWithPath:(id)arg1 volume:(float)arg2;
- (void).cxx_destruct;
@end

