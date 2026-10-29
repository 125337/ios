@interface MMMusicMVPreviewViewController : MMUIViewController <MMMusicMVPlayerBgViewDelegate, IMMMusicLyricServiceExt, IMusicPlayerExt, MMMVPlayerDelegate, MMMusicMVPreviewEpisodeSelectViewDelegate>
{
    BOOL _markedVideoOffsetDirty; // +0x68
    MMMVPlayer * _mvPlayer; // +0x70
    MMUIButton * _closeButton; // +0x78
    UIButton * _commitButton; // +0x80
    MMMusicMVPreviewEpisodeSelectView * _episodeSelectView; // +0x88
    UILabel * _promptLabel; // +0x90
    MMTimer * _musicMonitorTimer; // +0x98
}
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)setupSubviews;
- (void)startPostingProgress;
- (void)endPostingProgress;
- (id)trackItems;
- (void)handleTappedCloseButton;
- (void)handleTappedCommitButton;
- (id)episodeSelectViewDataSource;
- (void)episodeSelectViewDidSelectEpisodeAtIndex:(unsigned long long)arg1;
- (void)MVPlayer:(id)arg1 didUpdateEpisodeIndexFrom:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (id)mvPlayer;
- (void)setMvPlayer:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)commitButton;
- (void)setCommitButton:(id)arg1;
- (id)episodeSelectView;
- (void)setEpisodeSelectView:(id)arg1;
- (id)promptLabel;
- (void)setPromptLabel:(id)arg1;
- (id)musicMonitorTimer;
- (void)setMusicMonitorTimer:(id)arg1;
- (BOOL)markedVideoOffsetDirty;
- (void)setMarkedVideoOffsetDirty:(BOOL)arg1;
- (void).cxx_destruct;
@end

