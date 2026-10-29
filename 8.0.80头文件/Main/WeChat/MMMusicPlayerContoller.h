@interface MMMusicPlayerContoller : MMUIButton <MMMusicPlayerExt, IMusicPlayerExt>
{
    MMMusicInfo * m_musicInfo; // +0x8
    UIImage * m_imgForIdle; // +0x10
    UIImage * m_imgForIdleHL; // +0x18
    UIImage * m_imgForPlaying; // +0x20
    UIImage * m_imgForPlayingHL; // +0x28
    id <MMMusicPlayerContollerDelegate> m_playDelegate; // +0x30
    NSString * m_key; // +0x38
    long long m_playerSource; // +0x40
    long long m_contentType; // +0x48
    NSString * m_title; // +0x50
    NSString * m_photoUrl; // +0x58
    NSString * m_url; // +0x60
    NSString * m_lowBandUrl; // +0x68
    NSString * m_webUrl; // +0x70
    NSString * m_singer; // +0x78
    MMMusicShareItem * _m_musicShareItem; // +0x80
}
- (BOOL)isCurrentControllForPlayer;
- (void)updateButtonImage;
- (void)onMusicPlayStatusChanged;
- (void)onLevelMeterPeak:(float)arg1;
- (void)onBtnClicked;
- (void)onClickOnMe;
- (void)setAndPlayMusicItem:(id)arg1 clickedOnBtn:(BOOL)arg2;
- (void)playClicked:(BOOL)arg1;
- (void)setMusicListSource:(long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)addMusicItem;
- (void)setMusicInfo:(id)arg1;
- (id)getMusicInfo;
- (void)setMusicShareItem:(id)arg1;
- (id)getMusicShareItem;
- (void)setKey:(id)arg1;
- (void)setPlayerSource:(long long)arg1;
- (void)setPlayerType:(long long)arg1;
- (void)setMusicTitle:(id)arg1;
- (void)setMusicPhotoUrl:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setLowBandUrl:(id)arg1;
- (void)setMusicWebUrl:(id)arg1;
- (void)setMusicSinger:(id)arg1;
- (void)setImage:(id)arg1 HLImage:(id)arg2 forPlayerState:(long long)arg3;
- (long long)getPlayState;
- (long long)getPlayerSource;
- (id)m_musicInfo;
- (void)setM_musicInfo:(id)arg1;
- (id)m_imgForIdle;
- (void)setM_imgForIdle:(id)arg1;
- (id)m_imgForIdleHL;
- (void)setM_imgForIdleHL:(id)arg1;
- (id)m_imgForPlaying;
- (void)setM_imgForPlaying:(id)arg1;
- (id)m_imgForPlayingHL;
- (void)setM_imgForPlayingHL:(id)arg1;
- (id)m_key;
- (void)setM_key:(id)arg1;
- (long long)m_playerSource;
- (void)setM_playerSource:(long long)arg1;
- (long long)m_contentType;
- (void)setM_contentType:(long long)arg1;
- (id)m_title;
- (void)setM_title:(id)arg1;
- (id)m_photoUrl;
- (void)setM_photoUrl:(id)arg1;
- (id)m_url;
- (void)setM_url:(id)arg1;
- (id)m_lowBandUrl;
- (void)setM_lowBandUrl:(id)arg1;
- (id)m_webUrl;
- (void)setM_webUrl:(id)arg1;
- (id)m_singer;
- (void)setM_singer:(id)arg1;
- (id)m_playDelegate;
- (void)setM_playDelegate:(id)arg1;
- (id)m_musicShareItem;
- (void)setM_musicShareItem:(id)arg1;
- (void).cxx_destruct;
@end
