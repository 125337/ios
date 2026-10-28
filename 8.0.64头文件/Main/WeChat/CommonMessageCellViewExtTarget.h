@interface CommonMessageCellViewExtTarget : NSObject <ChatBackgroundExt>
{
    id <CommonMessageCellViewExtTargetDelegate> _delegate; // +0x8
}
- (void)registerExtension;
- (void)unregisterExtension;
- (void)onChatBackgroundChanged:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
