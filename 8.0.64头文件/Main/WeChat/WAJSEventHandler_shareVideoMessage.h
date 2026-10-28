@interface WAJSEventHandler_shareVideoMessage : WAJSEventHandler_BaseEvent <ForwardMessageLogicDelegate>
{
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x8
    NSString * m_tempVideoPath; // +0x10
    BOOL _isToSpecificContact; // +0x18
}
- (void)handleJSEvent:(id)arg1;
- (id)genForwardMessageWrapWithVideoPath:(id)arg1 thumbPath:(id)arg2;
- (id)getVideoRealPathWithPath:(id)arg1;
- (id)getThumbDataWithPath:(id)arg1;
- (id)getPackageDataWithPath:(id)arg1;
- (id)createTempVideoWithData:(id)arg1 extension:(id)arg2;
- (void)removeTempVideo;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (BOOL)isToSpecificContact;
- (void)setIsToSpecificContact:(BOOL)arg1;
- (void).cxx_destruct;
@end
