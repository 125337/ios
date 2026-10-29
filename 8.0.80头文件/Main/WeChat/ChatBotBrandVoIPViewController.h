@interface ChatBotBrandVoIPViewController : ChatBotBrandBaseVoIPViewController <ChatBotBrandVoIPTalkingViewDeleget>
{
    ChatBotBrandDataReporter * _dataReporter; // +0x70
    ReportAiChatExtInfo * _reportAiChatExtInfo; // +0x78
}
- (id)initWithRoomInfo:(id)arg1 reportAiChatExtInfo:(id)arg2;
- (id)initWithRoomInfo:(id)arg1;
- (void)viewDidLoad;
- (void)setBrandReportWithPage;
- (void)fetchRoomInfo;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)layoutTalkingView;
- (void)onHeadImageClick;
- (id)genAiCarryInfo;
- (id)genStartSessionParams;
- (void)startSession;
- (int)getChatBotVoIPOpenScene;
- (BOOL)shouldInteractivePop;
- (id)dataReporter;
- (void)setDataReporter:(id)arg1;
- (id)reportAiChatExtInfo;
- (void)setReportAiChatExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
