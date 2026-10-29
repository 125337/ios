@interface WAUniversalAudioPlayerInfo : NSObject
{
    unsigned long long _playerState; // +0x8
    WAUniversalAudioInfo * _audioInfo; // +0x10
}
- (unsigned long long)playerState;
- (void)setPlayerState:(unsigned long long)arg1;
- (id)audioInfo;
- (void)setAudioInfo:(id)arg1;
- (void).cxx_destruct;
@end

