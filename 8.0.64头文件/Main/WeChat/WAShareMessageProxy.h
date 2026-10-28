@interface WAShareMessageProxy : NSObject <ForwardMessageLogicDelegate, IWAShareMessageServiceProtocol>
{
    BOOL _isSharing; // +0x8
    ForwardMessageLogicController * _forwardLogicController; // +0x10
    id /* block */ _completion; // +0x18
    WAWebViewController * _webVC; // +0x20
}
+ (id)sharedInstance;
+ (void)shareScreenshotWithAssetId:(id)arg1 webVC:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)shareScreenshotWithAssetId:(id)arg1 webVC:(id)arg2 completion:(id /* block */)arg3;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (id)getCurrentViewController;
- (BOOL)isSharing;
- (void)setIsSharing:(BOOL)arg1;
- (id)forwardLogicController;
- (void)setForwardLogicController:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)webVC;
- (void)setWebVC:(id)arg1;
- (void).cxx_destruct;
@end
