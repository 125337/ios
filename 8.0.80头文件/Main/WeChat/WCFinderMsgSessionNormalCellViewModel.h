@interface WCFinderMsgSessionNormalCellViewModel : WCFinderMsgSessionCellViewModel <WCFinderContactExt>
{
    MMBaseSessionCellData * _cellData; // +0x8
    NSString * _realChatUserName; // +0x10
    WCFinderContact * _realChatContact; // +0x18
}
+ (id)cellDataForSessionInfo:(id)arg1;
- (id)realChatFinderContact;
- (void)updateCellView;
- (void)updateCellData;
- (void)setRealChatUserName:(id)arg1;
- (void)updateRealChatContact;
- (void)onFinderContactUpdate:(id)arg1;
- (id)cellData;
- (void)setCellData:(id)arg1;
- (id)realChatUserName;
- (id)realChatContact;
- (void)setRealChatContact:(id)arg1;
- (void).cxx_destruct;
@end
