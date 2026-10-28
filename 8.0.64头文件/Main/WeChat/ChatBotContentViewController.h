@interface ChatBotContentViewController : BaseMsgContentViewController
{
    BOOL _skipSessionIn; // +0x1e0
    BOOL _skipCloseReport; // +0x1e1
    unsigned int _enterScene; // +0x1e4
    NSString * _sessionId; // +0x1e8
}
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)tapImage_NodeView:(id)arg1 needEditImage:(BOOL)arg2;
- (void)tapAppNodeView:(id)arg1;
- (void)OnClickAttachmentButtonAction;
- (void)openMediaBrowser;
- (void)openCameraController;
- (void)onStreamVoiceInputButtonClick;
- (void)openFileBrowser;
- (id)getChatBotSessionReportInfo;
- (void)registerYReportSdk;
- (void)reportSessionIn;
- (void)reportForEventId:(id)arg1 params:(id)arg2;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned int)enterScene;
- (void)setEnterScene:(unsigned int)arg1;
- (BOOL)skipSessionIn;
- (void)setSkipSessionIn:(BOOL)arg1;
- (BOOL)skipCloseReport;
- (void)setSkipCloseReport:(BOOL)arg1;
- (void).cxx_destruct;
@end
