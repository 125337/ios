@interface MusicSerachFlutterViewController : MMFlutterViewController <IMusicPlayerExt>
{
    id /* block */ _sendMusicHandler; // +0x68
    id /* block */ _viewDidPopedOrDismissedHandler; // +0x70
    NSString * _toUseranme; // +0x78
    MusicCallbackApi * _flutterMusicPlayerCallBack; // +0x80
    MVImageLoader * _imageDownloader; // +0x88
}
+ (id)createInstance;
- (id)initWithToUsername:(id)arg1;
- (void)viewDidLoad;
- (void)handleSendWithMusicInfo:(id)arg1;
- (void)handleSendMusicWithMusicInfo:(id)arg1 coverImageData:(id)arg2;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (id)imageDownloader;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)arg1 musicInfo:(id)arg2 errInfo:(id)arg3;
- (long long)flutterValueFromState:(unsigned long long)arg1;
- (id /* block */)sendMusicHandler;
- (void)setSendMusicHandler:(id /* block */)arg1;
- (id /* block */)viewDidPopedOrDismissedHandler;
- (void)setViewDidPopedOrDismissedHandler:(id /* block */)arg1;
- (id)toUseranme;
- (void)setToUseranme:(id)arg1;
- (id)flutterMusicPlayerCallBack;
- (void)setFlutterMusicPlayerCallBack:(id)arg1;
- (void)setImageDownloader:(id)arg1;
- (void).cxx_destruct;
@end

