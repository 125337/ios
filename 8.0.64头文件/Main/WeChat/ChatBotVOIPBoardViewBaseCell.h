@interface ChatBotVOIPBoardViewBaseCell : UITableViewCell <ChatBotVOIPBoardViewDelegate>
{
    AIMessageWrapInfo * _msgInfo; // +0x8
    CMessageWrap * _oMessageWrap; // +0x10
    ChatBotVoIPReportData * _reportData; // +0x18
    ChatBotVoIPReportDataPB * _baseReportDataPB; // +0x20
    id /* block */ _notifyBlock; // +0x28
}
- (double)setupViewWithWidth:(double)arg1;
- (id)initWithMessage:(id)arg1;
- (void)onTapSendToMe;
- (void)makeCardWithTitle:(id)arg1 subTitle:(id)arg2;
- (void)updateReportData:(id)arg1;
- (void)updateBaseReportDataPB:(id)arg1;
- (id)msgInfo;
- (void)setMsgInfo:(id)arg1;
- (id)oMessageWrap;
- (void)setOMessageWrap:(id)arg1;
- (id)reportData;
- (void)setReportData:(id)arg1;
- (id)baseReportDataPB;
- (void)setBaseReportDataPB:(id)arg1;
- (id /* block */)notifyBlock;
- (void)setNotifyBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
