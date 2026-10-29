@interface GameVideoPreviewController : GameCenterNativeVc <GameVideoEditViewControllerDelegate>
{
    GameHaowanAlbumVideoItem * _videoItem; // +0x68
    id /* block */ _resultBlock; // +0x70
    id <GameVideoPreviewControllerDelegate> _delegate; // +0x78
    id <GameVideoPreviewDataSource> _dataSource; // +0x80
    WCPlayerView * _playerView; // +0x88
    MMWebImageView * _imageView; // +0x90
}
- (id)initWithVideoItem:(id)arg1 andCompletion:(id /* block */)arg2;
- (void)viewDidLoad;
- (void)goBack;
- (void)setupBottomViews;
- (void)addTagViewsToContainer:(id)arg1;
- (void)goEditor;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)gameVideoEditController:(id)arg1 didFinishWithFilePath:(id)arg2 withExtra:(id)arg3;
- (void)gameVideoEditController:(id)arg1 didFailedWithError:(id)arg2;
- (void)notifySucceedWithVideoInfo:(id)arg1;
- (void)notifyErrorResult:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (void).cxx_destruct;
@end

