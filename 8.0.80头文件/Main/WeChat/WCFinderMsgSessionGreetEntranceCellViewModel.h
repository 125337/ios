@interface WCFinderMsgSessionGreetEntranceCellViewModel : WCFinderMsgSessionCellViewModel <WCFinderContactExt>
{
    MMBaseSessionCellData * _cellData; // +0x8
    NSString * _senderUserName; // +0x10
    WCFinderContact * _realChatContact; // +0x18
}
- (id)headImage;
- (id)sessionTitle;
- (void)updateCellView;
- (void)updateCellData;
- (void)updateCellViewDataWithSesionInfo:(id)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (id)cellData;
- (void)setCellData:(id)arg1;
- (id)senderUserName;
- (void)setSenderUserName:(id)arg1;
- (id)realChatContact;
- (void)setRealChatContact:(id)arg1;
- (void).cxx_destruct;
@end
