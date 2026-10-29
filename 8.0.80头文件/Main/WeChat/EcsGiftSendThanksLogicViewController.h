@interface EcsGiftSendThanksLogicViewController : MMUIViewController <SendThanksConfirmSheetViewDelegate, EcsTipsSheetViewDelegate>
{
    BOOL _alreadyShow; // +0x70
    id <SendThanksResultDelegate> _delegate; // +0x78
    id /* block */ _callback; // +0x80
    AnyPromise * _requestThanksInfoPromise; // +0x88
    NSString * _thanksOrder; // +0x90
    NSString * _giverNickName; // +0x98
    NSString * _chatTargetName; // +0xa0
}
- (id)initWithParams:(id)arg1;
- (void)viewDidLoad;
- (void)handleTap;
- (void)viewDidAppear:(BOOL)arg1;
- (void)handleRequestThanksInfoError;
- (void)showSendConfirm;
- (void)showHasThanksTips:(id)arg1;
- (BOOL)checkCanSendThanks:(id)arg1;
- (id)requestThanksInfo;
- (void)reportSendResult:(BOOL)arg1;
- (void)dismissMyself;
- (BOOL)isIllegalString:(id)arg1;
- (void)OnSendThanksConfirmSheetViewSend:(id)arg1;
- (void)OnSendThanksConfirmSheetViewCancel:(id)arg1;
- (void)OnSendThanksConfirmSheetViewClose:(id)arg1;
- (void)OnSheetViewClose:(id)arg1;
- (void)OnIknowClick:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (BOOL)alreadyShow;
- (void)setAlreadyShow:(BOOL)arg1;
- (id)requestThanksInfoPromise;
- (void)setRequestThanksInfoPromise:(id)arg1;
- (id)thanksOrder;
- (void)setThanksOrder:(id)arg1;
- (id)giverNickName;
- (void)setGiverNickName:(id)arg1;
- (id)chatTargetName;
- (void)setChatTargetName:(id)arg1;
- (void).cxx_destruct;
@end
