@interface ChatBotVOIPBoardViewBaseCell : UITableViewCell <ChatBotVOIPBoardViewDelegate>
{
    int _openScene; // +0x8
    AIMessageWrapInfo * _msgInfo; // +0x10
    CMessageWrap * _oMessageWrap; // +0x18
    ChatBotVoIPReportData * _reportData; // +0x20
    ChatBotVoIPReportDataPB * _baseReportDataPB; // +0x28
    id /* block */ _notifyBlock; // +0x30
}
- (double)setupViewWithWidth:(double)arg1;
- (id)initWithMessage:(id)arg1 openScene:(int)arg2;
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
- (int)openScene;
- (void)setOpenScene:(int)arg1;
- (void).cxx_destruct;
@end
