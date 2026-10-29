@interface WCFinderVideoTemplateSelectViewController : WCFinderTemplateSelectBasicViewController <MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate>
{
    id <WCFinderVideoTemplateSelectVCDelegate> _delegate; // +0x70
    unsigned long long _enterScene; // +0x78
    AVPlayer * _player; // +0x80
    AVPlayerLayer * _playerLayer; // +0x88
    NSString * _currentPlayUrl; // +0x90
}
- (void)viewDidLoad;
- (void)addNotificationObserver;
- (void)removeNotificationObserver;
- (void)onPlayerPlayToEnd:(id)arg1;
- (void)setupDisplayView;
- (void)playVideo;
- (void)pauseVideo;
- (id)createViewModel;
- (void)reloadData;
- (void)relayoutView;
- (void)onClickCancel;
- (void)onClickDone;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)onSightCameraCancel:(id)arg1;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)playerLayer;
- (void)setPlayerLayer:(id)arg1;
- (id)currentPlayUrl;
- (void)setCurrentPlayUrl:(id)arg1;
- (void).cxx_destruct;
@end
