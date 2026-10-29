@interface WAPNAuthCoordinator : NSObject <WAPNAuthSheetDelegate, WAPNAuthToastSheetDelegate, WAPNAuthVerifySheetDelegate, WAPNAuthAddViewControllerDelegate, WAPNAuthManagerViewControllerDelegate>
{
    BOOL _agentCardMode; // +0x8
    BOOL _sheetShown; // +0x9
    BOOL _finished; // +0xa
    BOOL _interactivePopDisabled; // +0xb
    BOOL _originInteractivePopEnabled; // +0xc
    BOOL _isAutoAuthMode; // +0xd
    WAPNAuthRequestParam * _param; // +0x10
    MMUIViewController * _fromVC; // +0x18
    id /* block */ _completion; // +0x20
    WAPNAuthCgiHelper * _cgiHelper; // +0x28
    WAPNAuthGatewayFetcher * _gatewayFetcher; // +0x30
    WAPNAuthSheetInfo * _sheetInfo; // +0x38
    WAPNAuthSheet * _sheet; // +0x40
    WAPNAuthToastSheet * _toastSheet; // +0x48
    WAPNAuthVerifySheet * _verifySheet; // +0x50
    double _sheetExposeTime; // +0x58
    WAPNAuthPhoneInfo * _pendingPhone; // +0x60
    NSString * _pendingPhoneNumType; // +0x68
    NSString * _localMobile; // +0x70
    WAPNAuthCardSession * _cardSession; // +0x78
}
- (id)initWithParam:(id)arg1 fromVC:(id)arg2;
- (void)dealloc;
- (void)startWithCompletion:(id /* block */)arg1;
- (void)startGatewayFlow;
- (void)handleGatewayPhoneNumberResult:(id)arg1 bizErrno:(long long)arg2;
- (void)mergeGatewayPhoneInfo:(id)arg1 into:(id)arg2;
- (void)handleGetAllPhoneResult:(id)arg1 bizErrno:(long long)arg2 errMsg:(id)arg3;
- (BOOL)tryAutoAuth;
- (void)notifyAgentAutoAuthWithResult:(id)arg1;
- (void)disableInteractivePopIfNeeded;
- (void)restoreInteractivePopIfNeeded;
- (id)hostView;
- (id)subFlowPresenterVC;
- (void)showAuthSheet;
- (id)cardSheet;
- (void)handoverToAgentCard;
- (void)fillAppInfoFromContact;
- (void)showToastSheetForNoQuota;
- (void)showToastSheetForLimit;
- (void)showToastSheetWithType:(long long)arg1;
- (void)handoverToastToAgentCardWithType:(long long)arg1;
- (id)phoneNumTypeForPhone:(id)arg1;
- (void)proceedWithSelectedPhone:(id)arg1;
- (void)showVerifyForPhone:(id)arg1;
- (void)sheet:(id)arg1 didSelectPhone:(id)arg2 acceptedPrivacy:(BOOL)arg3;
- (void)sheetDidTapAddPhone:(id)arg1;
- (void)sheetDidTapManage:(id)arg1;
- (void)sheetDidCancel:(id)arg1;
- (void)sheet:(id)arg1 didTapPrivacyLink:(id)arg2;
- (void)toastSheetDidClose:(id)arg1;
- (void)toastSheetDidTapFeedback:(id)arg1;
- (void)openWebURL:(id)arg1;
- (void)verifySheet:(id)arg1 didSucceedWithResult:(id)arg2;
- (void)verifySheetDidClose:(id)arg1;
- (void)addVC:(id)arg1 didAddPhone:(id)arg2;
- (void)managerVCDidUpdatePhoneList:(id)arg1;
- (void)pageSheet:(id)arg1 needToPushViewController:(id)arg2;
- (void)presentSubViewController:(id)arg1;
- (void)finishWithResult:(id)arg1;
- (void)finishCardSessionWithResult:(id)arg1;
- (void)cancel;
- (void)cancelFromCard;
- (BOOL)agentCardMode;
- (void)setAgentCardMode:(BOOL)arg1;
- (id)param;
- (void)setParam:(id)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)cgiHelper;
- (void)setCgiHelper:(id)arg1;
- (id)gatewayFetcher;
- (void)setGatewayFetcher:(id)arg1;
- (id)sheetInfo;
- (void)setSheetInfo:(id)arg1;
- (id)sheet;
- (void)setSheet:(id)arg1;
- (id)toastSheet;
- (void)setToastSheet:(id)arg1;
- (id)verifySheet;
- (void)setVerifySheet:(id)arg1;
- (BOOL)sheetShown;
- (void)setSheetShown:(BOOL)arg1;
- (double)sheetExposeTime;
- (void)setSheetExposeTime:(double)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (id)pendingPhone;
- (void)setPendingPhone:(id)arg1;
- (id)pendingPhoneNumType;
- (void)setPendingPhoneNumType:(id)arg1;
- (id)localMobile;
- (void)setLocalMobile:(id)arg1;
- (BOOL)interactivePopDisabled;
- (void)setInteractivePopDisabled:(BOOL)arg1;
- (BOOL)originInteractivePopEnabled;
- (void)setOriginInteractivePopEnabled:(BOOL)arg1;
- (id)cardSession;
- (void)setCardSession:(id)arg1;
- (BOOL)isAutoAuthMode;
- (void)setIsAutoAuthMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
