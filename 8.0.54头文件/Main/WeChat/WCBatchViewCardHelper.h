@interface WCBatchViewCardHelper : MMObject <IWCCardPkgExt, WCNewCardDetailViewControllerDelegate, WCCardListViewControllerDelegate>
{
    NSString * _templateMsgId; // +0x8
    unsigned long long _appBrandModeType; // +0x10
    NSMutableArray * _aryCardData; // +0x18
    MMUIViewController * _currViewController; // +0x20
    id <WCBatchViewCardHelpDelegate> _delegate; // +0x28
    unsigned long long _fromScene; // +0x30
    MMUIViewController * _nextViewController; // +0x38
}
- (id)initWithDelegate:(id)arg1;
- (void)handleCardTpInfoList:(id)arg1 fromScene:(unsigned long long)arg2 isPush:(BOOL)arg3;
- (void)onWCCardListViewControllerCancel:(id)arg1;
- (void)onWCCardListDidBeCleared;
- (void)onWCCardListViewControllerDidSelected:(id)arg1 listViewController:(id)arg2;
- (void)onDetailDidBeCleared;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)onUseCard:(id)arg1 lastIndex:(id)arg2 delayTime:(double)arg3;
- (void)onGetCardsItemByTpInfo:(id)arg1 ErrCode:(int)arg2;
- (void)handleGiftCardTpInfoList:(id)arg1 fromScene:(unsigned long long)arg2;
- (id)templateMsgId;
- (void)setTemplateMsgId:(id)arg1;
- (unsigned long long)appBrandModeType;
- (void)setAppBrandModeType:(unsigned long long)arg1;
- (id)aryCardData;
- (void)setAryCardData:(id)arg1;
- (id)currViewController;
- (void)setCurrViewController:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (id)nextViewController;
- (void)setNextViewController:(id)arg1;
- (void).cxx_destruct;
@end

