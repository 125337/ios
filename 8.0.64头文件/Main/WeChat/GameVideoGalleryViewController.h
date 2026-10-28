@interface GameVideoGalleryViewController : GameCenterNativeVc <UICollectionViewDataSource, UICollectionViewDelegate, WCPlayerDownloaderExt>
{
    GameHaowanMediaWrap * _mediaWrap; // +0x70
    WCPlayerPlayArgs * _playArgs; // +0x78
    MMAlbumForGameHaowan * _album; // +0x80
    long long _currentIndex; // +0x88
    unsigned long long _galleryType; // +0x90
    id _currentAsset; // +0x98
    WCPlayerView * playerView; // +0xa0
    id <GameVideoGalleryViewControllerDelagate> _delegate; // +0xa8
    UICollectionView * _collectionView; // +0xb0
    MMProgressViewEx * _progressView; // +0xb8
}
- (id)initWithAlbum:(id)arg1 andIndex:(long long)arg2 galleryType:(unsigned long long)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupViews;
- (void)setupGoBackView;
- (void)setupActionView;
- (void)setupProgressView;
- (void)goBack;
- (void)askPerformAction;
- (void)performAction;
- (id)createPlayerView;
- (void)attachPlayerViewToCell:(id)arg1;
- (void)setupCollectionView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)playAVAsset:(id)arg1 url:(id)arg2;
- (void)performCellAction:(long long)arg1 asset:(id)arg2;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)showNewUserTips;
- (void)trackEventExplosured;
- (void)trackEventExit;
- (void)trackEventCloudTips:(id)arg1 appId:(id)arg2;
- (void)trackEventShareHaowan:(id)arg1 index:(long long)arg2;
- (void)trackEventSwitchVideo:(id)arg1 index:(long long)arg2;
- (id)reportObjWithPosition:(long long)arg1 action:(long long)arg2;
- (id)buildTrackEventProps:(id /* block */)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (void).cxx_destruct;
@end
