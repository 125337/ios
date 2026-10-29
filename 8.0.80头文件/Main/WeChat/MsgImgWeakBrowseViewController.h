@interface MsgImgWeakBrowseViewController : MMUIViewController <MMImgageBrowseViewDelegate, ForwardMessageLogicDelegate, MsgDataDownloadDelegate>
{
    BOOL _playSound; // +0x70
    id <MsgImgWeakBrowseViewControllerDelegate> _delegate; // +0x78
    CMessageWrap * _messageWrap; // +0x80
    long long _type; // +0x88
    ForwardMessageLogicController * _forwardMessageLogicController; // +0x90
    MsgDataDownloadLogic * _imageDownloadLogic; // +0x98
    SightIconView * _loadingView; // +0xa0
    MMImageBrowseView * _imageBrowseView; // +0xa8
}
- (id)initWithMessageWrap:(id)arg1 playSound:(BOOL)arg2 type:(long long)arg3;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)reloadData;
- (void)initExtensions;
- (void)initSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)isImageMessage;
- (id)image;
- (id)thumbImage;
- (double)maxSize;
- (void)onTapMoreBarButtonItem;
- (BOOL)canDownload;
- (void)downloadImage;
- (BOOL)canForward;
- (id)forwardMessageLogicController;
- (BOOL)canLocate;
- (void)onDownloadSuccess:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (id)getCurrentViewController;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (BOOL)playSound;
- (void)setPlaySound:(BOOL)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (void)setForwardMessageLogicController:(id)arg1;
- (id)imageDownloadLogic;
- (void)setImageDownloadLogic:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)imageBrowseView;
- (void)setImageBrowseView:(id)arg1;
- (void).cxx_destruct;
@end
