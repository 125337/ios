@interface MMLiveMusicDataItem : NSObject
{
    unsigned int _songId; // +0x8
    unsigned int _songtype; // +0xc
    NSString * _songPlayUrl; // +0x10
    NSString * _listenId; // +0x18
    unsigned long long _playState; // +0x20
}
- (id)convertToBriefMusicInfo;
- (unsigned int)songId;
- (void)setSongId:(unsigned int)arg1;
- (id)songPlayUrl;
- (void)setSongPlayUrl:(id)arg1;
- (id)listenId;
- (void)setListenId:(id)arg1;
- (unsigned int)songtype;
- (void)setSongtype:(unsigned int)arg1;
- (unsigned long long)playState;
- (void)setPlayState:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
