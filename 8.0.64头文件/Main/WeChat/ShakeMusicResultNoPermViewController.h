@interface ShakeMusicResultNoPermViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, ShakeMusicResultNoPermMusicCellViewDelegate>
{
    BOOL _shouldUseCustomPopAnimation; // +0x70
    BOOL _shouldLayoutHeaderView; // +0x71
    BOOL _lyricLocatingWithAnim; // +0x72
    BOOL _isScrollingLyrics; // +0x73
    id /* block */ _onPopBlock; // +0x78
    unsigned long long _openScene; // +0x80
    MMWebImageView * _musicCoverBgImageView; // +0x88
    MMUIButton * _closeButton; // +0x90
    MMUILabel * _recognitionResultLabel; // +0x98
    UIView * _tableHeaderView; // +0xa0
    MMWebImageView * _musicCoverImageView; // +0xa8
    MMUILabel * _musicSongNameLabel; // +0xb0
    MMUILabel * _musicSingerNameLabel; // +0xb8
    MMTableView * _lyricsTableView; // +0xc0
    MMUILabel * _lyricsTableViewEmptyLabel; // +0xc8
    UIView * _blackLineView; // +0xd0
    MMUILabel * _copyrightInfoLabel; // +0xd8
    UIImageView * _copyrightInfoIconView; // +0xe0
    MMTableView * _musicTableView; // +0xe8
    ShakeMusicInfo * _shakeMusicInfo; // +0xf0
    NSArray * _musicInfoArr; // +0xf8
    NSArray * _lyricsArr; // +0x100
    NSArray * _lyricsTimeArr; // +0x108
    MMTimer * _lyricsTimer; // +0x110
    double _lyricsTimeInterval; // +0x118
    long long _currentIndex; // +0x120
}
- (id)initWithShakeMusicInfo:(id)arg1;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)dealloc;
- (void)setupSubviews;
- (void)loadData;
- (void)layoutInternal;
- (void)viewDidLayoutSubviews;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)musicCoverBgImageView;
- (id)closeButton;
- (id)recognitionResultLabel;
- (id)musicTableView;
- (id)tableHeaderView;
- (id)musicCoverImageView;
- (id)musicSongNameLabel;
- (id)musicSingerNameLabel;
- (id)lyricsTableView;
- (id)lyricsTableViewEmptyLabel;
- (id)blackLineView;
- (id)copyrightInfoLabel;
- (id)copyrightInfoIconView;
- (void)closeButtonDidClick;
- (id)getMusicShareItem:(id)arg1;
- (id)generateEmptyMVModel;
- (void)startTimer;
- (void)endTimer;
- (void)timerCallback;
- (void)cellPlayButtonClick:(id)arg1 withIndex:(long long)arg2;
- (void)cellInfoButtonClick:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id /* block */)onPopBlock;
- (void)setOnPopBlock:(id /* block */)arg1;
- (unsigned long long)openScene;
- (void)setOpenScene:(unsigned long long)arg1;
- (void)setMusicCoverBgImageView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setRecognitionResultLabel:(id)arg1;
- (void)setTableHeaderView:(id)arg1;
- (void)setMusicCoverImageView:(id)arg1;
- (void)setMusicSongNameLabel:(id)arg1;
- (void)setMusicSingerNameLabel:(id)arg1;
- (void)setLyricsTableView:(id)arg1;
- (void)setLyricsTableViewEmptyLabel:(id)arg1;
- (void)setBlackLineView:(id)arg1;
- (void)setCopyrightInfoLabel:(id)arg1;
- (void)setCopyrightInfoIconView:(id)arg1;
- (void)setMusicTableView:(id)arg1;
- (id)shakeMusicInfo;
- (void)setShakeMusicInfo:(id)arg1;
- (id)musicInfoArr;
- (void)setMusicInfoArr:(id)arg1;
- (id)lyricsArr;
- (void)setLyricsArr:(id)arg1;
- (id)lyricsTimeArr;
- (void)setLyricsTimeArr:(id)arg1;
- (id)lyricsTimer;
- (void)setLyricsTimer:(id)arg1;
- (double)lyricsTimeInterval;
- (void)setLyricsTimeInterval:(double)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (BOOL)shouldUseCustomPopAnimation;
- (void)setShouldUseCustomPopAnimation:(BOOL)arg1;
- (BOOL)shouldLayoutHeaderView;
- (void)setShouldLayoutHeaderView:(BOOL)arg1;
- (BOOL)lyricLocatingWithAnim;
- (void)setLyricLocatingWithAnim:(BOOL)arg1;
- (BOOL)isScrollingLyrics;
- (void)setIsScrollingLyrics:(BOOL)arg1;
- (void).cxx_destruct;
@end
