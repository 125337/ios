@interface LiteAppJsApiSendTextMessage : LiteAppJsApi <ForwardMessageLogicDelegate, SharePreConfirmSheetViewDelegate>
{
    ForwardMessageLogicController * _forwardMsgLogic; // +0x20
    NSMutableDictionary * _result; // +0x28
    NSDictionary * _params; // +0x30
    SharePreConfirmSheetView * _confirmSheetView; // +0x38
    NSArray * _pendingMsgList; // +0x40
    CContact * _targetContact; // +0x48
    BOOL _hasResponded; // +0x50
}
- (id)init;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)OnSharePreConfirmSheetViewCancel:(id)arg1;
- (void)OnSharePreConfirmSheetViewClose:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void).cxx_destruct;
@end
