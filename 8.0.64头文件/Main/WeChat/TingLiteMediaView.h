@interface TingLiteMediaView : UIView <TingItemDataServiceExtension, TingFlowPlayerNotification>
{
    BOOL _disableMinimizeWhenMusicStop; // +0x8
    BOOL _muted; // +0x9
    int _playScene; // +0xc
    TingLyricsView * _lyricView; // +0x10
    id <TingFlowPlayerProtocol> _player; // +0x18
    TingFlowPlayerConfiguration * _playerConfiguration; // +0x20
    NSString * _coverUrlString; // +0x28
    NSString * _listenId; // +0x30
    TingItem * _tingItem; // +0x38
    MusicDefualtImageView * _coverView; // +0x40
}
- (id)initWithListenId:(id)arg1;
- (id)initWithMusicInfo:(id)arg1;
- (id)initWithTingItem:(id)arg1;
- (void)commentInit;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setCoverUrlString:(id)arg1;
- (id)displayCoverUrlString;
- (id)generatePlayerConfiguration;
- (void)startPlay;
- (BOOL)bindExistedPlayerAndPlay;
- (void)playAfterBindOrCreate;
- (void)pausePlay;
- (void)resumePlay;
- (void)stopPlay;
- (void)setupPlayer:(id)arg1;
- (void)setMinimizeWindowShowing:(BOOL)arg1;
- (BOOL)isCurrentActivePlayerPlayingSameItem;
- (BOOL)bindOrCreateNewPlayer;
- (void)creatPlayerIfNeeded;
- (id)movePlayerOut;
- (void)becomeResidentPlayer;
- (void)onListenIdAvailable:(id)arg1;
- (void)releasePlayer;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onStatusChanged:(int)arg3;
- (id)lyricView;
- (id)coverView;
- (void)onTingItemUpdatedWithId:(id)arg1 item:(id)arg2;
- (void)onTingItemListenIdAvailable:(id)arg1 item:(id)arg2;
- (void)setLyricView:(id)arg1;
- (int)playScene;
- (void)setPlayScene:(int)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)playerConfiguration;
- (void)setPlayerConfiguration:(id)arg1;
- (BOOL)disableMinimizeWhenMusicStop;
- (void)setDisableMinimizeWhenMusicStop:(BOOL)arg1;
- (BOOL)isMuted;
- (void)setMuted:(BOOL)arg1;
- (id)coverUrlString;
- (id)listenId;
- (void)setListenId:(id)arg1;
- (id)tingItem;
- (void)setTingItem:(id)arg1;
- (void)setCoverView:(id)arg1;
- (void).cxx_destruct;
@end
