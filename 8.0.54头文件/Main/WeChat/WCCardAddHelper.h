@interface WCCardAddHelper : MMObject <WCNewCardDetailViewControllerDelegate, WCCardBatchImportViewControllerDelegate>
{
    id <WCCardAddHelperDelegate> _delegate; // +0x8
    BOOL _isBatchReturn; // +0x10
    BOOL _isDetailReturn; // +0x11
    BOOL _isFromAppBrand; // +0x12
    unsigned long long _appBrandModeType; // +0x18
    WCCardBatchImportViewController * _batchImportVC; // +0x20
    WCNewCardDetailViewController * _cardDetailVC; // +0x28
}
- (id)initWithDelegate:(id)arg1;
- (void)handleCardListInfo:(id)arg1;
- (void)handleCardListInfo:(id)arg1 isPush:(BOOL)arg2;
- (void)handleCardListInfo:(id)arg1 isPush:(BOOL)arg2 isFromAppBrand:(BOOL)arg3;
- (void)cancelHandle;
- (void)dismissViewController;
- (void)dismissImportVC;
- (void)onAcceptCardSuccess:(id)arg1;
- (void)onAcceptCardFail:(id)arg1;
- (void)onDetailDidBeCleared;
- (void)onImportSuccess:(id)arg1;
- (void)onImportFail:(id)arg1;
- (void)onShareSuccess:(id)arg1;
- (void)onShareFail:(id)arg1;
- (void)onCancel;
- (void)onBatchDidBeCleared;
- (unsigned long long)appBrandModeType;
- (void)setAppBrandModeType:(unsigned long long)arg1;
- (id)batchImportVC;
- (void)setBatchImportVC:(id)arg1;
- (id)cardDetailVC;
- (void)setCardDetailVC:(id)arg1;
- (BOOL)isBatchReturn;
- (void)setIsBatchReturn:(BOOL)arg1;
- (BOOL)isDetailReturn;
- (void)setIsDetailReturn:(BOOL)arg1;
- (BOOL)isFromAppBrand;
- (void)setIsFromAppBrand:(BOOL)arg1;
- (void).cxx_destruct;
@end

