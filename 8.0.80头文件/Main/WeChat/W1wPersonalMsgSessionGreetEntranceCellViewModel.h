@interface W1wPersonalMsgSessionGreetEntranceCellViewModel : W1wPersonalMsgSessionCellViewModel <W1wUserContactMgrExt>
{
    NSString * _senderUserName; // +0x8
    W1wUserContact * _realChatContact; // +0x10
}
- (id)headImage;
- (id)sessionTitle;
- (void)updateCellView;
- (void)updateCellData;
- (void)updateCellViewDataWithSessionInfo:(id)arg1;
- (void)W1wUserContactUpdatedForUsername:(id)arg1 contact:(id)arg2;
- (id)senderUserName;
- (void)setSenderUserName:(id)arg1;
- (id)realChatContact;
- (void)setRealChatContact:(id)arg1;
- (void).cxx_destruct;
@end
