@interface MsgImgWeakBrowseViewController : MMUIViewController <MMImgageBrowseViewDelegate, ForwardMessageLogicDelegate, MsgDataDownloadDelegate>
{
    BOOL _playSound; // +0x68
    id <MsgImgWeakBrowseViewControllerDelegate> _delegate; // +0x70
    CMessageWrap * _messageWrap; // +0x78
    long long _type; // +0x80
    ForwardMessageLogicController * _forwardMessageLogicController; // +0x88
    MsgDataDownloadLogic * _imageDownloadLogic; // +0x90
    SightIconView * _loadingView; // +0x98
    MMImageBrowseView * _imageBrowseView; // +0xa0
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

