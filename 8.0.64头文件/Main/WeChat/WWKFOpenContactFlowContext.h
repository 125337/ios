@interface WWKFOpenContactFlowContext : NSObject
{
    BOOL _bPopVCWhenLeave; // +0x8
    BOOL _hasUserConfirm; // +0x9
    BOOL _showPageSheet; // +0xa
    BOOL _confirmInHalfScreen; // +0xb
    int _scene; // +0xc
    unsigned int _actionType; // +0x10
    MMUIViewController * _viewController; // +0x18
    id /* block */ _completeBlock; // +0x20
    NSString * _wwkfUrl; // +0x28
    WWKFContactBindNotifyCtx * _notifyCtx; // +0x30
    NSString * _sharecardTicket; // +0x38
    NSString * _antispamAlertText; // +0x40
    WWKFContentSendMsgInfo * _quickSendMsgInfo; // +0x48
    NSString * _encUsername; // +0x50
}
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id /* block */)completeBlock;
- (void)setCompleteBlock:(id /* block */)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)wwkfUrl;
- (void)setWwkfUrl:(id)arg1;
- (id)notifyCtx;
- (void)setNotifyCtx:(id)arg1;
- (id)sharecardTicket;
- (void)setSharecardTicket:(id)arg1;
- (id)antispamAlertText;
- (void)setAntispamAlertText:(id)arg1;
- (id)quickSendMsgInfo;
- (void)setQuickSendMsgInfo:(id)arg1;
- (BOOL)bPopVCWhenLeave;
- (void)setBPopVCWhenLeave:(BOOL)arg1;
- (BOOL)hasUserConfirm;
- (void)setHasUserConfirm:(BOOL)arg1;
- (BOOL)showPageSheet;
- (void)setShowPageSheet:(BOOL)arg1;
- (BOOL)confirmInHalfScreen;
- (void)setConfirmInHalfScreen:(BOOL)arg1;
- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (id)encUsername;
- (void)setEncUsername:(id)arg1;
- (void).cxx_destruct;
@end
