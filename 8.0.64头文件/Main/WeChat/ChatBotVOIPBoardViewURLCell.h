@interface ChatBotVOIPBoardViewURLCell : ChatBotVOIPBoardViewCardCell <IMsgExt>
- (id)initWithMessage:(id)arg1;
- (void)updateReportData:(id)arg1;
- (void)changeImageViewContent;
- (void)onTapAction;
- (void)viewLinkMsg;
- (void)jumpWebView:(id)arg1 nsUrl:(id)arg2 nsRawUrl:(id)arg3;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (void)setForwardThumbData:(id)arg1;
@end
