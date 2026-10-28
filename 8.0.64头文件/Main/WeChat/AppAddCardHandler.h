@interface AppAddCardHandler : MMObject <WCCardAddHelperDelegate, IPreEnterWechatLogicExt>
{
    NSString * _cardID; // +0x8
    OpenApiParameter * _parameter; // +0x10
    WCCardAddHelper * _addHelper; // +0x18
}
- (void)startCheckAndAddCard:(id)arg1;
- (void)onPreEnterWechatDone;
- (void)cancelCheckAndAddCard;
- (void)createWechatAppAddCard;
- (void)cancelHandleAndReturn3rdApp:(int)arg1 importInfo:(id)arg2;
- (id)getViewController;
- (void)onAddSuccess:(id)arg1;
- (void)onAddFail:(id)arg1;
- (void)onAddCancel;
- (void).cxx_destruct;
@end
