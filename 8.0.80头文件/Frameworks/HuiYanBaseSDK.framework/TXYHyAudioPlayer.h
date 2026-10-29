@interface TXYHyAudioPlayer : NSObject
{
    long long currentType; // +0x8
    NSObject<OS_dispatch_queue> * playerOperationQueue; // +0x10
    AVAudioPlayer * _audioPlayer; // +0x18
    AVAudioSession * _audioSession; // +0x20
    NSDictionary * _eventMap; // +0x28
    NSBundle * _audioBundle; // +0x30
}
- (id)initWithPath:(id)arg1;
- (void)playAudioFileWithType:(int)arg1;
- (void)playAudioFile:(id)arg1;
- (void)stopAudio;
- (void)startAudio;
- (id)createFilePath:(long long)arg1;
- (id)audioSession;
- (id)eventMap;
- (id)audioPlayer;
- (void)setAudioPlayer:(id)arg1;
- (void)setAudioSession:(id)arg1;
- (void)setEventMap:(id)arg1;
- (id)audioBundle;
- (void)setAudioBundle:(id)arg1;
- (void).cxx_destruct;
@end
