@interface WAJSEventHandler_openNFCCard : WAJSEventHandler_BaseEvent <PKAddPaymentPassViewControllerDelegate, WCPayIssueNFCCardCgiDelegate, WCPayNFCCardApplyControlLogicDelegate, WCPayNFCCardChargeControlLogicDelegate>
{
    PKAddPaymentPassViewController * _addPaymentPassViewController; // +0x8
    NSString * _outOrderNo; // +0x10
    NSString * _cardType; // +0x18
    NSString * _cardId; // +0x20
    unsigned long long _actType; // +0x28
    id /* block */ _completionHandler; // +0x30
}
- (void)handleJSEvent:(id)arg1;
- (void)onWCPayNFCCardApplyControlLogicSuccess:(id)arg1;
- (id)genRetDict;
- (void)onWCPayNFCCardApplyControlLogicCancel;
- (void)onWCPayNFCCardApplyControlLogicFailed:(id)arg1;
- (void)onWCPayNFCCardChargeControlLogicSuccess;
- (void)onWCPayNFCCardChargeControlLogicCancel;
- (void)onWCPayNFCCardChargeControlLogicFailed:(id)arg1;
- (void)showErrorAlertView:(id)arg1;
- (void)onFailReturn;
- (id)addPaymentPassViewController;
- (void)setAddPaymentPassViewController:(id)arg1;
- (id)outOrderNo;
- (void)setOutOrderNo:(id)arg1;
- (id)cardType;
- (void)setCardType:(id)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (unsigned long long)actType;
- (void)setActType:(unsigned long long)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

