@interface CBTCoopV3FileService : NSObject <ViewAppMsgControllerDelegate, CBTCoopV3NotificationObserverBase>
{
    CBTCoopV3NotificationObserver * _observer; // +0x8
    ViewAppMsgController * _appMsgController; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (void)onNotification:(id)arg1;
- (id)supportedPathPrefixes;
- (void)handleCoopMessage:(id)arg1 payload:(id)arg2;
- (void)openFileWithPayload:(id)arg1;
- (BOOL)prepareLocalFileForPreview:(id)arg1 messageWrap:(id)arg2;
- (id)buildMessageWrapFromPayload:(id)arg1;
- (void)previewImage:(id)arg1 originFrame:(CGRect)arg2;
- (id)appMsgController;
- (void)setAppMsgController:(id)arg1;
- (void).cxx_destruct;
@end
