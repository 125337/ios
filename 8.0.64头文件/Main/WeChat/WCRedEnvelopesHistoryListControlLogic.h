@interface WCRedEnvelopesHistoryListControlLogic : WCRedEnvelopesControlLogic <WCBaseControlLogicDeleagte, WCBaseControlMgrExt, WCRedEnvelopesRedEnvelopesHistoryListViewControllerDelegate>
{
    int m_enWCRedEnvelopesHistoryType; // +0x38
}
- (id)initWithData:(id)arg1 Scene:(int)arg2;
- (void)startLogic;
- (void)requestData;
- (void)WCRedEnvelopesRedEnvelopesHistoryListViewControllerBack;
- (BOOL)HasMoreDetailList;
- (void)OnLoadMoreRedEnvelopesList;
- (void)OnDidSelectSendedRedEnvelopesHistoryItem:(id)arg1;
- (void)OnDidSelectReceivedRedEnvelopesHistoryItem:(id)arg1;
- (void)OnDeleteSendedRedEnvelopesHistoryItem:(id)arg1;
- (void)OnDeleteReceivedRedEnvelopesHistoryItem:(id)arg1;
- (void)OnDidSelectOtherYear:(id)arg1;
- (void)OnQueryUserSendOrReceiveRedEnveloperListRequest:(id)arg1 Error:(id)arg2;
- (void)OnChangeToScene:(int)arg1;
@end
