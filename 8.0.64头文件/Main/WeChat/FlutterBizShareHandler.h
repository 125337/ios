@interface FlutterBizShareHandler : NSObject <ForwardMessageLogicDelegate, WCCommitViewResultDelegate, RecentForwardScrollViewDelegate, MMScrollActionSheetDelegate>
{
    MMFlutterViewController<BrandTLViewControllerProtocol> * _viewController; // +0x8
    ForwardMessageLogicController * _forwardMsgLogic; // +0x10
    MMScrollActionSheet * _shareActionSheet; // +0x18
    NSMutableDictionary * _downloadingImgInfo; // +0x20
}
- (id)init;
- (void)shareToContact:(id)arg1 targetContact:(id)arg2;
- (void)shareToTimeline:(id)arg1;
- (void)showShareMenuInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)shareWithAppMsg:(id)arg1 targetContact:(id)arg2;
- (void)shareWithImage:(id)arg1 targetContact:(id)arg2;
- (void)shareAppMsgToTimeline:(id)arg1;
- (void)shareImageToTimeline:(id)arg1;
- (void)saveImage2Local:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(BOOL)arg4;
- (id)genKeyForUrl:(id)arg1;
- (id)imageWithData:(id)arg1;
- (id)tryGetResource:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)forwardMsgLogic;
- (void)setForwardMsgLogic:(id)arg1;
- (id)shareActionSheet;
- (void)setShareActionSheet:(id)arg1;
- (id)downloadingImgInfo;
- (void)setDownloadingImgInfo:(id)arg1;
- (void).cxx_destruct;
@end
