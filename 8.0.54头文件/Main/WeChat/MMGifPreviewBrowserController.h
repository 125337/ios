@interface MMGifPreviewBrowserController : MMUIViewController <MMAssetPickerBrowserViewDelegate>
{
    UIImageView * m_bottomBar; // +0x68
    UIButton * m_sendButton; // +0x70
    UILabel * m_fileSizeLabel; // +0x78
    MMGifPreviewBrowserView * m_gifBrowser; // +0x80
    NSString * m_finishWording; // +0x88
    id <MMImagePickerControlCenter> _controlCenter; // +0x90
    id <MMImagePickerManagerDelegate> _delegate; // +0x98
    MMAsset * _asset; // +0xa0
}
- (void)viewDidLoad;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBeInteractivePoped;
- (void)initGifView;
- (void)initBottomBar;
- (void)hideToolBar:(BOOL)arg1;
- (void)OnCancel:(id)arg1;
- (void)OnSend:(id)arg1;
- (void)onAssetBrowserViewSingleTap:(id)arg1;
- (void)onAssetBrowserViewLoadFinished:(id)arg1;
- (id)controlCenter;
- (void)setControlCenter:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (void).cxx_destruct;
@end

