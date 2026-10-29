@interface WCRedEnvelopesPreviewControlLogic : WCRedEnvelopesControlLogic <IStoreEmotionSingleDownloadMgrExt, WCRedEnvelopesReceiveHomeViewDelegate, WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate>
{
    WCRedEnvelopesReceiveHomeView * introView; // +0x38
    BOOL _bHasStartDownloadEmoticon; // +0x40
    EmojiInfoObj * _emojiInfoObj; // +0x48
    WCRedEnvelopesAtmospherePagView * _atmospherePagView; // +0x50
    UIView * _redEnvelopesDetailView; // +0x58
}
- (id)redEnvelopesBaseInfoDict;
- (void)startLogic;
- (BOOL)shouldShowAtmospherePagView;
- (void)startDownloadEmoticonFromMsgData;
- (void)onSingleEmotionDownloadOkWithWrap:(id)arg1 imageData:(id)arg2;
- (void)WCRedEnvelopesReceiveHomeViewBack;
- (void)closeIntroView;
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes;
- (void)onOpenRedEnvelopes;
- (void)playDetailPag;
- (void)showDetailView;
- (void)closeAnimationWindowAndShowDetailView:(id)arg1;
- (BOOL)HasMoreDetailList;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBeginDragging;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerViewWillBePop;
- (BOOL)bHasStartDownloadEmoticon;
- (void)setBHasStartDownloadEmoticon:(BOOL)arg1;
- (id)emojiInfoObj;
- (void)setEmojiInfoObj:(id)arg1;
- (id)atmospherePagView;
- (void)setAtmospherePagView:(id)arg1;
- (id)redEnvelopesDetailView;
- (void)setRedEnvelopesDetailView:(id)arg1;
- (void).cxx_destruct;
@end

