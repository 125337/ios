@interface GameHaowanTabViewController : GameCenterNativeVc <MMImagePickerManagerDelegate>
{
    NSArray * _albumInfos; // +0x70
    MMImagePickerManagerOptionObj * _imagePickerManagerOptionObj; // +0x78
    BOOL _ignoreVideoPreview; // +0x80
    BOOL _isInPreview; // +0x81
    id <GameVideoAlbumControllerDelegate> _delegate; // +0x88
    id <MMImagePickerManagerDelegate> _imagePickerDelegate; // +0x90
    unsigned long long _galleryType; // +0x98
    unsigned long long _defaultSelectTab; // +0xa0
    MMUIButton * _currentTitleButton; // +0xa8
    MMUIViewController * _currentTabVc; // +0xb0
    GameVideoAlbumController * _myVideoTabVc; // +0xb8
    UIView * _indicatorView; // +0xc0
    MMAssetPickerController * _albumViewController; // +0xc8
    UINavigationController * _albumControlCenter; // +0xd0
    MMUIButton * _albumTabBtn; // +0xd8
    MMUIButton * _gameVideoTabBtn; // +0xe0
}
- (id)initWithAlbumInfos:(id)arg1 imagePickerManagerOptionObj:(id)arg2;
- (void)viewDidLoad;
- (void)configTabbuttonStyle:(id)arg1;
- (void)setupTitleButton;
- (void)determinDefaultSelectTab;
- (void)selectHaoWanTab:(unsigned long long)arg1;
- (BOOL)useTransparentNavibar;
- (void)initAlbumViewController;
- (void)initVideoAlbumViewController;
- (void)clickTitleLeft:(id)arg1;
- (void)clickTitleRight:(id)arg1;
- (void)setCurrentTitleButton:(id)arg1;
- (void)setCurrentTabVc:(id)arg1;
- (id)myVideoTabVc;
- (void)onClose;
- (void)trackEventExit;
- (void)reportWithCurrenTabPosition:(long long)arg1 action:(long long)arg2;
- (id)buildReportWithCurrenTabPosition:(long long)arg1 action:(long long)arg2;
- (id)buildReportWithUiarea:(long long)arg1 position:(long long)arg2 action:(long long)arg3;
- (id)buildMyLocalVideoWithPosition:(long long)arg1 action:(long long)arg2;
- (id)reportObjWithPosition:(long long)arg1 action:(long long)arg2;
- (id)buildTrackEventProps:(id /* block */)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithAsset:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidSkip:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onImagePickerManagerStartPreview;
- (void)onImagePickerManagerCancelPreview;
- (void)onSelectFinish:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)imagePickerDelegate;
- (void)setImagePickerDelegate:(id)arg1;
- (unsigned long long)galleryType;
- (void)setGalleryType:(unsigned long long)arg1;
- (BOOL)ignoreVideoPreview;
- (void)setIgnoreVideoPreview:(BOOL)arg1;
- (unsigned long long)defaultSelectTab;
- (void)setDefaultSelectTab:(unsigned long long)arg1;
- (id)currentTitleButton;
- (id)currentTabVc;
- (void)setMyVideoTabVc:(id)arg1;
- (id)indicatorView;
- (void)setIndicatorView:(id)arg1;
- (id)albumViewController;
- (void)setAlbumViewController:(id)arg1;
- (id)albumControlCenter;
- (void)setAlbumControlCenter:(id)arg1;
- (id)albumTabBtn;
- (void)setAlbumTabBtn:(id)arg1;
- (id)gameVideoTabBtn;
- (void)setGameVideoTabBtn:(id)arg1;
- (BOOL)isInPreview;
- (void)setIsInPreview:(BOOL)arg1;
- (void).cxx_destruct;
@end
