@interface CBTAsstVoiceSelectViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, IChatBotAvatarUpdateExt>
{
    MMTableView * _tableView; // +0x70
    NSMutableArray * _voiceList; // +0x78
    WCAudioPlayer * _audioPlayer; // +0x80
    long long _playingIndex; // +0x88
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)fetchVoiceInfo;
- (void)updateVoice;
- (id)navigationBarBackgroundColor;
- (void)layoutTableView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)genCellContentView:(id)arg1 withTitle:(id)arg2;
- (void)makeVoiceCell:(id)arg1 indexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)playVoiceAtIndex:(long long)arg1;
- (void)stopVoice;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)voiceList;
- (void)setVoiceList:(id)arg1;
- (id)audioPlayer;
- (void)setAudioPlayer:(id)arg1;
- (long long)playingIndex;
- (void)setPlayingIndex:(long long)arg1;
- (void).cxx_destruct;
@end
