@interface WebviewJSEventHandler_requestBindPhoneNumber : WebviewJSEventHandlerBase <MMPageSheetBottomViewDelegate>
{
    MMPageSheetAdapter * _adapter; // +0x8
    NSString * _bindPhoneNum; // +0x10
    JSEvent * _event; // +0x18
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)showHalfScreen:(id)arg1;
- (id)getRequestInfoView:(id)arg1;
- (id)getPhoneInfoView;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)adapter;
- (void)setAdapter:(id)arg1;
- (id)bindPhoneNum;
- (void)setBindPhoneNum:(id)arg1;
- (id)event;
- (void)setEvent:(id)arg1;
- (void).cxx_destruct;
@end

