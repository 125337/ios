@interface EditVideoMusicController : MMObject <EditVideoBGMPlayerDelegate, WCAudioModuleDelegate>
{
    BOOL _isBGMPlaying; // +0x8
    NSString * _audioModuleIdentifier; // +0x10
    AVAsset * _avAsset; // +0x18
    unsigned long long _previousRequestId; // +0x20
    NSMutableArray * _musicList; // +0x28
    unsigned long long _entranceType; // +0x30
    unsigned long long _preferDuration; // +0x38
    RecommendedMusicInfo * _patMusicInfo; // +0x40
    NSMutableArray * _previewImages; // +0x48
    NSMutableArray * _images; // +0x50
    EditVideoBGMPlayer * _bgmPlayer; // +0x58
    NSMutableArray * _musicUpdateBlocks; // +0x60
    id /* block */ _playerReadyToPlayBlock; // +0x68
    id /* block */ _playerPlayToEndBlock; // +0x70
    id /* block */ _playerTimeControlStatusChangeBlock; // +0x78
}
+ (unsigned long long)musicBussidWithEntranceType:(unsigned long long)arg1;
- (id)initWithAvAsset:(id)arg1;
- (id)initWithImageDataArray:(id)arg1;
- (id)initWithImages:(id)arg1;
- (id)bgmPlayer;
- (id)musicUpdateBlocks;
- (void)setPlayerPlayToEndBlock:(id /* block */)arg1;
- (void)setPlayerReadyToPlayBlock:(id /* block */)arg1;
- (void)setPlayerTimeControlStatusChangeBlock:(id /* block */)arg1;
- (void)addMusicUpdateBlock:(id /* block */)arg1;
- (void)fetchMusicAutoPlay:(BOOL)arg1;
- (void)playLocalMusic:(BOOL)arg1;
- (int)getMusicBusinessId;
- (void)processGetMusicsResp:(unsigned long long)arg1 andMusics:(id)arg2 play:(BOOL)arg3;
- (void)playMusicAtIndex:(unsigned long long)arg1;
- (void)playMusic:(id)arg1;
- (void)pause;
- (void)clearPlayer;
- (void)resume;
- (void)resumeIfNeed;
- (struct)currentPlayerTime;
- (double)currentPlayerItemDuration;
- (long long)currentPlayerTimeControlStatus;
- (void)seekToTime:(double)arg1;
- (void)replayMusic;
- (void)addMusic:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)onEditVideoBGMPlayerReadyToPlay;
- (void)onEditVideoBGMPlayerPlaytoEnd;
- (void)onEditVideoBGMPlayerTimeControlStatusChange:(long long)arg1;
- (unsigned int)getNetWorkType;
- (void)kvReportBgmDataWithMusicIndex:(unsigned long long)arg1 isMusicOn:(BOOL)arg2;
- (id)previewImages;
- (void)audioModuleInterruptionBegin:(id)arg1 param:(id)arg2;
- (void)audioModuleInterruptionEnd:(id)arg1 param:(id)arg2;
- (void)_activeAudioModule;
- (void)_deactiveAudioModule;
- (id)_getAudioModuleIdentifier;
- (id)avAsset;
- (void)setAvAsset:(id)arg1;
- (unsigned long long)previousRequestId;
- (void)setPreviousRequestId:(unsigned long long)arg1;
- (id)musicList;
- (void)setMusicList:(id)arg1;
- (unsigned long long)entranceType;
- (void)setEntranceType:(unsigned long long)arg1;
- (unsigned long long)preferDuration;
- (void)setPreferDuration:(unsigned long long)arg1;
- (id)patMusicInfo;
- (void)setPatMusicInfo:(id)arg1;
- (void)setPreviewImages:(id)arg1;
- (id)images;
- (void)setImages:(id)arg1;
- (void)setBgmPlayer:(id)arg1;
- (void)setMusicUpdateBlocks:(id)arg1;
- (id /* block */)playerReadyToPlayBlock;
- (id /* block */)playerPlayToEndBlock;
- (id /* block */)playerTimeControlStatusChangeBlock;
- (void).cxx_destruct;
@end
