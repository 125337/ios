@interface CBTBrandMultiToOneViewController : ChatBotBrandVoIPViewController
{
    ChatBotBrandDataReporter * _dataReporter; // +0x70
    ReportAiChatExtInfo * _reportAiChatExtInfo; // +0x78
}
- (id)initWithRoomInfo:(id)arg1 reportAiChatExtInfo:(id)arg2;
- (id)initWithRoomInfo:(id)arg1;
- (void)setBrandReportWithPage;
- (void)layoutTalkingView;
- (int)getChatBotVoIPOpenScene;
- (id)dataReporter;
- (void)setDataReporter:(id)arg1;
- (id)reportAiChatExtInfo;
- (void)setReportAiChatExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
