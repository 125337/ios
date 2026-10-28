@interface WCCardVideoViewController : MMUIViewController <WCActionSheetDelegate>
{
    SightView * _sightView; // +0x70
    SightIconView * _iconView; // +0x78
    UIImageView * _originImageView; // +0x80
    MMUIWindow * _fullScreenWindow; // +0x88
    NSString * _videoPath; // +0x90
    id /* block */ _closeBlock; // +0x98
}
- (id)initWithWindow:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)sightView;
- (id)iconView;
- (void)longPressDidSelected;
- (void)tapDidSelected;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onSavedVideoAlbum;
- (void)clearSubviews;
- (void)tryToPlayWithVideoPath:(id)arg1;
- (void)configCloseBlock:(id /* block */)arg1;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)setSightView:(id)arg1;
- (void)setIconView:(id)arg1;
- (id)originImageView;
- (void)setOriginImageView:(id)arg1;
- (id)fullScreenWindow;
- (void)setFullScreenWindow:(id)arg1;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
