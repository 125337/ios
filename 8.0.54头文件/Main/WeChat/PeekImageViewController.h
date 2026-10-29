@interface PeekImageViewController : UIViewController <WCFacadeExt, IDownloadImageExt, IMsgExt, WCForceTouchPopProtocol>
{
    CMessageWrap * _msgWrap; // +0x8
    UIViewController * previewFromController; // +0x10
    UIView * previewSourceView; // +0x18
    UIViewController * _fromViewController; // +0x20
    NSArray * _previewActions; // +0x28
    UIImageView * _imageView; // +0x30
    WCImageView * _wcImageView; // +0x38
    ImageMessageCellView * _imgCellView; // +0x40
}
- (id)initWithImageCellView:(id)arg1 fromController:(id)arg2;
- (id)initWithWCImageView:(id)arg1 fromController:(id)arg2;
- (void)loadView;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)reloadImage;
- (void)startDownloadImg:(BOOL)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnDownloadImageFail:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)canPop;
- (void)commitViewController;
- (id)previewActionItems;
- (id)previewFromController;
- (void)setPreviewFromController:(id)arg1;
- (id)previewSourceView;
- (void)setPreviewSourceView:(id)arg1;
- (id)fromViewController;
- (void)setFromViewController:(id)arg1;
- (id)previewActions;
- (void)setPreviewActions:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)wcImageView;
- (void)setWcImageView:(id)arg1;
- (id)imgCellView;
- (void)setImgCellView:(id)arg1;
- (void).cxx_destruct;
@end

