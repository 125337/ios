@interface WCFinderMsgSessionCellViewModel : NSObject
{
    WCFinderMsgSessionCell * _cell; // +0x8
    WCFinderMsgSessionInfo * _sessionInfo; // +0x10
}
- (void)setCell:(id)arg1;
- (void)updateCellView;
- (void)setSessionInfo:(id)arg1;
- (void)updateCellData;
- (id)realChatFinderContact;
- (id)sessionTitle;
- (id)cell;
- (id)sessionInfo;
- (void).cxx_destruct;
@end

