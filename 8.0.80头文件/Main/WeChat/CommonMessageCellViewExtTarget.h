@interface CommonMessageCellViewExtTarget : NSObject <ChatBackgroundExt, IMessageNodeStatusExt>
{
    NSString * _referMsgStatusKey; // +0x8
    id <CommonMessageCellViewExtTargetDelegate> _delegate; // +0x10
}
- (void)registerExtension;
- (void)unregisterExtension;
- (void)onChatBackgroundChanged:(id)arg1;
- (void)observeReferMsgStatusWithKey:(id)arg1;
- (void)stopObserveReferMsgStatus;
- (void)dealloc;
- (void)onMessageUpdateStatus;
- (void)onMessageDownloadThumbImageOK;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
